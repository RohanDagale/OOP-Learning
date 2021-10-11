#include<iostream>
using namespace std;

class encap{
    private:   //data hidden from outside world
        int x;
    public:
        void set(int a){   //function to set value for X
            x = a;
        }
        int get(){   //function to return value to variable x
            return x;
        }
};

class rec{
    public:
        int length;
        int breadth;
    rec(int len, int brth){  //constructor with parameteres(default constructor calls automatically)
        length = len;
        breadth = brth;
    }
    int getarea(){   //function to calculate area
        return length * breadth;
    }
};



class circle{
    private:
        int length;
    public:
        void setlength(int len){  //provide read-only access
            if (len >= 0);
                length = len;
        }
    int getlength(){  //provide write only access
        return length;
    }
};

class person{
    private:
        int age;
    public:
        person(){    //constructor without parameters     (overloading using funtion)
            age = 20;
        }
        person(int a){  //constructor with parameters
            age = a;
        }
        int getage(){
            return age;
        }
    };

int main(){
    encap obj;
    obj.set(5);
    cout<<obj.get()<<endl;

    rec obj2(5, 6);
    cout<<"the area of rectangel is: "<<obj2.getarea()<<endl;

    circle obj3;
    obj3.setlength(15);
    cout<<"the radius of circle is: "<<obj3.getlength()<<endl;

    person person1, person2(45);    //only when constructor is with and without parameters
    cout<<"person1 age: "<<person1.getage()<<endl;
    cout<<"person1 age: "<<person2.getage()<<endl;
    return 0;
}
