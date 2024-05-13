#include <iostream>
using namespace std;
class BankAccount
{
    private:
        int balance;
    public:
        BankAccount(int initBalance):balance(initBalance){}
        int getBalance() const{return this->balance;}
        public:
        //const bankaccount* const this

        BankAccount operator+(const BankAccount &operandTwo) const{ 
        BankAccount newAccount{0};
        newAccount.balance = this->getBalance() + operandTwo.getBalance();
        return newAccount;
    }
         friend ostream& operator<<(ostream& out, const BankAccount& operandTwo){ 
        out << "Current Balance is " << operandTwo.balance;
        return out;
    }
};
int main(){
    BankAccount acc1(1000);
    BankAccount acc2(2000);
    cout<<acc1<<endl;
    cout<<acc2<<endl;

    BankAccount acc3=acc1+acc2;
    cout<<acc3<<endl;
     return 0;

} 


