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
    int n=s.length();
    int arr[50]={0};


    for(int i=0;i<n;i++)
    	arr[s[i]-97]+=1;

    int count=0;
    for(int i=0;i<50;i++)
    	if(arr[i]!=0)count++;

    if(count%2!=0)cout<<"IGNORE HIM!"<<endl;
    else cout<<"CHAT WITH HER!"<<endl;

    return 0;
}