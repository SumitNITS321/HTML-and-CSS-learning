#include<stdio.h>
int main(){
    int n;
    do{
        printf("Size: ");
        scanf("%d",&n);
    }while(n<1);

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("# ");
        }
        printf("\n");
    }
//do while is super useful when u want to get input from user and make sure it meets certain requirements.
//for instance, try giving a negative size here, due to the do while loop it will ask for input again still carrying the property that it will execute at least once
}