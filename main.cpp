
#include <iostream>
using namespace std;

int main() 
{

       string makanan [5]={"soto","rawon","pecel"."teh","kopi"};
       int   harga [5]={15000,20000,10000,3000.5000};
       int i;
       int porsi[5];
       string ulang;
    do {
        int total= 0;
    for(i=0;i<5;i++)
    {
      cout<<"makanan" <<endl;
      cout<<makanan[i] <<endl;
      cout<<"harga" <<endl;
      cout<<harga[i]<<endl;
      cout<<"porsi : ";
      cin>>porsi[i];
        total=harga[i]*porsi[i];
      cout<<"************_____________************" <<endl;
    }
    cout<<"total pesanan:"<<total <<endl;
    cout<<total<<endl;
    cout<<"anda mau mengulang. tekan y atau Y";
    cin>> ulang;
    cout<< endl;
    
    }while(ulang=="y" || ulang=="Y");
    return 0;
    system("pause");
}
