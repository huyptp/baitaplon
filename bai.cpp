﻿#include <iostream >
#include<cmath>
#include <cstdlib>
#include <ctime>
#include <string>
using namespace std;

int Random(  int min, int  max) 
{
    return min + (int )(rand() * (max - min + 1.0) / (1.0 + RAND_MAX));
}
string taobiensoxe()
{
   // tạo chuỗi   trung gian 
   const string chucai = "QWERTYUIOPASDFGHJKLZXCVBNM1234567890";
   string bienso;
   //thay đổi giá trị ngẫu nhiên của hàm random
   srand((unsigned int)time(NULL));
   //tạo giá trị cho chuỗi 
   for (int i = 0; i < 8; i++)
   {
       if (i != 2)
       {
           bienso += chucai[Random(26, 35)];
       }
       else
       {
           bienso += chucai[Random(0, 25)];
       }
   }
   return bienso;
}
void time()
{
    {
        // tra ve date/time hien tai dua tren system hien tai
        time_t hientai = time(0);

        // chuyen doi hientai thanh dang chuoi
        char* dt = ctime(&hientai);

        cout << "Date va Time dang local la: " << dt << endl;

        // chuyen doi hientai thanh dang tm struct cho UTC
        tm* gmtm = gmtime(&hientai);
        dt = asctime(gmtm);
        cout << "UTC date va time la: " << dt << endl;
    }
}

int main()
{
    
    time();
    return 0;
}