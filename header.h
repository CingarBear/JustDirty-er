#ifndef HEADER_H
#define HEADER_H

#include <iomanip>
#include <iostream>
#include <sstream>
#include <fstream>
#include <QString>
#include <cctype>
#include <limits>
#include <ios>
#include <cstdlib>

#include "customer.h"

#include <QString>

using namespace std;

/***********************************************************************
  GLOBAL CONSTANTS
  ---------------------------------------------------------------------
    PROMPT_CO           : Used for formatting output
    ADMIN_PASSWORD		: Used for processing
    CUSTOMER_PASSWORD   : Used for processing
 ***********************************************************************/
const int PROMPT_COL        = 20;
const int AR_SIZE           = 50;
const int ADMIN_PASSWORD    = -1234;
const int CUSTOMER_PASSWORD = 1234;

/***********************************************************************
  ENUMS
  ---------------------------------------------------------------------
    Interest	: Used for output
    Type		: Used for output
 ***********************************************************************/
enum Interest
{
    notInterested,
    interested,
    veryInterested
};

enum Type
{
    potential,
    niceToHave,
    key
};


/**************************************************************************
* FUNCTION GetAndCheckInput
* 	This function prompts the user a prompt and receives integer input.
*	 It will error check the input and check if it is within boundaries.
* 	 It will return the valid integer input.
**************************************************************************/
int GetAndCheckInput( string prompt,        // IN - prompt for user
                       string errorMessage,	 // IN - Error message
                       int    min,           // IN - minimum boundary
                       int    max);          // IN - maximum boundary

/**************************************************************************
* FUNCTION CreateList
* 	This function gets passed in a list of Customer objects and it then
*   loads the list with the customer information and then returns the
*   list by reference.
* - Returns: List (by reference)
**************************************************************************/
void CreateList(Customer List[], const int AR_SIZE);

/**************************************************************************
* FUNCTION GetReview
* 	This function allows the user to define a QString and it then returns
*   that QString.
* - Returns: A QString
**************************************************************************/
void GetReview(QString ReviewList[], int & index, const int AR_SIZE);

#endif // HEADER_H
