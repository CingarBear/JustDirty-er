#ifndef CUSTOMER_H
#define CUSTOMER_H

#include <iomanip>
#include <iostream>
#include <sstream>
#include <fstream>
#include <QString>
#include <cctype>
#include <limits>
#include <ios>
#include <cstdlib>

using namespace std;

class Customer
{
    private :
        QString 	name;
        QString 	address;
        int  	interestLevel;
        int 	customerType;
    public :
        Customer();
        Customer(QString newName,
                 QString newAddress,
                 int 	 newInterest,
                 int 	 newType);
        ~Customer();

        void 	SetName(QString newName);
        void 	SetAddress(QString newAddress);
        void 	SetInterest(int newInterest);
        void 	SetType(int newType);

        QString 	GetName();
        QString 	GetAddress();
        QString 	GetInterest();
        QString	    GetType();
};

#endif // CUSTOMER_H

