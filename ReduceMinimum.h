#include "ReduceGeneric.h"
#ifndef REDUCE_MINIMUM_H
#define REDUCE_MINIMUM_H

class ReduceMinimum : public ReduceGeneric
{
private:
    int binaryOperator(int, int);

public:
    ReduceMinimum();
};

#endif
