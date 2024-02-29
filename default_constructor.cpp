#include<iostream>

using namespace std;

class A
{
        int x;
        int y;
        public:
        A()
        {
                cout<<"Default constructor"<<endl;
                x=1,y=2;
        }

        A(int a,int b)
        {
                cout<<"parameter constructor"<<endl;
                x=a,y=b;
        }
        void get_data()
        {
                cout<<"x"<<x<<"y"<<y<<endl;
        }
};

int main()
{
        A obj,obj1(100,200);
        obj.get_data();
        obj1.get_data();
}

