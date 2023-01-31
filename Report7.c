#include<stdio.h>

    void print_array(int array[], int size);
    void print_array(int array[], int size){
        printf("scores = ");
        for (int i=0; i<size; i++){
            printf("%d ", array[i]);
        }
    }

int main(){
    int i,j;
    const int SIZE =5;
    int scores[SIZE] = {0,60,70,100,90};
    int tmp;

    print_array(scores, SIZE);
    printf("\n" "result = ");

    for (int i=0; i<SIZE; i++){

        for(j=i+1; j<SIZE; j++){
            if(scores[i] < scores[j]){
                tmp = scores[i];
                scores[i]=scores[j];
                scores[j]=tmp;}
        }
    }

    for(int i=0; i<SIZE; i++){
        printf("%d ", scores[i]);
}
    return 0;
}
