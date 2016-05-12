#include "Customer.h"

Customer::Customer(){}
Customer::Customer(QString newName,
         QString newAddress,
         int 	newInterest,
         int 	newType)
{
    name = newName;
    address = newAddress;
    if(newInterest < 3 && newType < 3)
    {
        interestLevel = newInterest;
        customerType = newType;
    }
}

Customer::~Customer(){}

void Customer::SetName   (QString newName)   {name    = newName;}
void Customer::SetAddress(QString newAddress){address = newAddress;}

void Customer::SetInterest(int newInterest)
{
    if(newInterest < 3)
    {
        interestLevel = newInterest;
    }
}

void Customer::SetType(int newType)
{
    if(newType < 3)
    {
        customerType = newType;
    }
}

QString Customer::GetName()
{return name;}

QString Customer::GetAddress()
{return address;}

QString Customer::GetInterest()
{
    QString interest;

    switch(interestLevel)
    {
        case 0 : interest = "Not Interested";
        break;
        case 1 : interest = "Interested";
        break;
        case 2 : interest = "Very Interested";
        break;
    }

    return interest;
}
QString Customer::GetType()
{
    QString type;

    switch(customerType)
    {
        case 0 : type = "Potential";
        break;
        case 1 : type = "Nice to have";
        break;
        case 2 : type = "Key";
        break;
    }

    return type;
}



