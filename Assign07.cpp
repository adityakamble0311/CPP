#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

void display(vector<int> &v){
	for(int i = 0 ; i<v.size();i++){
		
		cout<<v[i]<<" "; 
		
	}
	cout<<endl;
	
}

void selection_sort(vector<int> &v){
	
	int n = v.size();
	
	for(int i = 0 ; i<n-1;i++){
		int min_index = i;
		for(int j=i+1;j<n;j++){
		if(v[j]<v[min_index]){
			min_index = j;
		}
	}
	swap(v[i],v[min_index]);	
		
	}
	
}

bool binary_search(vector<int> &v , int target){
	
	
	return binary_search(v.begin(),v.end(),target);
	
	
}

int main(){
	
	vector<int> v;
	int user,element;
	
	cout<<"Enter The Range of Vector :";
	cin>>user;
	
	for(int i = 0 ; i<user;i++){
		
		cout<<"Enter The Element :";
		cin>>element;
		v.push_back(element);
	}
	cout<<"Orignal Vector :";
	display(v);
	
	cout<<"Sorted Vector :";
	selection_sort(v);
	display(v);
	
	int target;
	
	cout<<"Enter The Search Element :";
	cin>>target;
	
	
	if(binary_search(v,target)){
		
		cout<<target<<" element found in vector"<<endl;
		
	}
	else{
		
		cout<<target<<" Element is not found in vector"<<endl;
	}
	
	
	
	
	
	
	return 0;
	
}