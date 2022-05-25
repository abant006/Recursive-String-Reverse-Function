#include <iostream>
#include <string>

using namespace std;


void flipString(string &s);

int main() {
   string line;
   cout << "Enter a sentence:" << endl;
   getline(cin, line);
   cout << endl;
   cout << line << endl;
   flipString(line);
   cout << line << endl;

   return 0;
}

//Implement the flipString function here
void flipString(string &s) {
   // make a copy of the string reference before using substr
   // can't pass substr as a parameter when the param is a reference to a string object
   string tempStr = s;
   // stores the front and back of the strings before removing them via substr()
   char fTemp = ' ';
   char bTemp = ' ';

   // base case is: if the parameter string's size is less than or equal to 0, then stop
   // changed the if to do the recursive call if the string's size is GREATER than 1
   // otherwise, we would have a conditional that does nothing
   if (s.size() > 1) {
      // work with the copy of the string reference parameter
      fTemp = tempStr[0];
      bTemp = tempStr[tempStr.size() - 1];

      // remove the first and last letters in the string
      tempStr = tempStr.substr(1, tempStr.size() - 2);
      flipString(tempStr); // recursive call

      // concatenate the string after the recursive call(s) are complete. Save it to the string reference
      // this essentially swaps the string as well
      s = bTemp + tempStr + fTemp;

      //cout << s << endl;
   } 
}


