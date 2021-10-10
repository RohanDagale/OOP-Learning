#include<iostream>
using namespace std;

//base class
class animal{
    public:
        void animalsound(){
            cout<<"the animal makes a sound\n";
        }
};

//derived class
class pig: public animal{
    public:
        void animalsound(){
            cout<<"the pig says: wee wee\n";
        }
};

class dog {
    public:
        void animalsound(){
            cout<<"the dog says: bow bow\n";
        }
};

int main(){
    animal myanimal;
    pig mypig;
    dog mydog;

    myanimal.animalsound();
    mypig.animalsound();
    mydog.animalsound();

    return 0;
}
