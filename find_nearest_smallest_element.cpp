#include <bits/stdc++.h>
using namespace std;

vector<int> prevNearestElement(int *arr, int n)
{
    vector<int> ans(n);
    stack<int> s;
    s.push(-1);

    for (int i = 0; i < n; i++)
    {
        while (s.top() != -1 && arr[i] <= s.top())
        {
            s.pop();
        }
        ans[i] = s.top();
        s.push(arr[i]);
    }
    return ans;
}

int main()
{
    int n;
    cout << "Enter the size of array : ";
    cin >> n;
    int *arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    vector<int> ans = prevNearestElement(arr, n);

    for (int i : ans)
    {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}