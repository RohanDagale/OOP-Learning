#include<iostream>
using namespace std;

 class employee{
    private:
        int a, b, c;   //only function can use private data
    public:
        int d, e;
        void setdata(int a1 , int b2,int  c3);//declaration
        void getdata(){
            cout<<"the value of a is "<<a<<endl;
            cout<<"the value of b is "<<b<<endl;
            cout<<"the value of c is "<<c<<endl;
            cout<<"the value of d is "<<d<<endl;
        }
 };
void employee::setdata(int a1, int b2, int c3){
    a = a1;
    b = b2;
    c = c3;
}


int main(){
    employee rohan;
    // rohan.a = 45;  //only function can use private data 
    rohan.d = 45;
    rohan.e = 45;
    rohan.setdata(1,2,4);
    rohan.getdata();
    return 0;
}
