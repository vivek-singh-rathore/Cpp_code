/*Author--> Vivek Singh Rathore.
Date-->16-09-2017
Library demo*/
#ifndef COMPLEX_H
#define COMPLEX_H


#include<math.h>
#include<iostream>
using namespace std;


class Complex{

private:

float real;                             //real for real part
float im;                               //im for imaginary part 

public:
void get();                             //for input

void show();                            //prints the complex number

float abs();                            //returns the absolute value complex number

void add(Complex c1,Complex c2);        //add two complex numbers

void subt(Complex c1,Complex c2);       //subtract two complex numbers

void conj();                            //conjugate of complex number

void mult(Complex c1,Complex c2);       //multiply two complex numbers

};

#endif




  
