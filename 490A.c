#include <stdio.h>
#include <string.h>
#include <math.h>
int main(){
int n,temp;
scanf("%d",&n);
int g=n;
int a[n],b[n],i;
int x[100],y[100],z[100];

for(i=0;i<n;i++){
        scanf("%d",&a[i]);
        b[i]=i;
}
int j;
for(i=0;i<n;i++){
    for(j=i+1;j<n;j++){
        if(a[i]>a[j]){
            g=a[i]; temp=b[i];
            a[i]=a[j];b[i]=b[j];
            a[j]=g;b[j]=temp;
        }
    }
}
//for(i=0;i<n;i++){printf("%d\n",b[i]);}


j=0;int k=0; int l=0;
for(i=0;i<n;i++){
    if(a[i]==1){x[j]=a[i];j++;}
    if(a[i]==2){y[k]=a[i];k++;}
    if(a[i]==3){z[l]=a[i];l++;}
}

//for(i=0;i<l;i++){
 //  printf("//%d\n",z[i]);}

int max=10000;
if(j<k)max=j;else max=k;
if(max>l)max=l;
if(max==0){printf("0");return 0;}

printf("%d\n",max);

int X,Y,Z;
X=0;Y=j;Z=n-l;

for(i=0;i<max;i++){
    printf("%d %d %d\n",b[X]+1,b[Y]+1,b[Z]+1);
    X=X+1;Y=Y+1;Z=Z+1;
}






return 0;}