#include<iostream.h>
using namespace std;

interface invite
{
    void searchnearby();
}
class trip
{
    string location,bus;
    int cost;
};
class students:trip implements invite
{
    students()
    {

    }
    students(string name,string place, string date, float cost)
    {

    }

};
