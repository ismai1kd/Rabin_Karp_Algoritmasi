#include <iostream>                   // Giriş ve çıkış işlemleri için gerekli kütüphane (cout, cin vs.)
#include <vector>                     // Dinamik dizi (vektör) yapısını kullanmak için gerekli kütüphane
using namespace std;                 // std:: öneki kullanmadan doğrudan isimlere erişmek için

vector<int> findPatternMatches(const string& text, const string& pattern, int prime) {
    if (pattern.empty()) {              // Eğer aranan desen boşsa
        return {};                      // Boş bir vektör döndür (eşleşme yok)
    }

    int n = text.length();              // Metnin uzunluğunu al
    int m = pattern.length();           // Desenin (aranan alt string) uzunluğunu al
    int d = 256;                        // Karakter kümesinin büyüklüğü (ASCII tablosu için genelde 256 kullanılır)
    int h = 1;                          // Hash hesaplaması için kullanılacak üs değeri (d^(m-1))
    int p = 0;                          // Desenin hash değeri
    int t = 0;                          // Metnin ilk pencere (substring) hash değeri
    vector<int> result;                // Eşleşen indeksleri tutacak sonuç vektörü

    // h = (d^(m-1)) % prime işlemi: Hash fonksiyonu için en yüksek basamağın katsayısını bul
    for (int i = 0; i < m - 1; i++) {
        h = (h * d) % prime;           // h her adımda d ile çarpılır ve asal sayıya göre mod alınır
    }

    // İlk pencerenin (ilk m karakterin) ve desenin hash değerini hesapla
    for (int i = 0; i < m; i++) {
        p = (d * p + pattern[i]) % prime;   // Desenin hash'ini hesapla
        t = (d * t + text[i]) % prime;      // Metnin ilk pencere hash'ini hesapla
    }

    // Metin üzerinde pencere kaydırarak arama yap
    for (int i = 0; i <= n - m; i++) {
        // Eğer hash değerleri eşitse, olası eşleşme vardır; karakter karakter kontrol et
        if (p == t) {
            bool match = true;             // Eşleşme olduğunu varsay
            for (int j = 0; j < m; j++) {
                if (text[i + j] != pattern[j]) {
                    match = false;         // Karakterlerden biri eşleşmiyorsa, eşleşme yoktur
                    break;                 // Döngüden çık
                }
            }
            if (match) {
                result.push_back(i);       // Gerçekten eşleşme varsa, eşleşmenin başladığı indexi ekle
            }
        }

        // Pencereyi sağa kaydır: yeni hash değeri hesapla (rolling hash)
        if (i < n - m) {
            // Önceki ilk karakterin etkisi çıkarılır, yeni karakter eklenir
            t = (d * (t - text[i] * h) + text[i + m]) % prime;
            if (t < 0) {
                t = t + prime;             // Negatif değerleri pozitif yapmak için prime eklenir
            }
        }
    }

    return result;                        // Elde edilen tüm eşleşme pozisyonlarını döndür
}
