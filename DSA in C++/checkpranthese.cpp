#include <iostream>
#include <stack>
using namespace std;
bool checkcondition(string expre)
{
    stack<char> st;
    for (int i = 0; i < expre.length(); i++)
    {
        char ch = expre[i];
        if (ch == '[' || ch == '{' || ch == '(')
        {
            st.push(ch);
        }
        else
        {
            if (st.empty())
            {

                return false;
            }

            char top = st.top();
            if ((ch == ']' && top == '[' || ch == '}' && top == '{' || ch == ')' && top == '('))
            {
                st.pop();
            }

            else
            {
                return false;
            }
        }
    }
    if (st.empty())

        return true;
    return false;
}

int main()
{
    string expresson = "{([])}";
    if (checkcondition(expresson))
    {
        cout << "They are valid parenthes " << endl;
    }
    else
    {
        cout << "They are wrong parenthes " << endl;
    }

    return 0;
}