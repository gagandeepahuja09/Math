#include<cstdio>
int main(){
int n,m;
scanf("%d%d",&n,&m);
if(n>m) n=m;
printf("%d\n",n+1);
for(int i=n;~i;--i)	printf("%d %d\n",i,n-i);
return 0;
}
