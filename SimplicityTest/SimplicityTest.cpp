#include "SimplicityTest.h"

namespace SimplicityTest
{
    LemannSimplicityTest::LemannSimplicityTest()
    {
        this->gen = new boost::lagged_fibonacci607(time(0));
    }

    LemannSimplicityTest::~LemannSimplicityTest()
    {
        delete this->gen;
    }

    bool LemannSimplicityTest::SimplicityTest(const boost::multiprecision::cpp_int& n, const double& p_error)
    {
        if(n < 0)
            throw "Error: number must be bigger than zero";
        if (p_error <= 0.0)
            throw "Error: probability error must be bigger than zero";

        if (n == 2 || n == 3)
            return true;

        if (n < 2 || n % 2 == 0)
            return false;

        boost::random::uniform_int_distribution<boost::multiprecision::cpp_int> ui(boost::multiprecision::cpp_int(2), n - 2);

        boost::variate_generator<boost::lagged_fibonacci607, boost::random::uniform_int_distribution<boost::multiprecision::cpp_int>> gen(*(this->gen), ui);

        unsigned int k = 0;
        boost::multiprecision::cpp_int exp = (n - 1) / 2;

        while (std::pow(0.5, k) > p_error && k < MAX_ITER)
        {
            boost::multiprecision::cpp_int t = boost::multiprecision::powm(gen(), exp, n);

            if (t != 1 && t != (n - 1))
                return false;

            ++k;
        }

        return true;
    }

    boost::multiprecision::cpp_int GetRandomPrimeNumber(IProbSimplicityTest* test, const unsigned long& capacity, const double& p_error, unsigned long& _count_iter)
    {
        if(test == nullptr)
            throw "Error: nullptr exception";
        if (capacity <= 0)
            throw "Error: capacity must be bigger than zero";
        if(p_error <= 0.0)
            throw "Error: probability error must be bigger than zero";

        boost::lagged_fibonacci607 engine(time(0));

        boost::random::uniform_int_distribution<boost::multiprecision::cpp_int> ui
        (
            boost::multiprecision::cpp_int(boost::multiprecision::pow(boost::multiprecision::cpp_int(10), capacity - 1)),
            boost::multiprecision::cpp_int(boost::multiprecision::pow(boost::multiprecision::cpp_int(10), capacity) - 1)
        );

        boost::variate_generator<boost::lagged_fibonacci607, boost::random::uniform_int_distribution<boost::multiprecision::cpp_int>> gen(engine, ui);

        unsigned long count_iter = 0;

        boost::multiprecision::cpp_int num;

        do
        {
             num = gen();

             ++count_iter;

        } while (!test->SimplicityTest(num, p_error));

        _count_iter = count_iter;

        return num;
    }
}
