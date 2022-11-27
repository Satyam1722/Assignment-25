#include<iostream>
using namespace std;

class Complex{
 int real;
 int img;
 public:

     void set(int r,int i){
       real=r;
       img=i;
     }

     void print(){
       cout<<real<<"+"<<img<<"i";
     }

};

int main(){
Complex c;
c.set(2,5);
c.print();

return 0;
}
