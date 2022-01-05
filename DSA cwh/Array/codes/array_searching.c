// qsn no.3 searching an element of an array ..
// NAME 
// ROLL 
// SECTION 
// REG NO. 


#include<stdio.h>

int find(int array[], int size, int num);

int main(){
int array[10] = {12,22,30,41,69,72,84,90,10,99};
int size=10;
int num;
printf("enter a number:\n");
scanf("%d",&num);
int A = find(array, size, num);
if(A==1){
    printf("the no. is found. \n");
}
else{
    printf("the no. is not found\n");
}
return 0;
}

int find(int array[], int size, int num){
    for(int i=0; i<size; i++){
        if(num==array[i]){
            return 1;
            
        }
    }
}
