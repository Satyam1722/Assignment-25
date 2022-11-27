#include<iostream>

using namespace std;

class Area{
int r;
int a;
int b;

public:

void set_c(int p){
   r=p;
}

void set_r(int p,int q){
   a=p;
   b=q;
}

void set_s(int p){
   a=p;
}

int square(){
 return a*a;
}

int rectangle(){
 return a*b;
}

float circle(){
 return 3.14*r*r;
}

};

int main(){
Area a,b,c;
a.set_c(3);
cout<<"area of circle : "<<a.circle()<<endl;
a.set_r(3,5);
cout<<"area of rectangle : "<<a.rectangle()<<endl;
a.set_s(3);
cout<<"area of square : "<<a.square()<<endl;
return 0;
}






