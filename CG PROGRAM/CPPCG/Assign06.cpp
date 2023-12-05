#include<iostream>
#include<map>
#include<string>
using namespace std;
int main()
{
typedef map<string,int> mapType;
mapType pm;
pm.insert(pair<string, int>("Maharashtra", 7026357));
pm.insert(pair<string, int>("Rajasthan", 6578936));
pm.insert(pair<string, int>("Karanataka", 6678993));
pm.insert(pair<string, int>("Punjab", 5789032));
pm.insert(pair<string, int>("West Bengal", 6676291));
mapType::iterator iter;
cout<<" _____________________________________________________\n";
cout<<"|___________Population of states in India_____________|\n";
cout<<"|_____________________________________________________|\n";
cout<<"\n Size of populationMap :"<<pm.size()<<"\n";

string state_name;
cout<<"\n Enter name of the state :";
cin>>state_name;

iter = pm.find(state_name);
if( iter!= pm.end() )
 cout<<state_name<<" 's population is "<<iter->second ;
else
cout<<"Key is not populationMap"<<"\n";
pm.clear();
}

