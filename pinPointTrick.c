#include <stdio.h>

void checkSum(int (*arr)[5]){
    for(int m = 0; m < 4; m++)
        arr[m][4] = (arr[m][0] + arr[m][1] + arr[m][2] + arr[m][3]) % 10,
        arr[4][m] = (arr[0][m] + arr[1][m] + arr[2][m] + arr[3][m]) % 10;
}

void printOutput(int *output){
    for(int k = 0; k < 24; k++)
        printf("%d ",output[k]);
}

void copyArr2Output(int *output, int(*arr)[5]){
    for(int m = 0, k = 0; m < 5; m++ )
        for(int n = 0; n < 5; n++, k++){
            if(k==24)break;
            output[k] = arr[m][n];
        }
}

int main(){
    
    int arr[5][5];
    int output[24];
    int output_[24];
    int m_ = -1, n_ = -1, value = -1;

    for(int m = 0; m < 4; m++)
        for(int n = 0; n < 4; n++){
            scanf("%d", &arr[m][n]);
            if(arr[m][n] > 9 || arr[m][n] < 0){
                printf("input is less than 10 and greather than or equal to 0\n");
                n--;
            }
        }

    arr[4][4] = -1;
    checkSum(arr);
    copyArr2Output(output,arr);
    printOutput(output);

    //오류 내기
    printf("\nWhich do arr you want to change?\n");
    for(;value > 9 || value < 0 || m_ < 0 || m_ > 4 || n_ < 0 || n_ > 4 ;)
        scanf("%d %d %d", &m_, &n_, &value);
    
    arr[m_][n_] = value;    
    checkSum(arr);
    copyArr2Output(output_,arr);
    printOutput(output_);

    for(int k = 0;;k++ )
    {
        if(k>24){
            printf("\ncorrect!");
            break;
        }
        if(output_[k] != output[k]){
            printf("\nFind ERRO!!! T`he failed value is %d at %d",output_[k], k+1);
            break;
        }
    }

    return 0;
}