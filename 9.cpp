#include<iostream>

using namespace std;

class Circle{
int r;

public:

void set(int a){
   r=a;
}

float area(){
 return 3.14*r*r;
}




};

int main(){
Circle c;
c.set(3);
cout<<"area is : "<<c.area()<<endl;
return 0;
}





