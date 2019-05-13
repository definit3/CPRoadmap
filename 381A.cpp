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
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++)
    	cin>>arr[i];
    int l=0,h=n-1;
    int s=0,d=0;
    int i=0;
    while(l<=h)
    {
    	if(i%2==0)
    	{
    		if(arr[l]>arr[h])
	    	{
	    		s+=arr[l];
	    		l+=1;
	    	}
	    	else
	    	{
	    		s+=arr[h];
	    		h-=1;
	    	}
	    }
	    else
	    {
    		if(arr[l]>arr[h])
	    	{
	    		d+=arr[l];
	    		l+=1;
	    	}
	    	else
	    	{
	    		d+=arr[h];
	    		h-=1;
	    	}

	    }
	    i++;

    }
    cout<<s<<" "<<d<<endl;

    return 0;
}
