#include <stdio.h>
#include <string.h>
void main()
{
    int n;
    printf("Enter the length of the first string.\n");
    scanf("%d", &n);
    char s1[n+1];
    printf("Enter first string\n");
    scanf("%s", s1);
    int m;
    printf("Enter the length of the second string\n");
    scanf("%d", &m);
    char s2[m+1];
    printf("Enter second string\n");
    scanf("%s", s2);
    char s3[m+n+1];
    for(int i = 0; i<n; i++)
    {
        s3[i] = s1[i];
    }
    for(int i = n; i<=n+m; i++)
    s3[i] = s2[i-n];
    printf("%s", s3);
}