#include<iostream>
using namespace std;
#include<map>
#include <sstream>
#include<string.h>

bool isNumber(string s)                                 //finds whether given input is  string
{
    for (int i = 0; i < s.length(); i++)
        if (isdigit(s[i]) == false)
            return false;

    return true;
}
class str
{
    int x,g;

    map<string, string>::iterator it ;
    map<string, string>::iterator it1 ;

   string obfuscate(string input, int charOffset, map<string, string> wordMap)           //function to string exchange
   {
        if (isNumber(input))
        {
             //stringstream con(s);

             x = std::stoi(input);
             g=x*charOffset;

             stringstream ss;
              ss << g;
             string str = ss.str();

             return str;
        }
        else
        {
            it = wordMap.find("input");

            if(it != wordMap.end())
        return it->second ;
   /* else
        cout << "Key-value pair present : "
          << it->first << "->" << it->second ; */
        }

   }


};
int main()
{
     map<string,string> wordMap;
     wordMap.insert({hai,hello});
      wordMap.insert({girl,lady});
      wordMap.insert({boy,gentleman});
      string s;
      cin>>s;
   str s=new str();
   s.obfuscate(s,5,map<string,string> wordMap);

}
