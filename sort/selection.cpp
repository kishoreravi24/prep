#include<bits/stdc++.h>
void swap(int *xp,int *yp){
    int temp;
    temp = *xp;
    *xp = *yp;
    *yp = temp;
}
int select(int arr[],int n){
    int i,j,min;
    for(i=0;i<n;i++)
    {
        min = i;
        for(j=i+1;j<n;j++)
        {
            if(arr[j]<arr[min]){
                min=j;
            }
        }
        swap(&arr[i],&arr[min]);
    }
}
int main(){
    int arr[]={3,2,5,1,4};
    select(arr,5);
    for(int i=0;i<5;i++)
    {
        std::cout<<arr[i]<<" ";
    }
}