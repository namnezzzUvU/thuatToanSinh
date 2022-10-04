#include<bits/stdc++.h>
int main() {
	int t;
	std::cin>>t;
	while(t--) {
		std::string s;
		int count=0;
		getline(std::cin,s);
		for(int i=0;i<s.length();++i) {
			if(s[i]==' '&&s[i+1]!=' ') {
				++count;
			}
		}
		std::cout<<count<<std::endl;
	}
}