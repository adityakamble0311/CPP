#include<iostream>
#include<map>
#include<string>
using namespace std;

int main(){
	
	typedef map<string,int>mapType;
	
	mapType mp;
	string state,enter_state;
	int state_count,pop;
	
	cout<<"Enter a Number of State :";
	cin>>state_count;
	
	for(int i=0; i<state_count;i++){
		cout<<"\nEnter The State :";
		cin>>state;
		
		cout<<"\nEnter The Populations :";
		cin>>pop;
		
		mp.insert(pair<string,int>(state,pop));
	}
	mapType ::iterator iter;
	
	
	cout<<"\nEnter a State to check the population's' : ";
	cin>>enter_state;
	
	iter = mp.find(enter_state);
	if(iter!=mp.end()){
		
		cout<<enter_state<<" population's "<<iter->second<<endl;
	}else{
		cout<<"Key is Not Found"<<endl;
		mp.clear();
	}
	
	
}
