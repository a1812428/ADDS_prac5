#include "FilterForTwoDigitPositive.h"
#include "FilterNonPositive.h"
#include "MapTriple.h"
#include "MapAbsoluteValue.h"
#include "ReduceMinimum.h"
#include "FilterOdd.h"
#include "ReduceGCD.h"

int main()
{
    vector<int> arr(20, 0);
    MapGeneric *map2 = new MapAbsoluteValue();
    FilterGeneric *filter2 = new FilterForTwoDigitPositive();
    ReduceGeneric *reduce1 = new ReduceMinimum();
    MapGeneric *map1 = new MapTriple();
    ReduceGeneric *reduce2 = new ReduceGCD();
    FilterGeneric *filter1 = new FilterOdd();
    for (auto &x : arr)
        cin >> x;
    arr = map1->map(arr);
    arr = map2->map(arr);
    arr = filter1->filter(arr);
    arr = filter2->filter(arr);
    int ans1 = reduce1->reduce(arr);
    int ans2 = reduce2->reduce(arr);
    cout << ans1 << " " << ans2;

    return 0;
}
