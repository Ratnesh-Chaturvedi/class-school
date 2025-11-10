#include <bits/stdc++.h>
using namespace std;


class Student{
    public:
        string name;
        int age;
        string grade;
        vector<int>marks;
    // default constructor is build by default when we make the object of class 
    // here we can make constructor by our choice or type of parameter they can take 
    //when the object is created is called by default 
    Student(){
        cout<<"Construtor is called"<<endl;
    }
    // parameter constructor
    Student(string n,int a,string g,vector<int>mark){
        cout<<"Parametriced Constructor is called"<<endl;
        name=n;
        age=a;
        grade=g;
        marks=mark;
        
    } 
   
    void showDets(){
        cout<<"Name:"<<name<<endl;
        cout<<"Age:"<<age<<endl;
        cout<<"Grade:"<<grade<<endl;
        cout<<"Marks are:--->"<<endl;
        for(auto it:marks)
            cout<<it<<" ";
        
        cout<<endl;
    }


};

int main(){
     Student s1; // default constructor;
     s1.name="Ratnesh";
     s1.age=20;
     s1.grade="A+";
     s1.marks={100,88,99,88};
     s1.showDets();   

     // parametriced constructor
     Student s2("Billu",4,"A++",{100,100,99,99});
     s2.showDets();
}