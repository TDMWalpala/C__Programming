#include <stdio.h>
#include <stdlib.h>
int count = 0;
void count2s(int x);
int main(){
int n,m;
printf("Enter range of integers (Ex:- 10,20):");
scanf("%d,%d",&n,&m);
int i;
i=n;
for(i=0; i<=m; i++){
count2s(i);
}
printf("Count = %d \n",count);
return 0;
}

void count2s(int x){
if(x <= 0)
return ;
if(x%10 == 2)
count++;
count2s(x/10);
}
