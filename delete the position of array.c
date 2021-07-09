// Deletion of an array
#include<stdio.h>
void main(){
    int i,n,pos,arr[20];
    printf("\n Enter the size of array ");
    scanf("%d",&n);
    printf("\n Enter the elemets: ");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("\n Enter the number to be deleted: ");
    scanf("%d",&pos);
    pos--;

    for(i=pos;i<=n-1;i++){
        arr[i] = arr[i+1];
    }
    n--;
    printf("\n The array after deletion is: ");
    for(i=0;i<n;i++){
        printf("\n %d",arr[i]);
    }

}
