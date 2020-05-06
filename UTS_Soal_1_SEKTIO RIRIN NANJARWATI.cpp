#include<iostream>
using namespace std;


void tampil(int ukuran){
	
	
	if((ukuran>=0)&&(ukuran<=25))
	{
	cout<<ukuran<<" adalah ukuran untuk anak-anak"<<endl;
			
	}
	else if((ukuran>=26)&&(ukuran<=35))
	
	{
	cout<<ukuran<<" adalah ukuran ukuran sepatu untuk remaja"<<endl;
	
	}
	else if((ukuran>=36)&&(ukuran<=45))
	{
	cout<<ukuran<<" adalah ukuran sepatu untuk dewasa"<<endl;
		
	}
	else
	{
	cout<<"tidak cocok"<<endl;
	
	}
} 



int main()

{
int r;
char ulang;

	awal:
	cout<<"masukkan ukuran sepatu :";
	cin>>r;
	
	tampil(r);
	
	cout<<"Apakah ingin mengulang program lagi (y/t) ?  ";
    cin>>ulang;
    cout<<endl;
    if(ulang=='Y'||ulang=='y'){
        goto awal;
    }
    if(ulang=='T'||ulang=='t'){
       cout<< "program berhenti,terima kasih"<<endl;
    }
   
	
	system("pause");
	return 0;
}

