#include<iostream>
using namespace std;
class Complex{
	public:
	double real,imag;
	
	Complex(double r=0.0 , double i = 0.0):real(r),imag(i){}
	
	Complex operator+(const Complex& other)const {
		return Complex(real+other.real,imag+other.imag);
		
	}
	
	Complex operator*(const Complex& other)const {
		return Complex(real*other.real,imag*other.imag);
		
	}
		
		
};
int main(){
	
	Complex c1(20.0,40.0);
	Complex c2 (20.0,20.0);
	
	
	Complex sum = c1 + c2 ;
	Complex mul = c1 * c2 ;
	cout << "Sum: " << sum.real << " + " << sum.imag << "i" << endl;
	cout << "\nMul: " << mul.real << " + " << mul.imag << "i" << endl;

	
	return 0;
}
