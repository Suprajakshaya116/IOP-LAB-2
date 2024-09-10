#include <stdio.h>
int main() 
 {
    int x,y,z,max;
    printf("enter x,y,z\n");
    scanf("%d%d%d",&x,&y,&z);
    max= (x>y) ? ((x>z)? (printf(" %d is max ",x)):0):0;
    max= (y>x) ? ((y>z) ? (printf("%d is max ",y)):0):0;
    max= (z>y) ? ((z>x) ? (printf("%d is max ",z)):0):0;
    return 0;
 }