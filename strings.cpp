#include <iostream>
#include <string> 
#include <sstream>

using namespace std;

class AllAboutSstream{
  // stringstream is class derived from iostream class.
  // stringstream helps us to deal with stream of strings by converting a given string(sentence) in to string of words and allows us to perform various operations on those.

  // str(): Gets and sets the string object’s content in the stream
  // clear(): Clears the stream
  // <<: Adds a new string to the StringStream object
  // >>: Reads the content from the StringStream object

  void operations(){
    string s = "My name is Gunavardhan Reddy";

    // converintg to stringstream object;
    stringstream ss(s);

    // converintg into list of strings
    vector<string> v;
    string sstr;
    while(ss >> sstr){
      v.push_back(sstr);
    }

    // printing the contents of the v;
    for(auto a:v) cout << a << " ";
    cout << endl;

    // stringstream allows us to perform type conversion very easily
    int n1 = 100;
    float n2 = 89.54;

    stringstream str_num;
    str_num << n1 << ", " << n2;

    int a;
    float b;
    string num;

    getline(str_num, num, ",") 
    a = stoi(num);
    
    getline(str_num, num, ",") 
    b = stof(num);

    cout << a << " " << b+1 << endl;

  }
}


