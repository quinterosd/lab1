//daniel quinteros
//summer1.cpp


#include<iostream>
#include<cstring>
#include<string>
#include<cctype>

using namespace std;

bool search (string);

int main() 
{
    bool flag=0;
    do
    {
      string str;
      cout << "Enter a word with duplicate letter to end the program" <<endl;
      cin >> str;
      cout << endl ;
      if (str[0] == 0)
      {
      cout << "no word or letter enter" << endl;
      break;
      }
      flag = search(str);
    }
    while(flag == false);
    return 0;
}

bool search (string str)
{
    int flag=0;
    int len = strlen(str.c_str());           //get length of word
    for (int i=0; i<len; i++) {      //check each letter one by one 
        if(str[i] == str[i+1]) {     //if the current letter is the 
        flag=1;                    //same as the next then flag=1
        cout << "true" << endl; 
        break;                       //and break loop
        }
    }
    if (flag == 0) 
        {
    cout << "false" << endl; 
        }
    return(flag);
};



