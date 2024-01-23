#include<iostream>

using namespace std;

int main()
{
    char s[5001]; int len;
    int max[2] = {0, 0};

    cin>>s;
   
    //get length
    for(len=0; s[len]!='\0'; len++);

    for(int i=1; i<len; i++)
    {
        int matches = 0;
        for(int j = 0; j<len-i; j++)
        {
            if(s[j] == s[j+i])
            {
                matches++;
            }
        }

        //update max
        if(matches > max[1])
        {
            max[0] = i;
            max[1] = matches;
        }
    }

    cout<<max[1]<<" "<<max[0];

    return 0;
}