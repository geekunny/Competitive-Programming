#include<iostream>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n];
		for(int i=1;i<=n;i++)
			cin>>a[i];
		int q;
		cin>>q;
		int index,candy;
		while(q--){
			int r;
			cin>>r;
			int count=0;
			if(a[1]==1){
				for(int i=1;i<=r;i++){
					index=((i-1)%n)+1;
					candy=a[index];
					if(candy==1)
						count+=candy;
				}
			}
			else if(a[n]==1){
				for(int i=1;i<=r;i++){
					index=((i-1)%n)+1;
					candy=a[index];
					if(candy%2==0&&index<n&&i<r)
						count+=candy;
					else if(candy%2!=0&&index<n&&i<r)
						count+=candy-1;
					else if(candy%2==0&&index==n&&i<r)
						count+=candy-1;
					else if(candy%2!=0&&index==n&&i<r)
						count+=candy;
					else if(i==r)
						count+=candy;
				}
			}
			else{
				for(int i=1;i<=r;i++){
					index=((i-1)%n)+1;
					candy=a[index];
					if(candy==1&&i<r-1)
						continue;
					else if(i==r-1&&a[index+1]==1)
						count+=candy;	
					else if(candy%2==0&&a[index+1]==1&&i<r&&index<n)
						count+=candy-1;
					else if(candy%2==0&&a[index+1]!=1&&i<r&&index<n)
						count+=candy;
					else if(candy%2!=0&&a[index+1]==1&&i<r&&index<n)
						count+=candy;
					else if(candy%2!=0&&a[index+1]!=1&&i<r&&index<n)
						count+=candy-1;
					else if(candy%2==0&&index==n&&i<r)
						count+=candy-1;
					else if(candy%2!=0&&index==n&&i<r)
						count+=candy;
					else if(i==r&&candy!=1)
						count+=candy;
				}
			}
			cout<<count<<endl;
		}
	}
	return 0;
}
