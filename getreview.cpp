#include "header.h"

void GetReview(QString ReviewList[], int & index, const int AR_SIZE)
{
    string review;
    QString QStr;

    getline(cin, review);

    QStr = QString::fromStdString(review);

    if(index < AR_SIZE)
    {
        index++;
        ReviewList[index];
    }
}

