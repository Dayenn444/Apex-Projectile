#include <iostream>
using namespace std;
int main(){
    for(int a = 0 ; a <31 ; a++){if (a==0){cout<<" ";}
    cout<<"*";}
    cout<<endl;
    for(int a=0; a<3 ; a++){
        for(int b = 0 ; b<1 ; b++){cout<<"*";}
        for(int c = 0 ; c<30; c++){cout<<" ";
        if(c==27){cout<<"*";}else if(c==29){cout<<"*";}}
        cout<<endl;}
    for(int a=0;a<1;a++){cout<<"*";
        for(int b=0 ; b<30 ; b++){if(b==4)
            {for(int c =0 ; c<6 ; c++){cout<<"*";}}
        cout<<" ";
        if(b==7){for(int c=0 ; c<17;c++){cout<<"*";}}}
        cout<<endl;}
    for(int a=0 ; a<3 ; a++){cout<<"*";
        for(int b = 0 ; b<14 ; b++){
        if (b==4){cout<<"*";}if (b==8){cout<<"*";}
        if (b==12){cout<<"*";}else{cout<<" ";}}cout<<endl;}
    for(int a=0;a<9;a++){if(a==0){cout<<" ";}
        if(a==4){for(int b =0 ; b <6 ;b ++){cout<<" ";}}
        else{cout<<"*";}} 
    cin.ignore();
    cin.get();
    return 0;
}