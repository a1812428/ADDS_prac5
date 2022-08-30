#include "FilterGeneric.h"
#ifndef FILTER_FOR_TWO_DIGIT_POSITIVE_H
#define FILTER_FOR_TWO_DIGIT_POSITIVE_H

class FilterForTwoDigitPositive : public FilterGeneric
{
private:
    bool g(int);

public:
    FilterForTwoDigitPositive();
};

#endif
