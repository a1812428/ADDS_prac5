#include "FilterForTwoDigitPositive.h"

bool FilterForTwoDigitPositive::g(int num)
{
    return (num > 9 && num < 100);
}

FilterForTwoDigitPositive::FilterForTwoDigitPositive()
{
}