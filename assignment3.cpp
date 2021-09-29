Skip to content
Search or jump to…
Pull requests
Issues
Marketplace
Explore
 
@rahul03baruah 
vivekduttamishra
/
202109-siemens
Public
generated from vivekduttamishra/js-starter
1
00
Code
Issues
Pull requests
Actions
Projects
Wiki
Security
Insights
202109-siemens/tax/tax-calculator.h
@vivekduttamishra
vivekduttamishra day#7 update#1
Latest commit 90093d3 21 hours ago
 History
 1 contributor
32 lines (24 sloc)  841 Bytes
   

class TaxCalculator{

    public:
    virtual int calculateTax(FinancialInfo info)=0;
};


class TaxCalculator2019: public TaxCalculator{
    public:
    int calculateTax(FinancialInfo info){
        
        return (info.income-info.expense-info.investment)*(0.2 -  0.05*(info.gender==Gender::Female));
       
    }
};

class TaxCalculator2020: public TaxCalculator {
    public:
    int calculateTax(FinancialInfo info){       
        return (info.income-(info.expense>50000?50000:info.expense)-(info.investment>100000?100000:info.investment))* 0.15;
    }
};

class TaxCalculator2021:public  TaxCalculator2020 {
    public:
	int calculateTax2021(FinancialInfo info) {
		int tax = this.calculateTax(info);
		return info.gender==Gender::Female?tax*0.5:tax;
	}
    int calculateTax(FinancialInfo info){       
        //rules for Males remains unchanged
        //Ladies gets 5% extra rebate on previous years calculation
        //How do I reuse TaxCaclculator 2020
    }
};
© 2021 GitHub, Inc.
Terms
Privacy
Security
Status
Docs
Contact GitHub
Pricing
API
Training
Blog
About
