//file name 
//author name
//date
//description of the purpose of the code it contains

//main() should also include documentation for the overall program:
//description of the program's input and output
//how to use the program
//assumptions such as the type of data expected, exceptions
//brief description of the major algorithms and key variables

/****When writing preprocessors****/
//use "#include <vector>" when accessing C++ STL instead of "#include <vector.h>" 
#include <iostream>
#include <string>
#include "FormattedObject.h"
using namespace std; //It is acceptable to use the directive using namespace std;

/****When writing functions****/
//Each function should be preceded by a comment with a short description of: 
//function's purpose
//precise description of each of its parameters
//preconditions
//postconditions 
//return value
//functions called

int functionExample(int exampleValue, string exampleString); //function declaration
//Functions should be used for appropriate operations, with reference arguments used only when necessary. The type of each function must be declared (use void when necessary).

int main()
{
   //Blocks of code should be indented three spaces. This includes the bodies of functions. 
   //You must set your IDE or editor so indentation actually produces actual ASCII/UTF-8 space characters in your source code files, not tabs.
   //If you are using Visual Studio: Navigate to the dropdown menu for Tools -> Text Editor -> C/C++ -> Tabs -> Then set Indent size to 3, and check Insert Spaces

   //Variables should be given descriptive names, unless they are very clearly just loop counters or the like. 
   //There should be comments associated with each variable declaration 
   //explaining how the variable fits into the algorithm, and including invariant information such as its legal range of values.

   int temp = 0; //temp is not descriptive so don't use this, it is useful for this example though
   string tempString = "";
   
   string& inputString = tempString;
   int& inputNum = temp;
   cout << "Please enter an integer lower than 2^32 - 1 : " << endl;
   cin >> inputNum; 
   cout << "Please enter an string name: " << endl;
   cin >> inputString;


   cout << "Your number was: " << inputNum << endl;
   cout << "Your name was: " << inputString << endl;
   FormattedObject a = FormattedObject(inputNum, inputString);
   cout << a.getName() << endl; 
   cout << a.getNumber() << endl; 

   cout << "hit another button to end the program" << endl; 
   int pause;
   cin >> pause; 
   return 0; 
}

int functionExample(int exampleValue, string exampleString)
{
   return 0;
}
