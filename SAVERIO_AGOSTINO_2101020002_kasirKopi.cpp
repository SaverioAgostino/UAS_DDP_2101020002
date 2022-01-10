/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;



// NAMA: SAVERIO AGOSTINO
// NIM : 2101020002
// PRODI: TEKNIK INFORMATIKA


int main(){
	char nama[100], menu[100], back;
	int jumlah, minuman, minum, total, bayar, kurang, bonus, pajak, kembalian, 
		harga[5]={15500, 25000, 37500, 34000, 28500}, i=0;
	bool saldo;
    int diskon = 20000;
    
	do{
		
		cout<<"================================ MoonBucks =============================="<<endl;
		cout<<"========================== Tiada Hari Tanpa Kopi ========================"<<endl;
		cout<<"==================== Moonbucks better than Starbucks ===================="<<endl;
		cout<<endl;
		cout<<"Masukkan Nama Anda : " ; cin >> nama; 
		cout<<"Pilihan kopi yang tersedia---"<<endl;
		cout<<"--------------------------------------------------------------------------"<<endl;
		cout<<"|	[1] Caffe Americano        = Rp 15.500                           |"   <<endl;
		cout<<"|	[2] Caramel Macchiato      = RP 25.000                           |"   <<endl;
		cout<<"|	[3] Caffe Mocha            = RP 37.500                           |"   <<endl;
		cout<<"|	[4] Caffe Latte            = Rp 34.000                           |"   <<endl;
		cout<<"|	[5] Cold Brew              = Rp 28.500                           |"   <<endl;
		cout<<"--------------------------------------------------------------------------"<<endl;
		
		cout<<"	       (Masukkan Menu Kopi yang diinginkan berdasarkan Nomor)"<<endl;
		cout<<" Silahkan Pilih Kopi anda : "; cin >> minuman;
		
		switch(minuman){
			case 1:
			    cout << "Anda memilih Caffe Americano " << endl;
				break;
			case 2:
				cout << "Anda memilih Caramel Macchiato" << endl;
				i=1;
				break;
			case 3:
				cout << "Anda memilih Caffe Mocha" << endl;
				i=2;
				break;
			case 4:
		    	cout << "Anda memilih Caffe Latte" << endl;
				i=3;
				break;
			case 5:
		    	cout << "Anda memilih Cold Brew " << endl;
				i=4;
				break;
			default:
				cout << "Pilihan menu yang anda pilih tidak tersedia..." << endl;
				goto ulang;
		}
	

		
		cout<<endl;
		cout<<"Jumlah Kopi yang dibeli : ";cin>> jumlah;
		
	
		minum = jumlah * harga[i];
		pajak = minum * 0.10; //pajak restoran 10%
		total = pajak + minum;
		cout << endl;
		cout << "-------------------------------------------------------" << endl;
		cout << "|  	               MoonBucks                       |" << endl;
		cout << "-------------------------------------------------------" << endl;
		cout << "        Nama Pemesan          : "	<< nama     <<endl;
		
		if(minuman == 1){
		    cout << "        Menu Kopi             : Caffe Americano"         <<endl;
		}if(minuman == 2){
		    cout << "        Menu Kopi             : Caramel Macchiato"       <<endl;
		}if(minuman == 3){
		    cout << "        Menu Kopi             : Caffe Mocha"             <<endl;
		}if(minuman == 4){
		    cout << "        Menu Kopi             : Caffe Latte"             <<endl;
		}if(minuman == 5){
		    cout << "        Menu Kopi             : Cold Brew"               <<endl;
		}
		
		cout << "        Jumlah Kopi           : "	<< jumlah   <<" cup" <<endl;
		cout << "        Harga Kopi            : "	<< harga[i] << " * "   << jumlah << endl;
		cout << "        Pajak Restaurant      : "	<< pajak    <<endl;	
		cout << "        Total Pembayaran      : Rp " << total    <<endl;
		
		if(jumlah>=4){
			bonus = total - diskon;
			total = bonus;
			cout << endl;
			cout << "Anda mendapatkan diskon Potongan Harga : Rp " << diskon << endl;
			cout << "Total Pembayaran Setelah diskon  : Rp "<< total << endl;
		}
		
		cout << "--------------------------------------------" << endl;
		cout << "Silahkan bayar disini 		 : Rp."; 		cin>>bayar;
		cout << endl;
				
		
		while (saldo = bayar < total){
			cout << "Saldo anda kurang, Silahkan bayar lagi : Rp. "; cin>>kurang;
			bayar+=kurang;
		}
		
		kembalian=bayar-total;
		cout << "Uang yang anda bayar              Rp. " << bayar<<endl;
		cout << "Uang kembalian                    Rp. " << kembalian <<endl;
		cout << "------------------------------------------------------------"<<endl;
		
		ulang:
			cout << "			[Y = ya / T = tidak]"<<endl;
			cout << "		Apakah anda ingin memesan lagi ? [Y/T]  =  "; cin>>back;
		}while (back=='Y'||back=='y');
		cout << endl;
		cout << "		Terima kasih telah Memesan Kopi di MoonBucks"<<endl;	
		cout << "			      Selamat Menikmati"<<endl;
		
		return 0;
}