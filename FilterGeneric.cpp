#include "FilterGeneric.h"

vector<int> FilterGeneric::filter(vector<int> brr)
{
    if (count == brr.size())
        return arr;
    else
    {
        if (g(brr[count]))
            arr.push_back(brr[count]);
        count++;
        return filter(brr);
    }
}

FilterGeneric::FilterGeneric()
{
    count = 0;
    arr.clear();
}