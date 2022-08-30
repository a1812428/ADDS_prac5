#include <bits/stdc++.h>
using namespace std;

#ifndef FILTER_GENERIC_H
#define FILTER_GENERIC_H

class FilterGeneric
{
private:
    virtual bool g(int) = 0;
    int count;
    vector<int> arr;

public:
    FilterGeneric();
    vector<int> filter(vector<int>);
};
#endif
