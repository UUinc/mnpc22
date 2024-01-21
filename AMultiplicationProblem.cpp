#include<bits/stdc++.h>

using namespace std;

int main()
{
    double a,b,c;

    cin >> a >> b >> c;

    if(b==0)
    {
        if(c==0)
            cout<<"Yes";
        else
            cout<<"No";
        return 0;
    }

    if(a>=c/b)
        cout<<"Yes";
    else
        cout<<"No";
}