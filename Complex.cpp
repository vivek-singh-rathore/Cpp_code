

#include "Complex.h"

void Complex::get(){
cout<<"Enter the real and imaginary part\n";
cin>>real>>im;
}

void Complex::show(){
cout<<"("<<real<<","<<im<<")\n";
}

float Complex::abs(){
return sqrt(real*real+im*im);
}

void Complex::add(Complex c1,Complex c2){
real=c1.real+c2.real;
im=c1.im+c2.im;
}

void Complex::subt(Complex c1,Complex c2){
real=c1.real-c2.real;
im=c1.im-c2.im;
}

void Complex::conj(){
im*=-1;
}

void Complex::mult(Complex c1,Complex c2){
real=c1.real*c2.real - c1.im*c2.im;
im=c1.real*c2.im+c1.im*c2.real;
}
