// qsn no.1 inserting an element at a particular index of  an array ..
// NAME SUPRATIM DEY
// ROLL 20CS8023
// SECTION X
// REG NO. 20U10061 

#include<stdio.h>

void Display(int array[], int size);

int insertion(int array[], int size, int capacity, int place, int number);

int main(){
int array[10] = {12,22,30,41,69,72,84};
int capacity = 10;
int size = 7;
int answer = 1;
int place, number;
printf("before insertion\n");
Display(array,size);
while(answer==1){
    
printf("\nenter the place and the number :\n");
scanf("%d %d", &place ,&number);
int A = insertion(array,size,capacity,place,number);
if(A==-1){
    printf("insertion can't possible");
}
else if(A==-2){
    printf("array wouldn't be continous\ninsertion can't possible");
}
else if(A==1){
    printf("after insertion\n");
    size+=1;
    Display(array,size);
    
}
answer=0;
printf("\nDo you want to insert an element?(1 for 'yes' / 0 for 'no') :");
scanf("%d",&answer);
}
return 0;
}

void Display(int array[], int size){
    for(int i=0; i<size; i++){
        printf("the %d element is: %d\n", i+1, array[i]);
    }
}

int insertion(int array[],int size, int capacity, int place, int number){
    if(place>capacity){
        return -1;
    }
    else if(place>size+1){
        return -2;
    }
    else{
        for(int i=(size-1); i>=(place-1); i--){
            array[i+1]=array[i];
        } 
        array[place-1]=number;
        return 1;
    }

}

