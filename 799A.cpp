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
    int n,t,k,d;
    cin>>n>>t>>k>>d;
    // if(n<=k)
    // {
    // 	cout<<"NO"<<endl;
    // 	return 0;
    // }
    // if(d<t)
    // {
    // 	cout<<"YES"<<endl;
    // 	return 0;
    // }
    // if((double)n/k<=(double)d/t)
    // {
    // 	cout<<"NO"<<endl;
    // 	return 0;
    // }
    // else cout<<"YES"<<endl;
    int j=k;
    for(int i=t;;i+=t)
    {
    	
    	if(n<=j)
    	{
    		cout<<"NO"<<endl;
    		return 0;
    	}
    	if(d<i)
    	{
    		cout<<"YES"<<endl;
    		return 0;
    	}
    	j+=k;
    }

    return 0;
}
