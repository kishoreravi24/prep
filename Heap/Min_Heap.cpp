#include<bits/stdc++.h>
int main(){
    std::priority_queue<int,std::vector<int>,std::greater<int>> pq;
    int n,x;
    std::cin>>n;
    while(n-->0){
        std::cin>>x;
        pq.push(x);
    }
    while(!pq.empty()){
        std::cout<<pq.top()<<" ";
        pq.pop();
    }
}