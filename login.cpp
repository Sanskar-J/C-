#include<iostream>
#include<fstream>
#include<string>
using namespace std;
class User
{
  string name,email,pass;
public:
  User()
  {
    name="No_Name";
    email="no_mail@moc.com";
    pass="password";
  }
  User(string n,string e,string p)
  {
    name="No_Name";
    email="no_mail@moc.com";
    pass="password";
  }
  friend void create_new(User a);
  friend void login(User a);
  friend void choice();
};
void choice()
{
  int c; User a;
  cout << "Enter 1 to create new account" << '\n'<<"Enter 2 for login"<<endl;
  cin>>c;
  if(c==1)
  create_new(a);
  else if(c==2)
  login(a);
  else
  cout<<"Invalid input"<<endl;
}
void create_new(User a)
{
  cout<<"Enter Name"<<endl;
  cin>>a.name;
  cout<<"Enter Email"<<endl;
  cin>>a.email;
  cout<<"Enter Password"<<endl;
  cin>>a.pass;
  ofstream data;
  data.open("data.db",ios::app);
  data<<a.name<<endl;
  data<<a.email<<endl;
  data<<a.pass<<endl;
  data.close();
  choice();
}
void login(User a)
{
  string name,email,pass;
  ifstream data;
  cout<<"Enter email"<<endl;
  cin>>a.email;
  cout<<"Enter Password"<<endl;
  cin>>a.pass;
  data.open("data.db",ios::app);
  if(data.is_open())
  {
    while(getline(data,name))
    {
     getline(data,email);
     getline(data,pass);
       if(a.email==email)
       {
        if(a.pass==pass)
        {
        cout<<name<<" logged in"<<endl;break;}
        else
        {cout<<"incorrect password...pls retry"<<endl;
           login(a);}
       }
    }
    data.close();
  }
  else
  cout<<"Unable to Open"<<endl;
}
int main()
{
  choice();
  return 0;
}
