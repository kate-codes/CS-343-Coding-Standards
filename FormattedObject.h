//file name 
//author name
//date
//description of the purpose of the code it contains


/****When writing headers****/
//remember that we learned in 342 that all headers should have 
//Constructors
//Destructors (may be empty if no new memory created)
//Modifiers -- Setters
//Accessors -- Getters 
//Actions (verbs) 
//Operator Overloads 
//Private Data Types

#pragma once 
#ifndef FORMATTEDOBJECT_H  //include guards
#define FORMATTEDOBJECT_H

/****When writing preprocessors****/
//use "#include <vector>" when accessing C++ STL instead of "#include <vector.h>" 
#include <iostream>
#include <string>
using namespace std; //It is acceptable to use the directive using namespace std;

class FormattedObject 
{
public:
   /****When writing methods****/
   //Do not return references or pointers to internal class/object structures. Classes must not expose any of their internal implementations.
   
   //constructors
   FormattedObject();
   FormattedObject(const int& inputNumber, const string& inputName);

   //destructors
   ~FormattedObject();

   //accessors
   string getName() const;
   int getNumber() const;

   //modifiers
   bool setNumber(const int& inputNumber);
   bool setName(const string& inputName); 

   //actions
   //*TBD* 

   //overloads
   //*TBD*

private:
   //private data types 
   //Variables should be given descriptive names, unless they are very clearly just loop counters or the like. 
   //There should be comments associated with each variable declaration 
   //explaining how the variable fits into the algorithm, and including invariant information such as its legal range of values.
   string name; 
   int number;
};
#endif 