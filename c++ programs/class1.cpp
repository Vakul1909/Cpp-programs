#include<iostream>
#include<string>
using namespace std;
class info{
    // properties : public,private,protected
    // four pillars for oops are:
    // encapsulation means wrapping up of data & member functions in a single unit cell called class...
    // inheretance means one person occupy space of all means it behaves like a parental shell...
    // abstraction means     
    // polymorphism means having many forms. In simple words, we can define polymorphism as the ability
    // of a message to be displayed in more than one form means person have diff behaviour at same tym... 
    // two types:1- function overloading means many function with same name but diff parameters... 
    //          2- operator overloading means one operator (+) but diff means in integer(sum) and string(concatenate)...
    // itz private property
private:
    int age;
    // itz public property
public:     
    string name;    
    // we can access age from private property by using getter and setters function    
    void setage(int A){
        age=A;
    } int getage(){
        return age;
    }    
};
int main(){
    info a;
    a.name="vakul";
    // we here use the getter and setters for calling private property
    a.setage(20);
    cout<<"Name is:"<<a.name<<endl;
    cout<<"Age is:"<<a.getage()<<endl;
    return 0;    
}