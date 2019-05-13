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
    int y,w;
    cin>>y>>w;
    y=max(y,w);
    y=6-y+1;

    if(y%6==0)
    	cout<<y/6<<"/1"<<endl;
    else if(y%3==0)
    	cout<<y/3<<"/2"<<endl;
    else if(y%2==0)
    	cout<<y/2<<"/3"<<endl;
    else
    	cout<<y<<"/6"<<endl;

    return 0;
}
