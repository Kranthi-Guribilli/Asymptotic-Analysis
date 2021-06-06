#include<stdio.h>
int flag=0;
//Let's implement a function that finds out if an array is empty or not. And it's time complexity is O(1) as it doesn't care how many numbers does the array consists.
void isEmpty(int arr[]){
    if(arr[0]) flag=1;
}
int main(){
    int arr[5]={1,3,4,5};
    isEmpty(arr);
    if(flag==1)
    printf("The given array is not empty");
    else
    printf("The array is empty");
    return 0;
}
