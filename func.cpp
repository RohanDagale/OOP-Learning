#include<iostream>
using namespace std;

void myfunction(){     //this is simple function
    cout<<"this is my function\n";
}

void before();  // first declaration of function

void parafunc(string fname){  //function with parameters
    cout<<fname<<endl;
}
void defaultfunction(string country = "USA"){
    cout<<country<<endl;
}

void multifunc(string name, int age){   //multiple parameters
    cout<<"Name: "<<name<<"\n" <<"Age: "<<age<<endl;
}

int myfunc(int x){  //return values
    return 5 + x;
}

int twoint (int x, int y){ // return two values
    return x + y;
}

void swap(int &x, int &y){   //swaping pass by reference
    int z = x;
    x = y;
    y = z;
}

int plusfunc(int x, int y){     //function overloading with same name diff parameters
    return x + y;
}
double plusfunc(double x, double y){
    return x + y;
}

int main(){
    myfunction();
    before();
    parafunc("lara");  //argument for parameters
    parafunc("jonah");
    defaultfunction("india");
    defaultfunction();
    multifunc("Harry", 28);
    cout<<myfunc(3)<<endl;
    cout<<twoint(5, 8)<<endl;
    int z = twoint(5, 8);
    cout<<"\n"<<z;
    int firstnum = 10;
    int secnum = 20;
    cout<<"\nbefore swap: \n";
    cout<<firstnum<<secnum<<endl;
    swap(firstnum, secnum);
    cout<<"after swap: \n";
    cout<<firstnum<<secnum<<endl;
    int num1 = plusfunc(2, 8);
    int num2 = plusfunc(1, 5);
    cout<<"int: "<< num1 <<endl;
    cout<<"double: "<< num2 <<endl;

    return 0;
}

void before(){   // second function defination
    cout<<"this is declare after main\n";
}

