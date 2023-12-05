#include<iostream>
#include<fstream>
#include<cstring>
using namespace std;
int main()
{

fstream fobj;

fobj.open("Aditya.txt", ios::out);

char arr[100] ;
cout<<"Enter the data :";
cin.getline(arr,100);

int length = strlen(arr);
fobj.write(arr,length);

fobj.close();

char line[100];
fobj.open("Aditya.txt", ios::in);


while(fobj)
{
fobj.getline(line,length);
cout<<line;
}
fobj.close();



return 0;
}

