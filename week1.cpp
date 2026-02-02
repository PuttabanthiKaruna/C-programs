// a. Define a Student class with attributes: rollNumber, name, marks
#include<iostream>
using namespace std;
class student{
    int r,m,rno,marks;
    char n1[26],n2[26];
    public:
    void s1details()
    {
        cout<<"enter student 1 roll no:"<<endl;
        cin>>rno;
        cout<<"enter student 1 name:"<<endl;
        cin>>n1;
        cout<<"enter student 1 marks:"<<endl;
        cin>>marks;
        
    }
    void s2details()
    {
        cout<<"enter student 2 roll no:"<<endl;
        cin>>r;
        cout<<"enter student 2 name:"<<endl;
        cin>>n2;
        cout<<"enter student 2 marks:"<<endl;
        cin>>m;
    }
    
};

int main()
{
student c1,c2;
c1.s1details();
c2.s2details();
return 0;
}

// output
// enter student 1 roll no:
// 123
// enter student 1 name:
// kavya
// enter student 1 marks:
// 99
// enter student 2 roll no:
// 124
// enter student 2 name:
// priya
// enter student 2 marks:
// 98

-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
// b. Implement a constructor to initialize objects and a destructor to display a message when an object is deleted
#include<iostream>
using namespace std;
class abc{
    int a;
    public:
    abc()
    {
       cout<<"enter a value"<<endl;
       cin>>a;
    }
     ~abc(){
       cout<<"a value is="<<a;
    }
};
int main()
{
abc c1;
return 0;
}

// output
// enter a value
// 2
// a value is=2
