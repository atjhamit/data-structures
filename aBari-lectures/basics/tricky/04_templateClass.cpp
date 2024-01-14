#include <iostream>

#define LOG_L(x) std::cout << x << "\n"

template <class T, class T2>
class MathOperations
{
    T num1;
    T num2;

    public:
    MathOperations()
    {
        ;
    }

    MathOperations(T num1, T num2)
    {
        this->num1 = num1;
        this->num2 = num2;
    }

    T add();
    
    T sub();

    ~MathOperations()
    {
        ;
    }
};

template <class T, class T2>
T MathOperations<T, T2>::add()
{
    T sum;
    sum = this->num1 + this->num2;
    return sum;
}

template <class T, class T2>
T MathOperations<T, T2>::sub()
{
    T diff;
    diff = this->num1 - this->num2;
    return diff;
}

int main1()
{
    MathOperations<int, float> intObj(5,6);
    MathOperations<float, int> floatObj(5.5f, 6.6f);

    LOG_L("sum = " << intObj.add());
    LOG_L("diff = " << intObj.sub());

    LOG_L("sum = " << floatObj.add());
    LOG_L("diff = " << floatObj.sub());

    return 0;
}