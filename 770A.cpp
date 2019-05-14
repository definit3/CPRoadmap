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
    int n,k;
    cin>>n>>k;
    string s;
    int j=97;
    int count=0;
    for(int i=0;i<n;i++,j++)
    {
    	s+=j;
    	count++;
    	if(j==122)j=96;
    	if(count==k)
    	{
    		j=96;
    		count=0;
    	}
    }
   	cout<<s<<endl;

    return 0;
}
