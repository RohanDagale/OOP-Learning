#include<iostream>
using namespace std;

class room{
    private:
        double len;
        double brth;
    public:
    room(){  //constructor with no arguement
        len = 6.9;
        brth = 4.3;
    }
    room(double l, double b){   //constructor with two arguement
        len = l;
        brth = b;
    }
    room(double l){  //constructor with one arguement
        len = l;
        brth = 6.3;
    }
    double calculatearea(){  //calculater function
        return len * brth;
    }
};

int main(){
    room obj, obj1(4.3, 6.2), obj2(4.5);
    cout<<"when no arguement is pass: "<<endl;
    cout<<"the area of room is: "<<obj.calculatearea()<<endl;

    cout<<"when two arguement is pass: "<<endl;
    cout<<"the area of room is: "<<obj1.calculatearea()<<endl;

    cout<<"when one arguement is pass but the breadth is fixed 6.3: "<<endl;
    cout<<"the area of room is: "<<obj2.calculatearea()<<endl;


    return 0;
}
