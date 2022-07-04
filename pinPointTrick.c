#include <stdio.h>

int main(){
    
    int arr[5][5];
    int output[24];

    for(int m = 0; m < 4; m++)
        for(int n = 0; n < 4; n++){
            scanf("%d", &arr[m][n]);
            if(arr[m][n] > 9 || arr[m][n] < 0){
                printf("input is over 9 or below 0\n");
                n--;
            }
        }

    arr[4][4] = -1;
    
    for(int m = 0; m < 4; m++)
        arr[m][4] = (arr[m][0] + arr[m][1] + arr[m][2] + arr[m][3]) % 10,
        arr[4][m] = (arr[0][m] + arr[1][m] + arr[2][m] + arr[3][m]) % 10;  

    for(int m = 0, k = 0; m < 5; m++ )
        for(int n = 0; n < 5; n++, k++)
            output[k] = arr[m][n];

    for(int k = 0; k < 24; k++)
        printf("%d ",output[k]);

}