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
   string tempStr = "none";
   // stores the front and back of the strings before removing them via substr()
   char fTemp = ' ';
   char bTemp = ' ';

   // base case
   if (s.size() <= 1) {
      s = s;
   } else {
      fTemp = s.front();
      bTemp = s.back();
      tempStr = s.substr(1, s.size() - 2);
      flipString(tempStr);
      s = bTemp + tempStr + fTemp;
      cout << s << endl;
   }
}


