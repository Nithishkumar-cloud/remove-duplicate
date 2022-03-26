#include<bits/stdc++.h>
using namespace std;
void removeduplicate(string n,set<char>s,vector<char>v,int g){
for(int i=0;i<g;i++){
		if(s.find(n[i])==s.end()){
			s.insert(n[i]);
			v.push_back(n[i]);
		}	
	}
	int f=v.size();
	for(int i=0;i<f;i++){
		cout<<v[i];
	}
	}
int main(){
	string n="geeksforgeeks";
	//you can get the input from cin or declare like this which is your wish!!
	set<char>s;
	vector<char>v;
	int g=n.length();
	removeduplicate(n,s,v,g);
}

