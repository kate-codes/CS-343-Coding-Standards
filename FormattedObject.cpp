//file name 
//author name
//date
//description of the purpose of the code it contains

//use "#include <vector>" when accessing C++ STL instead of "#include <vector.h>" 
#include "FormattedObject.h"


FormattedObject::FormattedObject()
{
   this->name  = "Nobody"; //odysseus https://en.wikipedia.org/wiki/Outis
   this->number = -1; 
}

FormattedObject::FormattedObject(const int& inputNumber, const string& inputName)
{
   if (!this->setNumber(inputNumber) || !this->setName(inputName)) //What action does this block perform? 
   {
      cerr << "Invalid argument: " << endl;
   }
}

FormattedObject::~FormattedObject()
{
   //no need for anything here because no dynamic memory allocation tools were used in this program
}

string FormattedObject::getName() const
{
   return this->name;
}

int FormattedObject::getNumber() const
{
   return this->number;
}

bool FormattedObject::setNumber(const int& inputNumber)
{
   if (inputNumber > 0)
   {
      this->number = inputNumber;
      return true;
   }
   else
   {
      return false;
   }
}

bool FormattedObject::setName(const string& inputName)
{
   this->name = inputName;
   return true;
}

