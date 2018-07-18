#include <iostream>

using namespace std;
class segi
{
    protected:
        int alas, tinggi, sisi;
    public:
           
        void set (){
            alas; tinggi;
            cout<<"Masukkan Alas   : ";
            cin>> alas;
            cout<<"Masukkan Tinggi : ";
            cin>> tinggi;
        }
		
		void kotak(){
			sisi;
			cout<<"Masukkan Sisi	: ";
			cin>> sisi;
		}
};

class cetak{
    public:
        void output (int i){
            cout << i << endl;
        }
};

class Persegi: public segi, public cetak{
    public:
        int hit (){
        return (sisi * sisi);
        }
};
  
class Segitiga: public segi, public cetak{
    public:
        int hit (){
        return (alas * tinggi / 2);
        }
};

int main (){
	int pil;
	char validation;
	
	atas:
	cout<<"=======Program Mencari Luas Bentuk======="<<endl;
	cout<<"1. Segitiga"<<endl;
	cout<<"2. Persegi"<<endl;
	cout<<"Masukkan Pilihan  : "; cin>>pil;
	switch(pil)
	{
		case 1:
			Segitiga segi3;
			segi3.set ();
			cout<<"Luas segitiga   : ";
			segi3.output (segi3.hit());
			cout<<endl;
		break;
		
		case 2:
			Persegi segi4;
			segi4.kotak();
			cout<<"Luas persegi    : ";
			segi4.output (segi4.hit());
			cout<<endl;
		break;
	}
	ini:
	cout << "[Y/T] : ";cin>>validation;
if(validation == 'Y' || validation =='y'){
	goto atas;
}
else if(validation == 'T' || validation =='t'){
}
else{
	cout<<"Salah Input !"<<endl;
	goto ini;
}

}
