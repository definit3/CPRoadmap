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

    for(int j=n-1;j>=0;j--)
    {
    	for(int i=j-1;i>=0;i--)
    	{
    		if(arr[i]>arr[j])
    		{
    			int temp=arr[j];
    			arr[j]+=arr[i]-arr[j];
    			arr[i]-=arr[i]-temp;
    		}
    	}
    }
    for(int i=0;i<n;i++)cout<<arr[i]<<" ";
    cout<<endl;

    return 0;
}
