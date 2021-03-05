#include<iostream>
#include<algorithm>
//0.36 0.45 0.91 0.62 0.53 0.05 0.82 0.35
using namespace std;

void balls(float w[],int n){
	sort(w,w+n,greater<float>());
	int count=0,pick=0;
	float box=0;
	for(int i=0;i<n;){
		if(w[0]==-1) 
			break;
		if(w[i]==-1){
			i=0;
			box=0;
			pick=0;
		}
		else{
			if(box+w[i]<=1.0){
				if(pick==0) ++count;
				++pick;	
				box=w[i];
				w[i]=-1;
				sort(w,w+n,greater<float>());
				if(pick==2) {pick=0;box=0;i=0;}
			}
			else i++;	
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
