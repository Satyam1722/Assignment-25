#include<iostream>
using namespace std;

class LargestNumber{
int a;
int b;
int c;

public:
void set(int p,int q,int r){
    a=p;
    b=q;
    c=r;
}

void print(){
 if(a>=b&&a>=c)
    cout<<a;
 else if(b>=c)
    cout<<b;
 else
    cout<<c;

}

};

int main(){
LargestNumber l;
l.set(7,8,9);
l.print();

return 0;
}


