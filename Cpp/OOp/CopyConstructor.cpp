#include <bits/stdc++.h>
using namespace std;


class Student{
    public:
        string * name;
        int age;
        string grade;
        vector<int>marks;
    
          // parameter constructor
          // here we use dynamic memory so also deallocated or delete it after the usage to prevent memory leaks
    Student(string n,int a,string g,vector<int>mark){
        cout<<"Parametriced Constructor is called"<<endl;
        name=new string(n);
        age=a;
        grade=g;
        marks=mark;
        
    } 


     // always write destructor to free the memory bcoz c++ does not have garbage collector
     ~Student(){
        delete name;
        cout<<"Destructor called"<<endl;
     }


     // copy constructor
     // deep copy ke liye & use hota hai
     // yaha par koi bhi aake value change kar sakta hai so ise constant bana do
     Student (const Student &other){
      name=new string(*other.name);
      age=other.age;
      grade=other.grade;
      marks=other.marks;
      cout<<"Copy constructor is called"<<endl;
     }




    void showDets(){
        cout<<"Name:"<<*name<<endl;
        cout<<"Age:"<<age<<endl;
        cout<<"Grade:"<<grade<<endl;
        cout<<"Marks are:--->"<<endl;
        for(auto it:marks)
            cout<<it<<" ";
        
        cout<<endl;
    }


};

int main(){
      Student s1("Billu",4,"A++",{100,100,99,99});
     s1.showDets();  


    // this is not the copy constructor because when we modified the values in s1 after calling it will still store the previous valuese
      // it will copy the object 

    Student s2=s1; //  here jo s1 ko deconstructor already free kar deiya tha lekin ye duabra free ho gya kyuki s2 mai s1 ka memeory refernce ja raha hai jo pehle free ho gya isliye destructor ne same ko 2 bar delete kar diya so yaha par ham copy constructor use karenge
    
    // s2.showDets();   
     

    // s1.name="Nunnu Kumar";
    // s2.showDets(); // it still has previous value 


    // kyuki name jo hai pointer hai
    *s1.name="Nunnu kumar";
    s2.showDets();
    s1.showDets();
    
}


/// Notes->

// Destructor utne bar chaelga jitna bar constructor  ka instance hai yani ki jitne bar object bana hai  