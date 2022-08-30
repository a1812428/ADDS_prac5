#include "FilterGeneric.h"
#ifndef FILTERPOSITIVE_H
#define FILTERPOSITIVE_H

class FilterNonPositive : public FilterGeneric
{
private:
    bool g(int);

public:
    FilterNonPositive();
};
#endif
