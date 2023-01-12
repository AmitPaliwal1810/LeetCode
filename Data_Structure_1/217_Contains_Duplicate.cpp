/*
LeetCode Solution using set.

explaination: 

1. create a set.
2. then find the that number in set if not present in set then push the element in set, if it found in the set means it repeating. And if it's repesting return true other wise false.

*/

class Solution
{
public:
    bool containsDuplicate(vector<int> &nums)
    {
        set<int> s;
        for (int i = 0; i < nums.size(); i++)
        {
            auto it = s.find(nums[i]);
            if (it == s.end())
                s.insert(nums[i]);
            else
                return true;
        }
        return false;
    }
};

/*
complete solution
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {1, 2, 3, 4};
    bool flag = false;
    sort(v.begin(), v.end());
    for (int i = 0; i < v.size(); ++i)
    {
        if (v[i] == v[i + 1])
        {
            flag = true;
            break;
        }
    }

    if (flag)
    {
        cout << "true";
    }
    else
    {
        cout << "false";
    }
}
