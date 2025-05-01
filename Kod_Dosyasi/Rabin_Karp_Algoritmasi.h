#ifndef RABIN_KARP_ALGORITMASI_H
#define RABIN_KARP_ALGORITMASI_H

#include <string>
#include <vector>
using namespace std;

// Rabin-Karp algoritması ile desen arama (çıktıyı terminalde gösterir)
void rabinKarpSearch(const string& text, const string& pattern, int prime);

// Desen eşleşmelerini döndüren fonksiyon
vector<int> findPatternMatches(const string& text, const string& pattern, int prime);

#endif // RABIN_KARP_ALGORITMASI_H