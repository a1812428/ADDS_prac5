#include "ReduceGCD.h"

int ReduceGCD::binaryOperator(int num1, int num2)
{
    return (num1 % num2 == 0) ? num2 : binaryOperator(num2, num1 % num2);
}

ReduceGCD::ReduceGCD()
{
}