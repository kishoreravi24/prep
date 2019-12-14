#include<bits/stdc++.h>
void swap(int *xp,int *yp)
{
    int temp;
    temp = *xp;
    *xp = *yp;
    *yp = temp;
}
int partition(int arr[],int start,int end){
    int pivot = arr[end];
    int i = (start-1);
    int j;
    for(j=start;j<=end-1;j++)
    {
        if(arr[j]<pivot){
            i++;
            swap(&arr[i],&arr[j]);
        }
    }
    swap(&arr[i+1],&arr[end]);
    return(i+1);
}
int quick(int arr[],int start,int end){
    if(start<end){
        int  pi = partition(arr,start,end);
        quick(arr,start,pi-1);
        quick(arr,pi+1,end);
    }
    return 0;
}
int main(){
    int arr[]={10,7,8,9,1,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    quick(arr,0,n-1);
    for(int i=0;i<n;i++)
    {
        std::cout<<arr[i]<<" ";
    }
}