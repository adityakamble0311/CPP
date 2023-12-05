#include<iostream>
#include<string>
using namespace std;
class StudentDatabase{
	private:
		int roll_no;
		string name;
		string address;
		string blood;
		string classes;
		string div;
		string dob;
		string mobile_no;
		string telephone;
		
		public:
			StudentDatabase():roll_no(0){}
			
		  StudentDatabase(int r, string n, string ad, string b, string cls, string d, string dob, string mo, string tel)
        : roll_no(r), name(n), address(ad), blood(b), classes(cls), div(d), dob(dob), mobile_no(mo), telephone(tel) {}

			
			StudentDatabase(const StudentDatabase& other ):roll_no(other.roll_no),name(other.name),address(other.address),blood(other.blood),
			classes(other.classes),div(other.div),dob(other.dob),mobile_no(other.mobile_no),telephone(other.telephone){}
			
			~StudentDatabase(){
				
				cout<<"\nDeleteing Student Record's";
			}
			
void displayInfo(){
	
		cout<<"Roll No :"<<roll_no<<endl;
		cout<<"Name    :"<<name<<endl;
		cout<<"Address :"<<address<<endl;
		cout<<"Blood G :"<<blood<<endl;
		cout<<"Class   :"<<classes<<endl;
		cout<<"Div     :"<<div<<endl;
		cout<<"DOB     :"<<dob<<endl;
		cout<<"Mobile  :"<<mobile_no<<endl;
		cout<<"Tel No  :"<<telephone<<endl;
}

static void staticInfo(){
	
	cout<<"This is Static Member Function"<<endl;
}
	
	friend class friendclass;
		
};

class friendclass{
	public:
		void fdisplay(const StudentDatabase& student){

		cout<<"The Accessing private member - ROll NUMBER ="<<student.roll_no<<endl;
	}
};

int main(){
	
	try{
		
		StudentDatabase* student1 = new StudentDatabase(57,"Aditya","Shirdi","O+","SE","COMP4","12/07/2004","8329902128","02423255255");
		StudentDatabase student2 = (*student1);
		
		student1->displayInfo();
		cout<<"COPY CONSTRUCTOR------------"<<endl;
		student2.displayInfo();
		
		StudentDatabase::staticInfo();
		
		friendclass fobj;
		fobj.fdisplay(*student1);
		
		delete student1;
	}catch(const exception& e){
		cout<<"Exception :"<<e.what()<<endl;
	}
	
	return 0;
	
}
