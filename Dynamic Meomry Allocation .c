#include <stdio.h>
#include <stdlib.h>
int main()
{
   int n , i , sum = 0;
         printf("Enter the number of elements: ");
         scanf("%d",&n);

    int *a = malloc(sizeof(int) * n);
         printf("Enter the elements: ");
            for (i = 0; i < n ; i++)
         scanf("%d" ,  a + i);
            for (i = 0; i < n ; i++)
            sum += a[i];

        printf(" The average is: %.2f",(float) sum / n);
            free(a);

return 0;
}
