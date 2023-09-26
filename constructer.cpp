#include<iostream>
using namespace std;

class Demo{
    int id;
    // Access Modifier
    public:
    // Constructor without parameters
    Demo(){
        cout<<"Without Parameterized Constructor Called..."<<endl;
        id = -1;
    }
    // Constructor with parameters
    Demo(int x){
        cout<<"Parameterized Constructer Called..."<<endl;
        id = x;
    }
    void getter();
};
void Demo::getter(){
    cout<<id<<endl;
}
int main(){
    // obj creation
    class Demo obj;
    obj.getter();
    class Demo obj1(5);
    obj1.getter();
}