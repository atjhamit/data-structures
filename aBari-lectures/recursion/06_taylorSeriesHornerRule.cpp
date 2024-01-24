#include <iostream>

#define LOG_T(x)      std::cout << x << "\t"
#define LOG(x)    std::cout << x << "\n"

double facto(double n)
{
    
    if( n < 1)
    {
        return 1;
    }
    return n * facto(n - 1);
}

double pow(double m, double n)
{
    if(n < 1)
    {
        return 1;
    }
    
    if((int)n % 2 == 0)
    {
        return pow(m * m, n / 2);
    }

    return m * pow(m * m, (n - 1) / 2);
}

double taylorSeriesSelf(double x, double n)
{
    if(n < 1)
    {
        return 1;
    }

    return taylorSeriesSelf(x, n - 1) + (pow(x , n) / facto(n));
}

double taylorSeriesOptimized(double x, double n)
{
    static double num = 1;
    static double den = 1;

    if(n < 1)
    {
        return 1;
    }

    double result = taylorSeriesOptimized(x, n - 1);
    num *= x;
    den *= n;
    return (double)result + num / den;
}

double hornerLoop(double x, double n)
{
    double res = 1;

    for (int i = n; i > 0; i--)
    {
        res = 1 + (res * (x / i));
    }
    return res;
}

double hornerRecursive(double x, double n)
{
    static double res = 1;
    if(n < 1)
    {
        return res;
    }

    res = 1 + ((x / n) * res);

    return hornerRecursive(x , n - 1);
}

int main()
{
    double x = 4;
    double n = 15;

    LOG("Taylor series Self: \t" << taylorSeriesSelf(x, n));
    LOG("Taylor series Optimized: \t" << taylorSeriesOptimized(x, n));
    LOG("Honer's rule iterative:\t " << hornerLoop(x, n));
    LOG("Horner's rule recursive: \t" << hornerRecursive(x, n));

    return 0;
}