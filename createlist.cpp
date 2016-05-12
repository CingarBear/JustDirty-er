#include "header.h"

void CreateList(Customer List[], const int AR_SIZE)
{
    ifstream inFile;

    string name;
    string address;
    string interest;
    string type;

    int interestLevel;
    int TypeLevel;

    inFile.open("input.txt");

    for(int index = 0; index < AR_SIZE; index++)
    {
        getline(inFile, name);
        getline(inFile, address);
        getline(inFile, interest);
        getline(inFile, type);

        List[index].SetName(QString::fromStdString(name));
        List[index].SetAddress(QString::fromStdString(address));

        if(interest == "Not Interested")
        {
            interestLevel = notInterested;
        }
        else if(interest == "Interested")
        {
            interestLevel = interested;
        }
        else if(interest == "Very Interested")
        {
            interestLevel = veryInterested;
        }

        if(type == "Potential")
        {
            TypeLevel = potential;
        }
        else if(type == "Nice to have")
        {
            TypeLevel = niceToHave;
        }
        else if(type == "Key")
        {
            TypeLevel = key;
        }

        List[index].SetInterest(interestLevel);
        List[index].SetType(TypeLevel);

        inFile.ignore(1000, '\n');
    }
}


