#include<stdio.h>
void InsertionSort(int a[], int n)
{
    int j, i;
    int tmp;
    for(i = 1; i < n; i++)
    {
        tmp = a[i];
        for(j = i; j > 0 && a[j-1] > tmp; j--)
            a[j] = a[j-1];
        a[j] = tmp;
    }
}
 
int main()
{
    int i, n, a[10];
    printf("Enter the number of elements- ");
    scanf("%d",&n);
    printf("Enter the elements :: ");
    for(i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    InsertionSort(a,n);
    printf("The sorted elements are-  ");
    for(i = 0; i < n; i++)
        printf("%d  ",a[i]);
    printf("\n");
    return 0;
}
