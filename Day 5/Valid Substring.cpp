
#include <bits/stdc++.h>
using namespace std;


class Solution
{
public:
    int findMaxLen(string s)
    {
        if (s.length() < 2)
        {
            return 0;
        }
        stack<int> st;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == '(')
            {
                st.push(i);
            }
            else
            {
                if (!st.empty() && s[(st.top())] == '(')
                {
                    st.pop();
                }
                else
                {
                    st.push(i);
                }
            }
        }
        int Max = 0;
        int end = s.length();

        while (!st.empty())
        {
            int ele = st.top();
            st.pop();
            Max = max(Max, end - ele - 1);
            end = ele;
        }

        return max(end, Max);
    }
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string S;
        cin >> S;
        Solution ob;
        cout << ob.findMaxLen(S) << endl;
    }
    return 0;
}

