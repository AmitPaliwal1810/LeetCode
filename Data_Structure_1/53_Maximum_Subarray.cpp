/*
here we use Kadane's Algorithm
Description:

1. initialized current_sum = 0 and maximum_sum = INT_MIN (because , for negative numbers),
2. run the loop and get the sum
3. and find the maximum among the current_sum and maximum_sum
4. and if current sum is less than 0 , then set it to 0.

*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v = {-2, -1, -3, -4, -1, -2, -1, -5, -4};
    int current_sum = 0;
    int maximum_sum = INT_MIN;

    for (int i = 0; i < v.size(); ++i)
    {
        current_sum = current_sum + v[i];
        maximum_sum = max(current_sum, maximum_sum);
        if (current_sum < 0)
        {
            current_sum = 0;
        }
    }

    cout << maximum_sum;
}