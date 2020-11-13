#include<bits/stdc++.h>
using namespace std;

int main(){
	int T;
	cin>>T;
	int n,k;
	while(T--){
		cin>>n;
		cin>>k;
		char S[n];
		cin>>S;
		int i=0,j=0,count=0,p=k+1,sh;
		while(i<n&&j<n){
			if(S[i]=='M'){
				if(S[j]=='I'){
					sh=0;
					if(i<j){
						for(int k=i+1;k<j;k++)
							if(S[k]==':')
								sh++;
					}
					else if(i>j){
						for(int k=j+1;k<i;k++)
							if(S[k]==':')
								sh++;
					}
					if((p-abs(j-i)-sh)>0){
						count++;
						i++;
						j++;
					}
					else{
						if(i<j)
							i++;
						else
							j++;
					}
				}
				else if(S[j]=='X'){
					j++;
					i=j;
				}
				else j++;
			}
			else if(S[i]=='X'){
				i++;
				j=i;
			}
			else i++;
		}
		cout<<count<<endl;
	}
}
