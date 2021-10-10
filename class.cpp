#include<iostream>
using namespace std;

class myclass{   //class
    public:     //access specifier
        int num;    //attribute
        string mystring;

};

class car{
    public:
        string brand;
        string model;
        int year;
};

class func{   //function inside class
    public:
        void method(){
            cout<<"this is functionin class";
        }
};

class out{    //
    public:
        void mark();
};

void out::mark(){  //delcaration of function out side the class
    cout<<"this is function declaration out side class";
}

class para{      //class with parameters
    public:
        int speed(int maxspeed){
            return maxspeed;
        }
};

class def{    //default class
    public:
        def(){   // constructor
            cout<<"this is default class";
        }
};

int main(){
    myclass obj;
    obj.num = 15;
    obj.mystring = "this is string";
    cout<<obj.num<<"\n";
    cout<<obj.mystring<<"\n";

    car carobj;
    carobj.brand = "BMW";
    carobj.model = "A8";
    carobj.year = 2018;

    cout<<carobj.brand<<endl;
    cout<<carobj.model<<endl;
    cout<<carobj.year<<endl;

    car seccar;
    seccar.brand = "AUDI";
    seccar.model = "XZ";
    seccar.year = 2022;
    cout<<seccar.brand<<endl;
    cout<<seccar.model<<endl;
    cout<<seccar.year<<endl;

    func infun;
    infun.method();

    out obj2;
    obj2.mark();

    para myobj;
    cout<<myobj.speed(200)<<endl;

    def objd;
    return 0;
}
