#include<iostream>
using namespace std;

void fibonacci_series(int num){
    int a1=0;
    int a2=1;
    for(int i =a1;i<=num;i++){
        cout<<a1<<endl;
        int nextterm=a1+a2;
        a1=a2;
        a2=nextterm;
    }
}

int main(){
    int n;
    cout<<"Enter No= ";
    cin>>n;
    fibonacci_series(n);
    return 0;
}
