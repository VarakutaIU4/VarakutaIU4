#include<stdio.h>

int main(){

    FILE *f;
    f = fopen("graph.dot", "w");

    if(f != NULL){
        fprintf(f, "Graph A{\n");
    }

    int i, j, p_1, p_2, rib, x, y;
    printf("Size of matrix:\n");
    scanf("%d", &p_1);
    p_2 = p_1;
    int a[p_1][p_2];

    for(i=1;i<=p_1;i++){
    fprintf(f, "%d;\n", i);
    }

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
        fprintf(f, "}");
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

    x = 1;
    for(int i=1;i<=p_1;i++){
    y = 0;
    for(int j=1;j<=p_2;j++){
        if(a[i][j] == 1){
            y = 1;
        }
        if(a[j][i] == 1){
            y = 1;
        }
    }
        if(y == 0){
            x = 0;
        }
    }

    if(rib > (p_1 - 1)*(p_1 - 2)/2){
        printf("Graph is connected (by theorem)\n");
    } else if(x == 0){
    printf("Graph is not connected\n");
    } else {
    printf("Graph is connected\n");
    }

return 0;
}
