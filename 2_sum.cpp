// brute force - intutuion

#include <bits/stdc++.h>
using namespace std;

string twoSum(int arr[], int n, int k)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] + arr[j] == k)
            {
                return "yes";
            }
        }
    }
        return "no";

}

// better approach - hashing


int main()
{

    int n;
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int target;
    cin >> target;

    string ans = twoSum(arr, n, target);
    cout << ans;
}