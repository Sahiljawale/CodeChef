#include<iostream>
using namespace std;


int main(){
  int a,b,res,last;
  cin>>a>>b;

  res=a-b;
  last=res%10;
  
  if(last==9){
    res=res-1;
  }
  else{
    res=res+1;
  }
  
  cout<<res;
  return 0;
}
