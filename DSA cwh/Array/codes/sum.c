#include<stdio.h>


int check(int array[], int size, int num);

void deletion(int array[], int size, int index);
void Display(int array[], int size);


int main(){
int array[10] = {12,22,30,41,69,72,84,90,10,99};
int size = 10;
int num;
printf("before deletion\n");
Display(array,size);
printf("\nenter the place :\n");
scanf("%d", &num);
int A = check(array,size,num);
if(A==1){
    printf("after deletion");
    size-=1;
    Display(array,size);
}
else{
    printf("deletion can't possible");
}
return 0;
}
void Display(int array[], int size){
    for(int i=0; i<size; i++){
        printf("the %d element is: %d\n", i+1, array[i]);
    }
}
int check(int array[], int size,int num){
    for(int i=0; i<size; i++){
        if(num==array[i]){
            void deletion(array,size,i);
            return 1;
            break;
        }
    }
}
void deletion(int array[],int size, int index){
        for(int j=(index); j<(size-1); j++){
            array[j]=array[j+1];
        }
}

