#include<iostream>
using namespace std;
class BankAccount {
public:
int accountNumber;
string accountHolder;
double balance;
BankAccount(int number, string holder, double initialBalance) {
accountNumber = number;
accountHolder = holder;
balance = initialBalance;
}
void deposit(double amount) {
balance += amount;
}
void withdraw(double amount) {
if (balance >= amount) {
balance -= amount;
} else {
std::cout << "Insufficient balance!" << std::endl;
}
}
void display() {
cout << "Account Number: " << accountNumber << std::endl;
cout << "Account Holder: " << accountHolder << std::endl;
cout << "Balance: " << balance << std::endl;
}
};
int main() {
BankAccount account(76790, "Bhavya Shah", 6000.0);
account.deposit(1500.0);
account.withdraw(700.0);
account.display();
return 0;
}