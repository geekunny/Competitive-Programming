#include<bits/stdc++.h>
using namespace std;

int main(){
	int T;
	cin>>T;
	int time[T];
	int T1=T;
	int j=0;
	int b[2];
	while(T--){
		time[j]=0;
		b[0]=0,b[1]=0;
	    int n;
		cin>>n;
		int c[n];
		for(int i=0;i<n;i++)
			cin>>c[i];
		sort(c,c+n,greater<int>());
		int k=0;
		while(b[0]!=0||b[1]!=0||k<n){
			int m;
			if(b[0]==0&&k<n)
				b[0]=c[k++];
			if(b[1]==0&&k<n)
				b[1]=c[k++];
			if(b[0]==0)
				m=b[1];
			else if(b[1]==0)
				m=b[0];
			else
				m=min(b[0],b[1]);
			time[j]+=m;
			if(b[0]!=0)
				b[0]-=m;
			if(b[1]!=0)
				b[1]-=m;
		}
		j++;
	}
	for(int i=0;i<T1;i++)
		cout<<time[i]<<endl;
	return 0;
}
