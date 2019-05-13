//DEFINITE

using namespace std;
#include <iostream>
#include <string>
#include <math.h>
#include <stdio.h>
#include <bits/stdc++.h>
#define mem(x,val) memset((x),(val),sizeof(x));
#define rite(x) freopen(x,"w",stdout);
#define read(x) freopen(x,"r",stdin);
#define all(x) x.begin(),x.end()
#define sz(x) ((int)x.size())
#define pb push_back
#define clr clear()
#define FASTINPUT       ios_base::sync_with_stdio(0);cin.tie(0);
typedef long long int lli;
typedef unsigned long long int ulli;
typedef vector<int> vi;
typedef map<int,int> mii;
typedef set<int> si;
typedef pair<int,int> pii;
typedef vector<pii> vpii;

int main()
{
    FASTINPUT
    int a1,a2,a3,a4;
    cin>>a1>>a2>>a3>>a4;
    string s;
    cin>>s;
    int c=0;
    for(int i=0;i<s.length();i++)
    {
    	if(s[i]=='1')c+=a1;
    	else if(s[i]=='2')c+=a2;
    	else if(s[i]=='3')c+=a3;
    	else c+=a4;
    }
    cout<<c<<endl;

    return 0;
}
