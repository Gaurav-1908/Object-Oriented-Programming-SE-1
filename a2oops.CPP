#include <iostream>
using namespace std;


class calculator{
    public:
    float num1,num2;
    void get_value(){
        
        cout<<"Enter first Number:";
        cin>>num1;
        cout<<"Enter Second Number:";
        cin>>num2;
    }
    
    void add(){
        cout<<num1<<" + "<<num2<<" = "<<num1+num2<<endl;
    }
    
    void sub(){
        cout<<num1<<" - "<<num2<<" = "<<num1-num2<<endl;
    }
    
    void mul(){
        cout<<num1<<" * "<<num2<<" = "<<num1*num2<<endl;
    }
    
    void divi(){
        cout<<num1<<" / "<<num2<<" = "<<num1/num2<<endl;
    }
    
    void mod(){
        int c,d;
        c=num1;
        d=num2;
        cout<<num1<<" % "<<num2<<" = "<<c%d<<endl;
    }
};

int main(){
    calculator s;
    
    
    char N;
    char ans;
    
    do{
        cout<<"Select Choice from following list: "<<endl;
        cout<<"1 : Addition"<<endl;
        cout<<"2 : Subtraction"<<endl;
        cout<<"3 : Multiplication"<<endl;
        cout<<"4 : Division"<<endl;
        cout<<"5 : Moduar Division"<<endl;
        
        cout<<"Enter Choice: ";
        cin>>N;
        s.get_value();
        
        switch(N){
            
        case '1':
            s.add();
            break;
        case '2':
            s.sub();
            break;
        case '3':
            s.mul();
            break;
        case '4':
            s.divi();
            break;
        case '5':
            s.mod();
            break;
        default:
            cout<<"Please Select right Choice"<<endl;
    }
    
    cout<<"Do You want to continue: ";
    cin>>ans;
    }while(ans=='y');
   
    return 0;
}
