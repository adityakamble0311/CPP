#include<iostream>
#include<vector>
using namespace std;

void display(vector<int> &v){
	for(int i=0;i<v.size();i++){
		cout<<v[i]<<" ";
	}
	cout<<endl;
}
int main(){
	
	vector<int> v1;
	int user,element;
	
	cout<<"Enter The Range Of Vector :";
	cin>>user;
	
	for(int i=0;i<user;i++){
		cout<<"Enter The Element :";
		cin>>element;
		v1.push_back(element);
	}
	cout<<"-----------------------------"<<endl;
	display(v1);
	
	return 0;
}