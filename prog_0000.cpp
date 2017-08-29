//Complex class arithematic fuctions with operator overloading
#include<iostream>
using namespace std;
class Complex
{
float real;
float imaginary;
public:
void getInfo()
{
cout<<"Enter the real and imaginary part\n";
cin>>real>>imaginary;
}
void showInfo()
{
cout<<real<<"+i("<<imaginary<<")\n";
}
Complex operator+(Complex &c)
{
Complex cnum;
cnum.real=this->real+c.real;
cnum.imaginary=this->imaginary+c.imaginary;
return cnum;
}
Complex operator-(Complex &c)
{
Complex cnum;
cnum.real=this->real-c.real;
cnum.imaginary=this->imaginary-c.imaginary;
return cnum;
}
Complex operator*(Complex &c)
{
Complex cnum;
cnum.real=(this->real*c.real)-(this->imaginary*c.imaginary);  //(a+ib)(c+id)=(ac-bd)+i(bc+ad)
cnum.imaginary=(this->imaginary*c.real+this->real*c.imaginary);
return cnum;
}


};
int main()
{
Complex c1,c2,c3;
c1.getInfo();
c2.getInfo();
c3=c1+c2;
c3.showInfo();
c3=c1-c2;
c3.showInfo();
c3=c1*c2;
c3.showInfo();
}
