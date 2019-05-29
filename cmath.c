#include <stdio.h>


int main() {
  unsigned int x1,x2,x3,x4,x5;
    int i, j;
    scanf("%d %d %d %d %d", &x1,&x2,&x3,&x4,&x5);
        x1%=2;x2%=2;x3%=2;x4%=2;x5%=2;
    	i=x1+x2+x3+x4+x5;
    	j=5-i;j=i-j;
    
    printf("%i", j);
  return 0;
}