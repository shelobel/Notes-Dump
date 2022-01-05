#include<stdio.h>


void Display(int array[], int size);

int deletion(int array[], int size, int capacity, int place);

int main(){
int array[10] = {12,22,30,41,69,72,84};
int capacity = 10;
int size = 7;
int place;
printf("before deletion\n");
Display(array,size);
printf("\nenter the place :\n");
scanf("%d", &place);
int A = deletion(array,size,capacity,place);
if(A==-1){
    printf("deletion can't possible");
}
else if(A==1){
    printf("after deletion\n");
    size-=1;
    Display(array,size);
}
return 0;
}

void Display(int array[], int size){
    for(int i=0; i<size; i++){
        printf("the %d element is: %d\n", i+1, array[i]);
    }
}

int deletion(int array[],int size, int capacity, int place){
    if(place>capacity || place>size+1){
        return -1;
    }
    else{
        for(int i=(place-1); i<(size-1); i++){
            array[i]=array[i+1];
        }
        return 1;
    }

}

