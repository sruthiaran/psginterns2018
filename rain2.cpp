#include<iostream>
using namespace std;

class rain
{
    float measure1;
    string date1,pincode1;

    rain(float measure, string date, string pincode)
    {
    measure1=measure;
    date1=date;
    pincode1=pincode;
    }
};

class rainfallcalculator
{
    rain r[5];static int i;
    void capturerain(float measure, string date, string pincode)
    {
        r[i++]=new rain(measure,date,pincode);
    }
     rain getRegionWithMaxRainfall(string fromDate, string toDate)
     {
         int maxdate=0;rain r1;
         for(int j=0;j<i;j++)
         {

             if((r[j].date>=fromDate)&&(r[j].date<=toDate))
             {
                 if(maxdate<r[j].date)
                 {
                     maxdate=r[j].date;
                     r1=r[j];
                 }
             }
         }
         return r1;
     }
      rain getRegionWithMinRainfall(string fromDate, string toDate)
      {
          int mindate=0;rain r1;
         for(int j=0;j<i;j++)
         {

             if((r[j].date>=fromDate)&&(r[j].date<=toDate))
             {
                 if(mindate>r[j].date)
                 {
                     mindate=r[j].date;
                     r1=r[j];
                 }
             }
         }
         return r1;
      }
      float getAverageRainfall(string fromDate, string fromDate)
      {

          float avg=0;
         for(int j=0;j<i;j++)
         {

             if((r[j].date>=fromDate)&&(r[j].date<=toDate))
             {
                for(int k=0;k<5;k++)
                {
                    avg=avg+r[k].measure;
                }
             }
         }
         float tot=avg/5;
         return tot;
};
int rainfallcalculator::i = 0;
int main()
{
    float measure;
    string date,pincode;
   for(int i=0;i<5;i++)
   {
       rainfallcalculator r[5];

       for(int i=0;i<5;i++)
       {
           r[i].capturerain(measure,date,pincode);
       }
       for
   }

}
