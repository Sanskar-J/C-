#include<iostream>
using namespace std;
class C{
  int x;
public:
  C(){x=0;}
  C(int xx){x=xx;}
  C(C &obj){x=obj.x;}
  void display(){cout<< x <<" ";}
};
int main(){
  C ob1(25);
  C ob2(ob1);
  C ob3=ob1;
  ob1.display();
  ob2.display();
  ob3.display();
  return 0;
}
