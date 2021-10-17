#include<iostream>
#include<string>
using namespace std;

class binary{
    string s;
    public:
        void read(void);
        void chk_bin(void);
        void ones(void);
        void display(void);
    
};
void binary :: read(void){
    cout<<"enter a binary number: "<<endl;
    cin>>s;
}

void binary :: chk_bin(void){
    for (int i = 0; i < s.length(); i++)
    {
        if(s.at(i)!= '0' && s.at(i)!='1'){
            cout<<"incorrect binary formaat"<<endl;
            exit(0);
        }
    }
    
}
void binary::ones(void){
    for(int i = 0; i < s.length(); i++)
        {
            if(s.at(i)=='1'){
                s.at(i)='0';
            }
            else{
                s.at(i) = '1';
            }
        }
        
    
}

void binary::display(void){
    cout<<"this is ones compliment"<<endl;
    for (int i = 0; i < s.length(); i++)
    {
        cout<<s.at(i);
    }
    
}
int main(){
    binary obj;
    obj.read();
    obj.chk_bin();
    obj.ones();
    obj.display();
    return 0;
}
