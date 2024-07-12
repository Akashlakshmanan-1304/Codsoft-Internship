#include<iostream>
using namespace std;
int main(){
    int a, b ,ch=0;
    do{
       
        cout<<"--------Operations--------\n1.Addition\n2.Subraction\n3.Multiplication\n4.Division\n5.Exit\nEnter Choice:";
        cin>>ch;
        if(ch!=5){
         cout<<"Enter Number 1 :";
        cin>>a;
        cout<<"Enter Number 2 :";
        cin>>b;
        }
        switch(ch){
            case 1:
            cout<<"Addition:"<<a+b<<endl;
            break;
            case 2:
            cout<<"Subraction:"<<a-b<<endl;
            break;
            case 3:
            cout<<"Multiplication:"<<a*b<<endl;
            break;
            case 4:
            cout<<"Division:"<<a/b<<endl;
            break;

        }
    }while(ch<5);
    cout<<"Thank you ☺️ ";
}