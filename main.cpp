//String Operations for String Library #include <string>
//Bowlby, David: Dr_T COSC 1437-58001
//List and Examples of String Library Methods/Functions ******
#include <iostream>
#include <string>

using namespace std;



int main() 
{
  string str1("first string"); //Initialized "str1" is the object of "string"
  cout << str1 << endl; //Display to see how it works
  
  string str2(str1); // Initialized a new string based upon another string.
  cout << str2 << endl; //Display to see how it works
  
  string str3(5, '#'); //print the '#' char to screen 5 times  
  cout << str3 << endl; //Display to see how it works

  string str4(str1, 6, 6); //Begin at index 6, 7th element
  cout << str4 << endl; //print from element 7 + 6 chars in str1 

  //String Initalization by "Interator" part of another string ....
  string str5(str2.begin(), str2.end() + 5); //ADD 5 Blank Spaces at the end
  cout << str2.length() << endl; //12 intial chars in str2
  cout <<  str5.length() << endl; //now 17 char in str5
  cout << str5 << endl;

  string str6 = str4; //Assigning Value to str6 before clearing str4 

  cout << str4.length() << " the value before CLEAR" << endl; //show before
  str4.clear(); //delete all chars in the string 
  cout << str4.length() << " is the result of CLEAR " << endl; //show after

  char ch = str6.at(2); //ch = str6[2];
  cout << ch << " is the value of: ch " << endl;

  char chf = str6.front(); //chf = str6[0]; same as this
  char chb = str6.back(); //chf = str6[str6.length() - 1]; same as this
  cout << chf << " is the value of: chf " << endl;
  cout << chb << " is the value of: chb " <<  endl;
  
  //add an argument at the end of the string
  str6.append(" extension"); //str6 += " extension";

  str4.append(str6, 0, 6);//(object, start, end)
  cout << str4 << endl; //str4 has the first 6 chars of str6
  cout << str6 << endl; 


  
  
  
  
  
  return 0;
}