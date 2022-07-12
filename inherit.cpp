#include<iostream>
using namespace std;
class coin
{
  const string face[2]={"HEADS","TAILS"};
public:
  string toss()
  {
    string s;
      int p=rand()%2;
      p==0? s=face[p]:s= face[p];
      return s;
  }
};
class hand
{
  enum ops {Rock,Paper,Scissors};
public:
  string shake()
  {
    ops p=ops(rand()%3);
    switch(p)
    {
      case Rock:
      return "ROCK";
      break;
      case Paper:
      return "PAPER";
      break;
      case Scissors:
      return "SCISSOR";
      break;
      default:
      exit(0);
    }
  }
};
class choice:public coin,public hand
{

};

int main()
{
  choice c1, h1;
  for(int i=0;i<=5;i++)
  {
  cout<<c1.toss()<<endl;
  cout<<h1.shake()<<endl;
  }
  return 0;
}
