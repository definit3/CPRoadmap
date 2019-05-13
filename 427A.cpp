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
    int t=0;
    int count=0;
    for(int i=0;i<n;i++)
    {
    	cin>>arr[i];
    	if(arr[i]>0)t+=arr[i];
    	else if(t==0 && arr[i]<0)count+=1;
    	else t-=1;
    }
    cout<<count<<endl;



    return 0;
}
