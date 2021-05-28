#include <iostream>
#include <cctype>
using namespace std;
int main()
{
 const float GST=0.16,discount=0.10;
 int Pizza= 200,Samosa=20,Dosa=50,Tea=10,Coffee=15,Poha=20,Sandwitch=50;
 float accountBalance=0,totalBill=0,finalBill=0,currentBill=0;
 char menu,membership,answer;
 cout<<endl<<endl<<"************** THE RESTAURANT ***************"<<endl<<endl;
 cout<<"Enter Account Balance: ";
 cin>>accountBalance;
 cout<<endl<<"Do you have membership in our restaurant (y/n): ";
 cin>>membership;
 do
 {
  bool hasBalance=false;
  cout<<endl<<"=============Menu============="<<endl
   <<"1. Press '1' to Buy Pizza"<<endl
   <<"2. Press '2' to Buy Samosa"<<endl
   <<"3. Press '3' to Buy Dosa"<<endl
   <<"4. Press '4' to Buy Tea"<<endl
   <<"5. Press '5' to Buy Coffee"<<endl
   <<"6. Press '6' to Buy Poha"<<endl
   <<"7. Press '7' to Buy Sandwitch"<<endl
   <<endl<<"Please select Items from the menu: ";
  cin>>menu;
  switch(menu)
  {
  case '1':
   if (accountBalance>=(Pizza+Pizza*GST))
   {
    totalBill=Pizza;
    hasBalance=true;
   }
   break;
  case '2':
   if (accountBalance>=(Samosa+Samosa*GST))
   {
    totalBill=Samosa;
    hasBalance=true;
   }
   break;
  case '3':
   if (accountBalance>=(Dosa+Dosa*GST))
   {
    totalBill=Dosa;
    hasBalance=true;
   }
   break;
  case '4':
   if (accountBalance>=(Tea+Tea*GST))
   {
    totalBill=Tea;
    hasBalance=true;
   }
   break;
  case '5':
   if (accountBalance>=(Coffee+Coffee*GST))
   {
    totalBill=Coffee;
    hasBalance=true;
   }
   break;
  case '6':
    if (accountBalance>=(Poha+Poha*GST))
    {
        totalBill=Poha;
        hasBalance=true;
    }
    break;
  case '7':
    if(accountBalance>=(Sandwitch+Sandwitch*GST))
    {
        totalBill=Sandwitch;
        hasBalance=true;
    }
    break;
  default:
   cout<<endl<<"You entered a wrong number"<<endl;
  }
  if(hasBalance==true)
  {
   if (tolower(membership)=='y')
   {
    finalBill+=totalBill+(totalBill*GST)-(totalBill*discount);
    currentBill=totalBill+(totalBill*GST)-(totalBill*discount);
   }
   else
   {
    finalBill+=totalBill+(totalBill*GST);
    currentBill=totalBill+(totalBill*GST);
   }
   accountBalance-=currentBill;
   cout<<endl<<"Final Bill = "<<finalBill<<endl;
   cout<<endl<<"Remaining Balance = "<<accountBalance<<endl;
  }
  else
  {
   cout<<endl<<"You don't have Sufficent Money"<<endl;
   hasBalance=false;
  }
  cout<<endl<<"Do you want to continue (y/n): ";
  cin>>answer;
 }while (tolower(answer)=='y');
cout<<endl<<"Your Final Bill is = "<<finalBill<<endl;
cout<<endl<<"Remaining Balance = "<<accountBalance<<endl;
return 0;
}
