#include<iostream>
using namespace std;

class Factorial{
 int n;
 int fact=1;
 public:

     void set(int a){
       n=a;
     }

     void print(){
       for(int i=1;i<=n;i++)
        fact*=i;

        cout<<"factoiral is : "<<fact;

     }

};

int main(){
Factorial f;
f.set(7);
f.print();

return 0;
}

