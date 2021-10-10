#include<iostream>
using namespace std;

class vehical{    //base class
    public:
        string brand = "ford";
        void honk(){
            cout<<"this is car"<<"\n";
        }
};

//derived class
class car:public vehical{
    public:
        string model = "mustang";
    
};


//multilevel inheritance     1 base class and multiple child class
//base class (parent)
class myclass{
    public:
        void myfunction(){
            cout<<"\nthis is some real level shit"<<endl;
        }
};

class child:public myclass{};  //derived class  (child)
class grandchild:public child{};   //derived class (grandchild)

// multiple inhertance    
class mutli{    //base class
    public:
        void func(){
            cout<<"this is mutiple inheritance";
        }
};

class otherclass{    //another base class
    public:
        void otherfunc(){
            cout<<"\nthis is multiple other class";
        }
};

class mychild: public mutli, public otherclass{};



//access specifiers
class employee {
    protected:    //protected access specifier
        int salary;
};


//derived class
class programmer: public employee{
    public:   
        int bonus;
        void setsalary(int s){
            salary = s;
        }
        int getsalary(){
            return salary;
        }
};



int main(){
    car mycar;
    mycar.honk();
    cout<<mycar.brand+ " "+ mycar.model;
    grandchild harem;
    harem.myfunction();

    mychild obj;
    obj.func();
    obj.otherfunc();

    programmer obj1;
    obj1.setsalary(500000);
    obj1.bonus = 15000;
    cout<<"salary : "<<obj1.getsalary()<<endl;
    cout<<"bonus: "<<obj1.bonus<<endl;
    return 0;
}
