#include<bits/stdc++.h>
int mergeSort(int arr[],int l,int mid,int e){
   int p = l;
   int q = mid+1;
   int arr1[e-l+1],k=0;
   int i;
   for(i=l;i<=e;i++)
   {
       if(p>mid){
           arr1[k++]=arr[q++];
       }else if(q>e){
           arr1[k++]=arr[p++];
       }else if(arr[p]<arr[q]){
           arr1[k++]=arr[p++];
       }else{
           arr1[k++]=arr[q++];
       }
   }
   for(i=0;i<k;i++){
       arr[l++]=arr1[i];
   }
}
int merge(int arr[],int l,int e){
    if(l<e){
        int mid = (l+e)/2;
        merge(arr,l,mid);
        merge(arr,mid+1,e);
        mergeSort(arr,l,mid,e);
    }
}
int main(){
    int arr[]={12,11,13,5,7,6};
    merge(arr,0,5);
    for(int i=0;i<=5;i++){
        std::cout<<arr[i]<<" ";
    }
}