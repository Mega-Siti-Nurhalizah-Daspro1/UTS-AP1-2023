#include <stdio.h>

int main()
{
    int i,j,n;
    
    printf("Masukkan jumlah n :");
    scanf("%d",&n);
    n=n-1;
    
    //untuk membentuk pola belah ketupat atas
    for(i=1; i<=n; i++)
    {
        for(j=i; j<=n; j++)
        {
            printf("*");
        }
        
        for(j=1; j<=(2*i-2);j++)
        {
            printf(" ");
        }
        
        for(j=i; j<=n; j++)
        {
            printf("*");
        }
        
        printf("\n");
    }
    
    //untuk membentuk pola belah ketupat bawah
    for(i=1; i<=n; i++)
    {
        for (j=1; j<=i; j++)
        {
            printf("*");
        }
        
        for(j=(2*i-2);j<(2*n-2); j++)
        {
            printf(" ");
        }
        
        for(j=1; j<=i; j++)
        {
            printf("*");
        }
        
        printf("\n");
    }
    
    return 0;
}
