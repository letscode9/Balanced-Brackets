
#include <bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    string s;
    cin>>s;
    int n=s.length();
    stack <char> ss;
    int f=0;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='('||s[i]=='{'||s[i]=='[')
            ss.push(s[i]);
        else
        {
            if(ss.empty())
            {
                f=1;
                break;
            }
            if(s[i]==')')
            {
                if(ss.top()!='(')
                {
                    f=1;
                    break;
                }
                ss.pop();
            }
            else if(s[i]=='}')
            {
                if(ss.top()!='{')
                {
                    f=1;
                    break;
                }
                ss.pop();
            }
            else
            {
                if(ss.top()!='[')
                {
                    f=1;
                    break;
                }
                ss.pop();
            }
        }
    }
    if(f||!ss.empty())
        cout<<"NO\n";
    else
        cout<<"YES\n";
  }
  return 0;
}
