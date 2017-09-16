/*Author--> Vivek Singh Rathore.
Date-->16-09-2017
*/


#include<iostream>
#include"Complex.h" //includes the header
using namespace std;
int main(){

Complex c1,c2,c3;
c1.get();
c2.get();
c3.add(c1,c2);
c3.show();
c3.subt(c1,c2);
c3.show();
c3.mult(c1,c2);
c3.show();
cout<<c3.abs()<<endl;
c3.conj();
c3.show();
return 0;
}

