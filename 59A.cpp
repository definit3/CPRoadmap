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
    string s1;
    cin>>s1;
    int n=s1.length();
    int l=0,u=0;
    for(int i=0;i<n;i++)
    {
    	if(s1[i]<97)u+=1;
    	else l+=1;
    }
    if(l==u || l>u)transform(s1.begin(),s1.end(),s1.begin(),::tolower);
    else transform(s1.begin(),s1.end(),s1.begin(),::toupper);
    cout<<s1<<endl;
    return 0;
}