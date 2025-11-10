#include <bits/stdc++.h>
using namespace std;

class Student{
 public:
    string stuName;
    int age;
    string grade;
    vector<int>marks;
    
    void displayDet(){
        cout<<"Student name:"<<stuName<<endl;
        cout<<"Age:"<<age<<endl;
        cout<<"Grade:"<<grade<<endl;
        cout<<"Marks:";
        for(int mark:marks){
            cout<<mark<<" ";
        }
        cout<<endl;
    }
     
};


int main(){
    
    Student st1;
    st1.stuName="Ratnesh";
    st1.age=20;
    st1.grade="A+";
    st1.marks={99,100,100,89,90};
    st1.displayDet();

    return 0;
}