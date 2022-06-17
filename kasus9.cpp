#include <iostream>

using namespace std;

class perpus{
	public:
		void input();
		void proses();
		void output();
		
	private:
		string array [45];
		string jdl[10][3];
		int banyak,n,t;
};

void perpus :: input(){
	cout << "Masukkan  jumlah Buku Yang ingin Di data : (paling banyak 15 )";
	cin >> banyak;
	getchar();
	t = banyak * 3;
	for(int i=0; i < t; i++){
		cout << "Masukkan Jenis Buku : ";
		getline(cin,array[i]);
		i++;
		cout<<endl;
		cout << "Judul Buku : ";
		getline(cin,array[i]);
		i++;
		cout<<endl;
		cout << "Masukan Nama Penulis : ";
		getline(cin,array[i]);
		cout << endl;
		
	}
}

void perpus :: proses(){
	n = 0;
	for(int i=0; i <banyak; i++){
		for (int j=0; j < 3; j++){
			jdl[i][j] = array[n];
			n++;
		}
	}
}

void perpus :: output(){
	cout << "========================================================"<<endl;
	cout << "Jenis Buku |" << "   Judul  |" << "     Nama Penullis 	 |"<<endl;
	cout << "========================================================"<<endl;
	for(int i =0 ;i <banyak;i++){
		for(int j =0; j < 3; j++){
			cout << jdl[i][j] << "        ";
			
		}
		cout << endl;
	}
}

int main(){
	perpus p;
	p.input();
	p.proses();
	p.output();
}
