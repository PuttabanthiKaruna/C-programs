#include<iostream>
using namespace std;
class BankAccount{
    int availablebalance;
    int amountwithdraw;
    public:
    BankAccount(){
    cout<<"welcome"<<endl;
    cout<<"enter available balance"<<endl;
    cin>>availablebalance;
    cout<<"enter withdraw amount"<<endl;
    cin>>amountwithdraw;
   }
 void checkbalance(){
    cout<<"available balance="<<availablebalance<<endl;
    cout<<"amount withdraw="<<amountwithdraw<<endl;
    availablebalance=availablebalance-amountwithdraw;
    cout<<"total amount available="<<availablebalance<<endl;
    
    
}
~BankAccount(){
    cout<<"transaction completed";
}

};
int main(){
    BankAccount a;
    a.checkbalance();
    return 0;
}

//output
// welcome
// enter available balance
// 5000
// enter withdraw amount
// 1000
// available balance=5000
// amount withdraw=1000
// total amount available=4000
// transaction completed
