#include <stdio.h>
void MatrixMultiplication(int m, int n, int a, int b, int arr1[m][n], int arr2[a][b] )
{
    if(n!=a)
    printf("Can't be multiplied");
    else
    {
    int arr3[m][b];
    for(int i = 0; i<m; i++)
    {
        for(int j = 0; j<b; j++)
        ((arr3+i) + j) = 0;
        //arr3[i][j] = 0;
    }
    for(int i = 0; i<m; i++)
    {
        for(int j = 0; j<b; j++)
        {
            for( int k = 0; k<n; k++)
            {
               ((arr3+i) + j) = ((arr3+i) + j) + (((arr1+i) + k))((*(arr2+k) + j));
               //arr3[i][j] = arr3[i][j] + arr1[i][k] * arr2[k][j];
            }
            
        }
    }
    //printf("%p %d %p %d", *arr1, *arr1, *(arr1+1), *(arr1+1));
    for(int i = 0; i<m; i++)
    {
        for(int j = 0; j<b; j++)
        printf("%d ", ((arr3+i) + j));
        printf("\n");
    }
    }
}
void main()
{
    int m,n;
    printf("Enter the dimensions of the first array");
    scanf("%d %d", &m, &n);
    int a,b;
    printf("Enter the dimensions of the second array");
    scanf("%d %d", &a, &b);
    int arr1[m][n];
    int arr2[a][b];
    for(int i = 0; i<m; i++)
    {
        for(int j = 0; j<n; j++)
        scanf("%d", (*(arr1+i) + j));
    }
    for(int i = 0; i<a; i++)
    {
        for(int j = 0; j<b; j++)
        scanf("%d", (*(arr2+i) + j));
    }
    //printf("%d", **arr1);
    MatrixMultiplication(m, n, a, b,arr1, arr2);
}