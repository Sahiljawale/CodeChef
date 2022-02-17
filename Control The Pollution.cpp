#include<iostream>
int main(){
    int t;
    std::cin>>t;
    while(t--){
    int n,x,y;
    std::cin>>n>>x>>y;
    int m=100006;
    for(int i=0;i<=n;i++){
        for(int j=0;j<=n;j++){
            int k=100*j+4*i;
            if(k>=n){
              m=std::min(m,i*y+j*x);
            }
        }
    }
    std::cout<<m<<std::endl;
    }
}
