#include <string>
#include <iostream>
#include "hesap.h"
#include "ogrenciBilgileri.h"
#include "ogrenciDegerlendir.h"
#pragma once

using namespace std;
int main()
{
	ogrenciDegerlendir ogrenci1;
	ogrenci1.ogrAdi = "Aysen";
	ogrenci1.ogrSoyadi = "Cakir";
	ogrenci1.ogrNo = 1056;
	ogrenci1.vizeNotu = 85;
	ogrenci1.finalNotu = 95;

	cout << "Adi:" << ogrenci1.ogrAdi << "\n";
	cout << "Soyadi:" << ogrenci1.ogrSoyadi << "\n";
	cout << "Numarasi:" << ogrenci1.ogrNo << "\n";
	cout << "Vize Notu:" << ogrenci1.vizeNotu << "\n";
	cout << "Final Notu:" << ogrenci1.finalNotu << "\n";
	
	cout << "Gecme Durumu:" << ogrenci1.gecmeDurumu(85,95);
	return 0;

}