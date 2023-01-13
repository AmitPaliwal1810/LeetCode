/*
 * @file 1_Two_Sum.cpp
 * @author your name (you@domain.com)
 * @brief
 * @version 0.1
 * @date 2023-01-13
 *
 * @copyright Copyright (c) 2023
 *
 */

// Brute force approach O(n^2) complexity
#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {2, 7, 11, 15};
    vector<int> ans;
    int target = 9;
    for (int i = 0; i < v.size(); ++i)
    {
        int sum = v[i];
        for (int j = i + 1; j < v.size(); ++j)
        {
            if (sum + v[j] == target)
            {
                ans.push_back(i);
                ans.push_back(j);
            }
        }
    }

    for (auto it : ans)
    {
        cout << it << " ";
    }
}

// optimal solution using unordered maps O(n) complexity

#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {2, 7, 11, 15};
    vector<int> ans;
    map<int, int> mpp;

    int target = 9;
    for (int i = 0; i < v.size(); ++i)
    {
        if (mpp.find(target - v[i]) != mpp.end())
        {
            ans.push_back(mpp[target - v[i]]);
            ans.push_back(i);
            break;
        }
        else
        {
            mpp[v[i]] = i;
        }
    }

    for (auto it : ans)
    {
        cout << it << " ";
    }
}