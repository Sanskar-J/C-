#include<iostream>
using namespace std;
class time{
  int hr,minute;
public:

  void input()
  {
    cout << "/* enter hour */" << '\n';
    cin >> hr;
    cout << "/* enter minute */" << '\n';
    cin >> minute;
  }
  void gettime(int x,int y){
    hr=x;
    minute=y;
  }
  void sum(time x,time y){
    int hr_sum,min_sum,sum;
    hr_sum=(x.hr+y.hr)%24;
    sum=x.minute+y.minute;
    min_sum=(sum)%60;

    sum>60?gettime(hr_sum+1,min_sum):gettime(hr_sum,min_sum);


  }
  void display(){
    cout << "Hour is" << hr << endl;
    cout << "Min is" << minute << endl;
  }
};
int main()
{
  time a,b,c;
  a.input();
  b.input();
  c.sum(a,b);
  c.display();
  return 0;
}
