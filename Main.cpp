/*author:@andrafisha,Mulai dibuat di Hari Sabtu yang cerah tanggal 28 Mei 2022,Dengan Bahasa C++*/
#include <iostream>
#include <math.h>
#include <stdlib.h>
using namespace std;

int main(){
char userinput,aritmatika,perbandingan,konfirmasi;
float angka1,angka2;
cout << "===KALKULATOR MATEMATIKA SEDERHANA==="<<endl;
cout << "a.Kalkulator Sederhana"<<endl;
cout << "b.Membandingkan 2 Angka"<<endl;
cout << "c.Hitung Luas Segitiga"<<endl;
cout << "d.Operasi perpangkatan[NEW]"<<endl;
cout << "e.Hitung akar [NEW]"<<endl;
cout << "f.Contact us"<<endl;
cout << "g.About me"<<endl;
cout << "Masukkan pilihan kamu(a/b/c/d/e/f/g):";
cin >> userinput;
switch (userinput){
//Kalkulator sederhana
case 'a' :
cout << "Masukkan angka pertama:";
cin >> angka1;
cout << "Masukkan operator aritmatikanya (+,-,*,/):";
cin >> aritmatika;
cout << "Masukkan angka kedua:";
cin >> angka2;
if (aritmatika=='+'){
cout << "Hasil dari" << angka1 << " + " <<angka2 << " adalah:"<<(angka1+angka2);
}
else if(aritmatika=='-'){
cout << "Hasil dari " << angka1 << "-" <<angka2 << " adalah:"<<(angka1-angka2);
}
else if(aritmatika=='*' || aritmatika=='x'){
cout << "Hasil dari " << angka1 << "x" <<angka2 << " adalah:"<<(angka1*angka2);
}
else if(aritmatika=='/' || aritmatika==':'){
cout << "Hasil dari " << angka1 << ":" <<angka2 << " adalah:"<<(angka1/angka2);
}
else{
	cout << "Operator yang anda masukkan tidak ditemukan";
} break;
//membandingkan 2 angka
case 'b' :
cout << "Masukkan angka pertama:";
cin >> angka1;
cout << "Masukkan operator perbandingannya (<,>):";
cin >> perbandingan;
cout << "Masukkan angka kedua:";
cin >> angka2;
if(perbandingan=='<'){
cout << angka1 << " lebih kecil dari "<< angka2;
}
else if(perbandingan=='>'){
cout << angka1 << " lebih besar dari "<< angka2;
}
else{
	cout << "Operator yang anda masukkan tidak ditemukan";
}  break;
case 'c' :
cout << "Masukkan Alas:";
cin >> angka1;
cout << "Masukkan operatornya(*/x):";
cin >> aritmatika;
cout << "Masukkan Tinggi:";
cin >> angka2;
if (aritmatika=='*' || aritmatika=='x'){
cout << "Rumus Luas=alasxtinggi :2)"<< endl;
cout << "Luas:" << (angka1*angka2/2) << "cm2";
}
else{
cout << "Operator yang anda masukkan tidak ditemukan";
}  break;
//Perpangkatan 
case 'd' :
cout << "Masukkan bilangan:";
cin >>angka1;
cout << "pangkat berapa?pangkat...:";
cin >> angka2;
cout << "ketik y/n untuk melanjutkan:";
cin >> konfirmasi;
if(konfirmasi=='y'){
cout << "hasil dari " << angka1 << " pangkat " << angka2 <<" adalah:"<<(pow(angka1,angka2));
}
else {
	cout << "Program selesai";
} break;

case 'e' :
cout << "Masukkan angka:";
cin >>  angka1;
cout << "ketik y/n untuk melanjutkan:";
cin >>  konfirmasi;
if(konfirmasi=='y'){
	cout << "akar dari" << angka1 << "adalah"<<(sqrt(angka1));
}
else {
	cout << "Program selesai";
} break;

case 'f' :
	cout << "###########Contact:#########"<<endl;
	cout << "Instagram:https://www.instagram.com/andrafisha"<<endl;
	cout << "Email:projeksederhanadev@gmail.com"<<endl;
	cout << "Github:[coming soon]"<<endl;
	cout << "Netlify:[coming soon]"<<endl;
break;

case 'g' :
cout << "Cuma seorang bocah remaja yang kadang iseng iseng bikin program yang saya pun gatau artinya"<<endl;
break;

default :
cout << "ERROR 404:Perintah yang anda masukkan tidak ditemukan.";


   cin.ignore();
   cin.ignore();

	return 0;

}
}
