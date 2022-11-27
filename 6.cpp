#include<iostream>

using namespace std;

class Square{
int n;
int count=0;

public:
void set(int p){
    n=p;
}
int sqr(){
 count++;
 return n*n;
}

void print(){
 cout<<count;
}


};

int main(){
Square s;
s.set(7);
cout<<"Square is : "<<s.sqr()<<endl;
s.set(9);
cout<<"Square is : "<<s.sqr()<<endl;
s.set(11);
cout<<"Square is : "<<s.sqr()<<endl;
s.set(24);
cout<<"Square is : "<<s.sqr()<<endl;
s.print();
cout<<" times called"<<endl;

return 0;
}



