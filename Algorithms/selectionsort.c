#include <stdio.h>
#include <stdlib.h>

#define MAX 10000
int main()
{

    int a[MAX];
    /* a[0] to a[n-1] is the array to sort */
    int i,j;
    int iMin;
    int temp;

    for(i = 0; i < MAX; i++)
        a[i] = rand();

    /* advance the position through the entire array */
    /*   (could do j < n-1 because single element is also min element) */
    for (j = 0; j < MAX-1; j++)
    {
        /* find the min element in the unsorted a[j .. n-1] */

        /* assume the min is the first element */
        iMin = j;
        /* test against elements after j to find the smallest */
        for ( i = j+1; i < MAX; i++)
        {
            /* if this element is less, then it is the new minimum */
            if (a[i] < a[iMin])
            {
                /* found new minimum; remember its index */
                iMin = i;
            }
        }

        if(iMin != j)
        {
            //swap(a[j], a[iMin]);
            temp = a[iMin];
            a[iMin] = a[j];
            a[j] = temp;
        }

    }
}
