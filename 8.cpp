#include<iostream>

using namespace std;

class Rectangle{
int l;
int b;

public:
void set(int a,int c){
    l=a;
    b=c;
}
int area(){
 return l*b;
}




};

int main(){
Rectangle r;
r.set(3,5);
cout<<"area is : "<<r.area()<<endl;
return 0;
}




