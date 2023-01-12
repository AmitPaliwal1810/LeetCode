/*
LeetCode Solution
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
