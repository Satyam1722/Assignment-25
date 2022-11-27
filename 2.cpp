#include<iostream>
using namespace std;

class Time{
 int hr;
 int min;
 int sec;
 public:

     void set(int a,int b,int c){
       hr=a;
       min=b;
       sec=c;
     }

     void print(){
       cout<<hr<<":"<<min<<":"<<sec<<endl;
     }

};

int main(){
Time c;
c.set(2,5,20);
c.print();

return 0;
}

