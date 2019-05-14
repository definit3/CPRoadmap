#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
 char s[101];char new[101];char temp;
 int n,i,j;
 scanf("%s",s);
 n=strlen(s);
 for(i=0;i<n;i++){if(s[i]=='1'||s[i]=='2'||s[i]=='3'||s[i]=='+');else return 0;}

 for(i=0;i<n;i++){

    for(j=i;j<n;j++){
            if(s[i]>s[j] && s[i]!='+'&&s[j]!='+'){temp=s[i];s[i]=s[j];s[j]=temp;}

 }}

printf("%s\n",s);






return 0;}