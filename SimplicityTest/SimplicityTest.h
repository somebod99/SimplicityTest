#ifndef SIMPLICITYTEST_H
#define SIMPLICITYTEST_H

#include <boost/multiprecision/cpp_int.hpp>
#include <boost/random.hpp>

namespace SimplicityTest
{
    constexpr unsigned int MAX_ITER = 100000;

    class IProbSimplicityTest
    {
    public:
        virtual ~IProbSimplicityTest() {}

        virtual bool SimplicityTest(const boost::multiprecision::cpp_int& n, const double& p_error) = 0;
    };

    class LemannSimplicityTest : public IProbSimplicityTest
    {
    public:
        LemannSimplicityTest();
        ~LemannSimplicityTest();

        virtual bool SimplicityTest(const boost::multiprecision::cpp_int& n, const double& p_error);

    private:
        boost::lagged_fibonacci607* gen;
    };

    boost::multiprecision::cpp_int GetRandomPrimeNumber(IProbSimplicityTest* test, const unsigned long& capacity, const double& p_error, unsigned long& _count_iter);
}

#endif // SIMPLICITYTEST_H
