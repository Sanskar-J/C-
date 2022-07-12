#include<iostream>
using namespace std;

//Base class
class Parent
{
    public:
      string id_p="maa chuda";
};

// Sub class inheriting from Base Class(Parent)
class Child : public Parent
{
    public:
      string id_c="tu bhi chuda";
};

//main function
 main()
   {

        Child obj1;

        // An object of class child has all data members
        // and member functions of class parent
      //  obj1.id_c = 7;
      //  obj1.id_p = 91;
        cout << "Child id is " <<  obj1.id_c << endl;
        cout << "Parent id is " <<  obj1.id_p << endl;

        return 0;
   }
