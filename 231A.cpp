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
    int arr[n][3];
    for(int i=0;i<n;i++)
       	for(int j=0;j<3;j++)
    		cin>>arr[i][j];

    int ans=0;
    for(int i=0;i<n;i++)
    {
    	int count=0;
    	for(int j=0;j<3;j++)
    		count+=arr[i][j];
    	if(count>1)ans++;
    }
    cout<<ans<<endl;


    return 0;
}
