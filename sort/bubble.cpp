#include<bits/stdc++.h>
int sort(int arr[],int size){
    int i,j,temp;
    for(i=0;i<size;i++)
    {
        for(j=i+1;j<size;j++)
        {
            if(arr[i]>arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    for(i=0;i<size;i++)
    {
        std::cout<<arr[i]<<" ";
    }
    return 0;
}
int main(){
    int arr[5]={1,5,4,2,8};
    sort(arr,sizeof(arr)/sizeof(arr[0]));
}