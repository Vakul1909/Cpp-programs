#include<iostream>
using namespace std;
bool check(int a,int b,int c){
    if(a>b&&a>c){
        if((a*a)==(b*b)+(c*c)){
            return true;
        }else{
            return false;
        }
    }else if(b>a&&b>c){
        if((b*b)==(a*a)+(c*c)){
                return true;
        }else{
            return false;
        }
    }else{
        if((c*c)==(a*a)+(b*b)){
            return true;
        }else{
            return false;
        }
    }
}
int main(){
    int a,b,c;
    cout<<"enter three numbers:";
    cin>>a>>b>>c;
    if(check(a,b,c)){
        cout<<"itz a pythagoras triplet"<<endl;
    }else{
        cout<<"itz not a pythagoras triplet"<<endl;
    }
    return 0;
}