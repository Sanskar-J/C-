#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main()
{
    int k=0;
    string line;
    string find;
    char name[25];
    int id=0;
    float gpa=0;

    ofstream myfile;
    myfile.open("data.txt");

    while(k!=3){

        cout<<"press 1 for adding data"<<endl;
        cout<<"press 2 for update "<<endl;

        cin>>k;

        if(k==1)
        {
            cout<<"enter ID "<<endl;
            cin>>id;

            cout<<"enter Name"<<endl;
            cin>>name;

            cout<<"enter GPA "<<endl;
            cin>>gpa;

            myfile<<name<<endl;
            myfile<<id<<endl;
            myfile<<gpa<<endl<<endl<<endl;
        }

        if(k==2)
        {

            cout<<"name u want to update "<<endl;
            cin>>find;
            ifstream file;

            file.open("data.txt");
            while (!file.eof() && line!=find)
            {

                getline(file,line);
            }

            cout<<"enter ID "<<endl;
            cin>>id;

            cout<<"enter Name"<<endl;
            cin>>name;

            cout<<"enter GPA "<<endl;
            cin>>gpa;
            myfile<<name<<endl;
            myfile<<id<<endl;
            myfile<<gpa<<endl<<endl<<endl;
        }
        if(k==3){
            myfile.close();
        }
    }
    return 0;
}
