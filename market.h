#pragma once 
#include <string>
class Market
{
 public :
 Market ();
 Market(int gin   , int c   , char anun[] );

 public:
 void input();
 void output();

 public:
 int get_code();
 int get_price();
 
 public:
 Market & operator=( Market &);
 bool operator!=(Market &);


 private:
 int price;
 int  code;
 char item[20];
};