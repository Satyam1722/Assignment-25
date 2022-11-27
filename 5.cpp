#include<iostream>
#include<math.h>
using namespace std;

class ReverseNumber{
int n;
int rev=0;

public:
void set(int p){
    n=p;
}
void reve(){
    int t=n;
    int count=-1;
    while(t){
        t/=10;
        count++;
    }

   while(n){
    int r=n%10;
    rev+=r*pow(10,count);
    count--;
    n/=10;
   }
}
void print(){
 cout<<"reverse is : "<<rev;
}

};

int main(){
ReverseNumber l;
l.set(7123);
l.reve();
l.print();

return 0;
}


