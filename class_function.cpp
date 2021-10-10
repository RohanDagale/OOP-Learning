#include<iostream>
using namespace std;

class myclass{
    public:
    void mymethod(){
        cout<<"this is short cut inside function declaration method";
    };
};

// void myclass::mymethod(){
//     cout<<"this is long  cut for outside function";
// }

int main(){
    myclass obj;
    obj.mymethod();
    return 0;
}
