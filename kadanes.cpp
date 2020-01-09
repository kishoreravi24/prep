#include<bits/stdc++.h>
int main(){
    int test;
    std::cin>>test;
    while(test-->0){
    int max=0,max1=INT_MIN;
    int n;
    std::cin>>n;
    int a[n],i;
    for(i=0;i<n;i++)
    {
        std::cin>>a[i];
    }
    for(i=0;i<n;i++)
    {
        max=max+a[i];
        if(max1<max){
            max1=max;
        }
        if(max<0){
            max=0;
        }
    }
    std::cout<<max1<<"\n";
    }
}