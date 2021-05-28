#include <iostream>
#include "market.h"

using namespace std;

Market:: Market ()
{
  price = 0;
  code = 0;
  for (int i = 0; i < 20; i++){
    item[i] = ' ';
  }
}

Market::Market(int gin , int  c, char anun [])
{
  price = gin;
  code = c;
  for(int i = 0; i < 20; i++){
    item[i] = anun[i];
  }
}

void Market:: input()
{
  cout <<"enter the name \n ";
  
  cin.get();
  cin.getline(item ,20);
  cout << "enter price \n";
  cin >> price;
  cout <<"enter Barcode\n";
  cin >> code; 
  
  
}

void Market:: output()
{
  cout << "name:  ";
  for(int i = 0; i < 20; i++){
    cout <<item[i];
  }
  cout<<"\n";
  cout<<"Price  :"<<price<<endl;;
}

int Market:: get_code()
{ 
  return code;
}

int Market::get_price()
{
  return price;
}


bool Market::operator!=(Market & m)
{
  if(code !=m.code){
    return true;

  }return false;

}

Market & Market::operator=( Market & m)
{
  if(*this !=  m){
    code = m.code;
    price = m.price;
    for(int i = 0; i< 20; i++){
      item[i] = m.item[i];
    }

  }return *this;
}




