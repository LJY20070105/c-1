#include<iostream>
using namespace std;
class complex {
private:
	double re;
	double im;
public:
	complex(double r=0,double i=0):re(r),im(i){}
	double real() const {
		return re;
	}
	double imag() const {
		return im;
	}
	complex& operator +=(const complex& c) {
		re += c.real();
		im += c.imag();
		return *this;
	}
	friend std::ostream& operator <<(ostream& os, const complex& c) {
		return os<<"("<<c.real()<<","<<c.imag()<<")";
	}
	


};
complex operator +(const complex& c1, const complex& c2) {
	return complex(c1.real() + c2.real(), c1.imag() + c2.imag());
}
int main (){
	complex c1(1,2),c2(3,4),c3;
	c3 = c1 + c2;
	c1 += c2;
	cout<<"c3="<<c3<<endl;
	cout <<c1 << endl;
	return 0;



    
}
