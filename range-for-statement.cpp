// set i to zero, while i is not 10, copy the ith element and increment i
// increment operator ++ adds 1 
// 1 example of a range-for-statement, a simpler for loop statement for loops that traverse a sequence in a simple way

void print()
{
    int v[] = {0,1,2,3,4,5,6,7,8,9};

    for (auto x : v) // for each x in v
        cout << x << '\n';

    for (auto x: {10,21,32,43,54,65})
        cout << x << '\n';
    // ...
}
