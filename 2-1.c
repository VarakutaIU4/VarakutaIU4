#include<stdio.h>

int main(){

    char begin[100] = {"Graph A {\n"};
    char end[100] = {"}"};
    FILE *f;
    f = fopen("graph.dot", "w");

    if(f != NULL){
        fputs(begin, f);
    }

    int i, j, p_1, p_2, rib;
    printf("Size of matrix:\n");
    scanf("%d", &p_1);
    p_2 = p_1;
    int a[p_1][p_2];

    printf("Input matrix:\n");
        for(i=1;i<=p_1;i++){
        for(j=1;j<=p_2;j++){
            scanf("%d", &a[i][j]);
            }
            }
                printf("Matrix: \n");
                for(i=1;i<=p_1;i++){
                for(j=1;j<=p_2;j++){
                    printf("%d\t", a[i][j]);
                }
                    printf("\n");
                }
                printf("\n");

    for(i=1;i<=p_1;i++){
    for(j=1;j<=p_2;j++){
        if(a[i][j] == 1){
            printf("%d -- ", i);
            printf("%d;\n", j);
            fprintf(f, "%d -- %d;\n", i, j);
        }
    }
    }

    if(f != NULL){
        fputs(end, f);
    }
printf("File graph.dot created\n\n");
fclose(f);

// Проверка связности графа
    rib = 0;
    for(i=1;i<=p_1;i++){
    for(j=1;j<=p_2;j++){
        if(a[i][j] == 1){
            rib++;
        }
    }
    }
    printf("Rib = %d\n", rib);

    if(rib > (p_1 - 1)*(p_1 - 2)/2){
        printf("Graph is connected\n");
    } else {
    printf("Graph is not connected\n");
    }


return 0;
}
