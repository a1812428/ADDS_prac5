#include <bits/stdc++.h>
using namespace std;
#ifndef MAP_GENERIC_H
#define MAP_GENERIC_H

class MapGeneric
{
private:
    virtual int f(int) = 0;
    vector<int> brr;
    int cnt;

public:
    MapGeneric();
    vector<int> map(vector<int>);
};

#endif
