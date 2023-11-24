#include <iostream>
using namespace std;
 class Base{
    public:
    virtual void display(){
        cout<<"here display function of base class";
    }
 };

class derived:public Base{
    public:
    void display()
    {
        cout<<"Display of derived class";
    }
};

class extra:public derived {
    public:
    void display()
    {
        cout<<"Display of extra class";
    }
};
int main()
{
    Base B;
    B.display();  
    derived D;
    D.display();
    extra C;
    C.display();
    return 0;
}