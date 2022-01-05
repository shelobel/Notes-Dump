// qsn no.2 deleting an element of an array ..
// NAME SUPRATIM DEY
// ROLL 20CS8023
// SECTION X
// REG NO. 20U10061

#include<stdio.h>

void Display(int array[], int size);
int deletion(int array[], int size, int num);


int main(){
int array[10] = {12,22,30,41,69,72,84,90,10,99};
int size = 10;
int answer = 1;
int num;
printf("before deletion\n");
Display(array,size);
while (answer==1){
printf("enter the number you want to delete :");
scanf("%d", &num);
int A = deletion(array,size,num);
if(A==1){
    printf("after deletion\n");
    size-=1;
    Display(array,size);
}
else{
    printf("deletion can't possible");
}
answer = 0;
printf("\nDo you want to delete an element?(1 for 'yes' / 0 for 'no') :");
scanf("%d",&answer);
}
return 0;
}

void Display(int array[], int size){
    for(int i=0; i<size; i++){
        printf("the %d element is: %d\n", i+1, array[i]);
    }
}

int deletion(int array[], int size, int num){
    for(int i=0; i<=size-1; i++){
        if(num==array[i]){
            for(int j=i; j<size-1 ; j++){
                array[j]=array[j+1];
            }
            return 1;
        }
    }
}