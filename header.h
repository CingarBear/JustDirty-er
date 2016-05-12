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

const int PROMPT_COL = 20;

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

/*************************************************************************
 * 	FUNCTION GetAndCheckInput
 * 		This function will accept a single character as input and error
 * 		check it to ensure is is a valid gender response.
 * 	- returns a valid single character response received as input
 *************************************************************************/
char GetAndCheckInput (const string PROMPT,// IN - response prompt
                           char validChar1,	   // IN - valid char response
                           char validChar2);   // IN - valid char response

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
string GetReview();

#endif // HEADER_H
