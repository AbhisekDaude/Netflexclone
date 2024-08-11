#include<iostream>
using namespace std;
class dept_store
{
    static int count;
    int id;
    float price;
    public:dept_store(float p) //construtor function
    {
        price=p;
        count++;
        id=count;
        cout<<"the object with id="<<id<<"created"<<endl;
        

    }
    ~dept_store()  // destructor function 
    {
        cout<<"the object with id="<<id<<"destroyed"<<endl;
    }

};
int dept_store::count=0;
int main()
{
    dept_store obj1(50.50), obj2(70.30), obj3(10.7),obj4(3.5); //After intilization of the object parametrized constructor is called 
    return 0;
}