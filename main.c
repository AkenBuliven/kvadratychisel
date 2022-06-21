#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
int n,x = 1, i = 1; 

scanf("%d",&n); 

while(x<=n)
  { 
    x=i*i; 
    i+=1;
    if (x > n) break;
    printf("%d ",x); 
 } 

 return 0;
  }