#include <bits/stdc++.h>
using namespace std;
int main()
{
    short n, m;
    map<string, string> MSIDN_IMSI;
    map<string, string> region_MSIDN;

    //Get data
    cin >> n;
    cin.ignore();
    for(int i=0; i<n; i++)
    {
        string MSIDN, IMSI;
        getline(cin, MSIDN, ',');
        getline(cin, IMSI);
        MSIDN_IMSI[MSIDN] = IMSI;
    }
    cin >> m;
    cin.ignore();
    for(int i=0; i<m; i++)
    {
        string MSIDN, region;
        getline(cin, region, ',');
        getline(cin, MSIDN);
        region_MSIDN[MSIDN] = region;
    }

    //Map
    bool nomatch = true;
    map<string, string>::iterator i, j;
    for(i = MSIDN_IMSI.begin(); i != MSIDN_IMSI.end(); i++)
    {
        for(j = region_MSIDN.begin(); j != region_MSIDN.end(); j++)
        {
            if((*i).first == (*j).first)
            {
                nomatch = false;
                cout<<(*i).first<<","<<(*i).second<<","<<(*j).second<<"\n";
            }
        }
    }
    if(nomatch) cout<<"nomatch"<<"\n";
}