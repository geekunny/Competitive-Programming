#include<bits/stdc++.h>
using namespace std;
bool primenumber(int number){
        bool flag=0;
        for(int i=2;i<=sqrt(number);i++){
            if(number%i==0){
                flag=1;
                break;
        	}
        }
        if(flag==0)
            return true;
        else
            return false;
    }
int main(){
	int T;
	cin>>T;
	int a[100000];
	for(int i=2,count=0;count<100000;i++)
        if(primenumber(i)){
           	a[count]=i;
           	count++;
		}
	while(T--){
		int n;
		cin>>n;
		int c[n],b[n];
        for(int i=1;i<=n;i++){
        	cin>>b[i];
        	c[i]=a[i-1];
    	}
    	for(int i=1;i<=n;i++)
    		if(b[i]!=i)
    			c[i]=c[b[i]];
    	for(int i=1;i<=n;i++)
    		cout<<c[i]<<" ";
    	cout<<endl;
	}
}
