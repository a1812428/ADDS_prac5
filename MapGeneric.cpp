#include "MapGeneric.h"

MapGeneric::MapGeneric()
{
    cnt = 0;
    brr.clear();
}

int MapGeneric::f(int x)
{
    return x;
}

vector<int> MapGeneric::map(vector<int> arr)
{
    if (cnt == arr.size())
        return brr;
    else
    {
        brr.push_back(f(arr[cnt]));
        cnt++;
        return map(arr);
    }
}
