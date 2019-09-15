#include <stdio.h>

int main(){
    int i, j, f;
    printf("Amount of numbers:\n");
	scanf("%d", &f);
    int a[f];
    int b[8];

printf("Enter %d numbers:\n", f);
    for(i = 0; i < f; i++){
        scanf("%d", &a[i]);
        printf("%d", a[i]);
    while(a[i] > 1){
        for(j = 0; j < 8; j++){
            if(a[i]%2 == 0){
                b[j] = 0;
            } else {
                b[j] = 1;
            }

            a[i] = a[i]/2;
            }
        printf("--->");

    for(j = 7; j >= 0; j--){
        printf("%d", b[j]);
    }
    printf("\n");
    }
    }
return 0;
}

