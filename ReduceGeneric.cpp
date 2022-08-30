#include "ReduceGeneric.h"

ReduceGeneric::ReduceGeneric()
{
    cnt = 0;
}

int ReduceGeneric::reduce(vector<int> arr)
{
    cnt = arr.size();
    if (cnt == 1)
        return arr[0];
    else if (cnt == 0)
        return 0;
    else
    {
        arr[cnt - 2] = binaryOperator(arr[cnt - 1], arr[cnt - 2]);
        arr.pop_back();
        return reduce(arr);
    }
}
