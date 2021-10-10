#include<iostream>
#include<fstream>
using namespace std;

int main(){
    string file;
    // ofstream myfile("text.txt");

    // myfile<<"this is my first try with files";


    ifstream myfile("text.txt");  //readfile
    while(getline(myfile, file)){    
        cout<<file;    
    }
    myfile.close();
    return 0;
}
