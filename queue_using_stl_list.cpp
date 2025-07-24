#include <bits/stdc++.h>
using namespace std;

class MyStack
{
public:
    list<int> l;

    void push(int x)
    {
        l.push_back(x);
    }

    void pop()
    {
        if (!l.empty())
        {
            l.pop_front();
        }
    }

    int top()
    {
        if (!l.empty())
        {
            return l.front();
        }
        return -1;
    }

    int size()
    {
        return l.size();
    }

    bool empty()
    {
        return l.empty();
    }
};

int main()
{
    MyStack st;

    int n;
    cin >> n;

    while (n--)
    {
        int x;
        cin >> x;
        st.push(x);
    }

    while (!st.empty())
    {
        cout << st.top() << " ";
        st.pop();
    }

    return 0;
}