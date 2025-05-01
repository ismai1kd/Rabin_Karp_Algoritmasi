#ifndef RABIN_KARP_ALGORITMASI_H       // Eğer RABIN_KARP_ALGORITMASI_H tanımlı değilse bu dosyayı dahil et
#define RABIN_KARP_ALGORITMASI_H       // RABIN_KARP_ALGORITMASI_H makrosunu tanımla (tekrar eklemeyi önlemek için)

// Gerekli kütüphaneleri dahil et
#include <string>                      // std::string veri tipini kullanabilmek için gerekli
#include <vector>                      // std::vector (dinamik dizi) kullanımı için gerekli
using namespace std;                   // std:: önekini kullanmadan doğrudan isimleri kullanmak için

// Rabin-Karp algoritması ile desen arama fonksiyonu bildirimi
// Bu fonksiyon, eşleşen konumları terminale yazdırır ama değer döndürmez
void rabinKarpSearch(const string& text, const string& pattern, int prime);

// Desen eşleşmelerini bularak bir vektör olarak döndüren fonksiyon bildirimi
// Bu fonksiyon, eşleşmelerin başlangıç indekslerini bir vector<int> olarak döndürür
vector<int> findPatternMatches(const string& text, const string& pattern, int prime);

#endif // RABIN_KARP_ALGORITMASI_H      // Dosya tanımını sonlandır (header guard'ın bitiş noktası)
