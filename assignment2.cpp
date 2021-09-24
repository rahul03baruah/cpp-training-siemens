// Example program
#include <iostream>
#include <string>
using namespace std;
class EmpInfo {
    private:
     int income;
     int expense; 
     int investment; 
     int gender;
     int pan
    public:
     EmpInfo(int income, int expense, int investment, int gender, int pan ) {
         this.income = income;
         this.expense = expense; 
         this.investment = investment; 
         this.gender = gender;
         this.pan = pan         
     }
     int getIncome(){}
     int getExpense(){}
     int getInvestment(){}
     int getPan(){}
};

class CalculateTax {
    int assesYear;
    int resident;
    int salary;
public:
    CalculateTax(int assesYear, int resident, int salary)
    int calculateTax(int year) {}
}

class SubmitTax {
    string currentWeb;
public:
    SubmitTax(string wedsite)
    bool submitForm(int tax){}
}

class IncomeTaxManager{
    EmpInfo empInfo;
    CalculateTax calculator;
    SubmitTax submitForm;
public:
    bool submitTax(int pan, int year)
    {
        if(pan == getPan())
        {
            int tax = calculator.calculateTax(year);
            submitForm.submitForm(tax);
            return true;
        }
        else
            return false;
    }
};

int main()
{
    EmpInfo emp(...);
    CalculateTax calculator(...);
    SubmitTax submitTax("...");
    IncomTaxManager *manager=new IncomeTaxManager(emp, calculate, submitTax); 
    manager->submitTax(1234, 2021);
}
