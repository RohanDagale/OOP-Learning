#include<iostream>
using namespace std;

class car{
    public:
        string brand;
        string model;
        int year;
        car(string x, string y, int z){  //contructor withfse parameters
            brand = x;
            model = y;
            year = z;
        }
};

class myclass{    //default is private
    public:   //access specifiers
    int x;
    // private:
    // int y;
};

class employee{
    private:
        int salary;
    public:
        void setsalary(int s){
            salary = s;
        }
        int getsalary(){
            return salary;
        }
};

int main(){
    car obj1("BMW","YZ",2021);
    cout<<obj1.brand<<endl;
    cout<<obj1.model<<endl;
    cout<<obj1.year<<endl;
    myclass obj;
    obj.x = 24;
    // obj.y = 34;
    employee myobj;
    myobj.setsalary(750000);
    cout<<myobj.getsalary();
    return 0;
}
