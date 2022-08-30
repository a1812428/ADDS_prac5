#include "FilterGeneric.h"
#ifndef FILTER_ODD_H
#define FILTER_ODD_H

class FilterOdd : public FilterGeneric
{
private:
    bool g(int);

public:
    FilterOdd();
};

#endif
