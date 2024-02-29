#include<iostream>
using namespace std;
class A
{
        int x;
        int y;
        public:
        A(); // Declaration of constructor

        void get_data()
        {
                cout<<"x:"<<x<<"y:"<<y<<endl;
        }
};
// defination constructor.
A::A(){
        cout<<"constructor is called"<<endl;
        cin>>x>>y;
}

int main()
{
        A obj;
        obj.get_data();
}

