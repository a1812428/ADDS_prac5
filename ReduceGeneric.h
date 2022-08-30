#include <bits/stdc++.h>
using namespace std;
#ifndef REDUCE_GENERIC_H
#define REDUCE_GENERIC_H

class ReduceGeneric
{
private:
    virtual int binaryOperator(int, int) = 0;
    int cnt;

public:
    ReduceGeneric();
    int reduce(std::vector<int>);
};

#endif
