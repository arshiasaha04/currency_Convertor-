#include<iostream>
using namespace std;

class currencyConvertor
{
private:
    double usdToEuroRate;
    double euroToUsdrate;
    double usdToIndrate;
public:
    currencyConvertor(double usdToEuro, double euroToUsd, double usdToInd)
    {
        usdToEuroRate = usdToEuro;
        euroToUsdrate = euroToUsd;
        usdToIndrate  =  usdToInd;
    }

    double usdToEuro(double usdAmount)
    {
        return usdAmount*usdToEuroRate;
    }

    double euroToUsd(double euroAmount)
    {
        return euroAmount*euroToUsdrate;
    }

    double usdToInd(double indAmount)
    {
        return indAmount*usdToIndrate;
    }

    void displayExchangeRate() const{
        cout<<"CURRENT EXCHANGE RATE\n\n";
        cout<<"1 USD TO EURO : "<<usdToEuroRate<<endl;
        cout<<"1 EURO TO USD : "<<euroToUsdrate<<endl;
        cout<<"1 USD TO INDIA : "<< usdToIndrate<<endl;
    }
};


main()
{
    const double initialUsdToEurorate = 0.85;
    const double initialEuroToUsdRate = 1.18;
    const double initialUsdToIndRate = 75.0;
    
 currencyConvertor convertor( initialUsdToEurorate,initialEuroToUsdRate,initialUsdToIndRate);
    int choice;
    double amount;
    do
    {
        system("cls");
        convertor.displayExchangeRate();
        cout<<"\n CURRENCY CONVERTED\n";
        cout<<"1. Convert USD To EURO:\n";
        cout<<"2. Convert EURO To USD:\n";
        cout<<"3. Convert USD To INDIAN RUPEE\n";
        cout<<"0. EXIT\n";
        cout<<"\n\n Enter Your Required Choice:";
        cin>>choice;
        switch(choice)
        {
            case 1:
            cout<<"Enter the Amount in USD :";
            cin>>amount;
            cout<<amount<<" USD is equivalent to "<<convertor.usdToEuro(amount)<<" EURO\n";
            system("pause");
            break;
            case 2:
            cout<<"Enter the Amount in EURO :";
            cin>>amount;
            cout<<amount<<" EURO is eqivalent to "<<convertor.euroToUsd(amount)<<" USD\n";
            system("pause");
            break;
            case 3:
            cout<<"Enter the Amount in USD:";
            cin>>amount;
            cout<<amount<<" USD is equivalent to "<<convertor.usdToInd(amount)<<" Rupees\n";
            system("pause");
            break;
            case 0:
            cout<<"Program End";
            break;
            default:
            cout<<"Please enter a valid number\n";
            system("pause");
        }
    }while(choice!=0);
}



