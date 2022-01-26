#include<bits/stdc++.h>
using namespace std;


int largest(int arr[], int n)
{
    return *max_element(arr, arr+n);
}
void mean(int arr[], int n,int mx)
{
    float sum = 0; 
    for (int i = 0; i < n; i++)
    			sum += arr[i];
		sum=sum-mx;
		n=n-1;
		float ans=sum/n;
    cout<<fixed<<setprecision(6)<<ans+mx<<endl;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int arr[n];
		for(int i=0;i<n;i++){
			cin>>arr[i];
		}
		int mx=largest(arr,n);
		mean(arr,n,mx);

	}
	return 0;
}
