#include<iostream>
using namespace std;
class Complex{
  int real,img;
public:
  Complex(){
    real=0;
    img=0;
  }
  Complex(int x){
    real=x;
    img=x;
  }
  Complex(int x,int y){
    real=x;
    img=y;
    }
    friend Complex sum(Complex x, Complex y);
    friend void display(Complex a);
};
Complex sum(Complex x,Complex y){
  Complex res;

  res.real=x.real+y.real;
  res.img=x.img+y.img;
  return res;
}
void display(Complex a){
  cout << "com nos " << a.real ;
  cout << "+"<<  a.img << "i" <<endl;
}
int main() {
  Complex a(5,6),b(4),c,d;
  d=sum(a,b);
  display(a);
  display(b);
  display(c);
  display(d);
  return 0;
}
