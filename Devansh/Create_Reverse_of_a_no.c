#include <stdio.h>
#include <stdlib.h>

int main()
{ int n, rem;
int sum=0;
    printf("Enter a number: ");
    scanf("%d", &n);

    while (n>0){
     rem=n%10;
     sum=sum*10+ rem;
     n= n/10;
    }
     printf("The reverse of number is: %d\n", sum);
     return 0;
}
