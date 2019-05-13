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
    string s;
    cin>>s;
    int count=0;
    char p='a';
    for(int i=0;i<s.length();i++)
    {
    	int c=0,ac=0;
    	char temp=p;
    	while(p!=s[i])
    	{
    		p++;
    		c+=1;
    		if(p>'z')p='a';
    	}
    	p=temp;
    	while(p!=s[i])
    	{
    		p--;
    		ac+=1;
    		if(p<'a')p='z';
    	}
    	count+=min(c,ac);

    }
    cout<<count<<endl;

    return 0;
}
