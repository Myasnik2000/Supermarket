#include <iostream>
#include "market.h"
#ifdef __cplusplus__
  #include <cstdlib>
#else
  #include <stdlib.h>
#endif

int count = 0;
int count1 = 0;
Market obj[100];
Market obj1[100];

using namespace std;

void Owner();
void home();
void Client();

int  main()
{
  home();
  
}

void home()
{
  cout <<"WELCOME TO OUR SUPERMARKET \n";
  cout <<"Choose command \n";
  cout <<"1. Owner \n";
  cout <<"2. Client\n";
  int x ;
  cout <<"Enter command  ";
  cin >>x;
  if( x == 1){
    if (system("CLS")) system("clear");
    Owner();
  }
  else if(x == 2){
    if (system("CLS")) system("clear");
    Client();
  }
  else{
    if (system("CLS")) system("clear");
    cout <<"you enter wrong command \n";
    home();
  }
  
}

void Owner()
{
  Market a;
  a.input();
  obj[count++] = a;
  cout <<"You're successfully add items \n";
  cout <<"If you want to  continue add items press yes \n";
  cout <<"1.Yes\n";
  cout <<"2.No\n";

  int x;
  cin >> x;
  if(x == 1){
  if (system("CLS")) system("clear");
   Owner();
  }
  else if(x == 2){
    if (system("CLS")) system("clear");
    home();
  }
   
}

void Client()
{
  int c;
  cout <<"enter Barcode\n";
  cin >> c;
  for (int i = 0; i < 100 ;i++){
    if (obj[i].get_code() == c){
      obj[i].output();
      obj1[count1++] = obj[i];
    }
  }
  int sum = 0;
  for (int i = 0; i < 100; i++ ){
   sum += obj1[i].get_price();
  }

 cout <<"You have to pay  "<<sum<<endl;
  
 cout <<"Your're successfully search item \n";
 cout <<"If you want to  continue shopping  press yes \n";
 cout <<"1.Yes\n";
 cout <<"2.No\n";
  int y;
 cin >>y;
 if(y == 1){
 if (system("CLS")) system("clear");
 Client();
  }else if(y == 2){
    if (system("CLS")) system("clear");
    home();
  }
}


 
