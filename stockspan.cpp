#include <iostream>
#include <vector>
#include <stack>

using namespace std;

int main()
{
    vector<int> arr = {100, 80, 60, 70, 60, 75, 85};

    int n = arr.size();
    vector<int> ans(arr.size(), 0);
    stack<int> st; 

    for (int i = 0; i < n; i++) //O(n)
    {
        while (st.size() > 0 && arr[st.top()] <= arr[i])
        {
            st.pop();
        }

        if (st.empty())
        {
            ans[i] = i + 1;
        }
        else
        {
            ans[i] = i - st.top();
        }

        st.push(i);
    }

    for(int val : ans){
        cout << val << " ";
    }
    cout << endl;

    return 0;
}