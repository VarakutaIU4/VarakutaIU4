#include<stdio.h>

void main(){
    int i,j,m,n,vershini, rebra;
    printf("Vershini:\n");
    scanf("%d",&vershini);
    printf("Rebra:\n");
    scanf("%d",&rebra);
    int a[vershini][rebra];

    printf("Vvedite a\n");
        for(i=0;i<vershini;i++)
        for(j=0;j<rebra;j++)
                scanf("%d",&a[i][j]);
                printf("Graf: \n");
             for(i=0;i<vershini;i++){
                for(j=0;j<rebra;j++)
                         printf("%d\t",a[i][j]);
                printf("\n");
        };
                printf("\n");

return 0;
}



