#include<iostream>
#include<algorithm>
//0.36 0.45 0.91 0.62 0.53 0.05 0.82 0.35
using namespace std;

void balls(float w[],int n){
	sort(w,w+n,greater<float>());
	int count=0,pick;
	float box;
	int check[n];
	for(int i=0;i<n;i++)
		check[i]=0;
	for(int i=0;i<n;i++){
		pick=0;
		if(check[i]==0){
			box=w[i];
			check[i]=1;
			++pick;
			++count;
		for(int j=i+1;j<n;j++)
			if( (box+w[j])<=1.0 && check[j]==0 && pick<2){
				++pick;
				check[j]=1;
			}
		}
	}
	cout<<"The minimum number of boxes: "<<count;
}

int main(){
	int n;
	cout<<"Enter the number of balls: ";
	cin>>n;
	float W[n];
	cout<<"Enter the weights of the balls: ";
	for(int i=0;i<n;i++)
		cin>>W[i];
	balls(W,n);
}
