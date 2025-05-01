#include <iostream>                                      // Giriş-çıkış işlemleri için gerekli (cout kullanımı için)
#include <cassert>                                       // assert makrosunu kullanmak için (test doğrulama aracı)
#include <vector>                                        // vector veri tipini kullanmak için
#include "../Kod_Dosyasi/Rabin_Karp_Algoritmasi.h"       // Rabin-Karp algoritmasının tanımlı olduğu başlık dosyasını dahil eder

using namespace std;                                     // std:: yazmadan string, cout vb. kullanmak için

// Test 1: Basit eşleşme
void test1() {
    string text1 = "GEEKSFORGEEKS";                      // Aranacak metin
    string pattern1 = "GEEK";                            // Aranacak desen
    vector<int> expected1 = {0, 8};                      // Desenin beklendiği başlangıç indeksleri
    vector<int> result1 = findPatternMatches(text1, pattern1, 101);  // Rabin-Karp fonksiyonu ile eşleşme bulunur
    assert(result1 == expected1);                        // Beklenen sonuç ile bulunan sonuç karşılaştırılır (eşitse sorun yok)
    cout << "Test 1 başarıyla geçti: Basit eşleşme" << endl; // Testin geçtiğini ekrana yazdır
}

// Test 2: Tek eşleşme
void test2() {
    string text2 = "HELLO_WORLD";                        // Aranacak metin
    string pattern2 = "WORLD";                           // Aranacak desen
    vector<int> expected2 = {6};                         // Desenin beklendiği tek başlangıç indeksi
    vector<int> result2 = findPatternMatches(text2, pattern2, 101);  // Eşleşmeleri bul
    assert(result2 == expected2);                        // Doğruluğu kontrol et
    cout << "Test 2 başarıyla geçti: Tek eşleşme" << endl; // Testin geçtiğini yazdır
}

// Test 3: Eşleşme yok
void test3() {
    string text3 = "ABCDE";                              // Aranacak metin
    string pattern3 = "XYZ";                             // Eşleşmeyecek bir desen
    vector<int> expected3 = {};                          // Beklenen: hiç eşleşme yok
    vector<int> result3 = findPatternMatches(text3, pattern3, 101); // Eşleşmeleri bul
    assert(result3 == expected3);                        // Boş vektörle karşılaştır
    cout << "Test 3 başarıyla geçti: Eşleşme yok" << endl; // Test geçti mesajı
}

// Test 4: Çakışan hash değerleri (ama farklı karakterler değil, aynı karakterler olduğu için geçerli eşleşmeler)
void test4() {
    string text4 = "AAAAAA";                             // Tekrarlayan karakterlerden oluşan metin
    string pattern4 = "AAA";                             // Desen de aynı karakterlerden oluşuyor
    vector<int> expected4 = {0, 1, 2, 3};                 // Eşleşmelerin başladığı tüm geçerli indeksler
    vector<int> result4 = findPatternMatches(text4, pattern4, 101); // Eşleşmeleri bul
    assert(result4 == expected4);                        // Beklenenle karşılaştır
    cout << "Test 4 başarıyla geçti: Çakışan hash değerleri" << endl; // Test geçti mesajı
}

// Test 5: Boş metin
void test5() {
    string text5 = "";                                   // Boş metin
    string pattern5 = "ANY";                             // Herhangi bir desen
    vector<int> expected5 = {};                          // Boş metinde desen olamaz, beklenen boş vektör
    vector<int> result5 = findPatternMatches(text5, pattern5, 101); // Sonuçları bul
    assert(result5 == expected5);                        // Doğruluğu kontrol et
    cout << "Test 5 başarıyla geçti: Boş metin" << endl; // Mesaj yazdır
}

// Test 6: Boş desen
void test6() {
    string text6 = "NONEMPTY";                           // Metin boş değil
    string pattern6 = "";                                // Desen boş
    vector<int> expected6 = {};                          // Boş desen aramak mantıksızdır, sonuç boş vektör
    vector<int> result6 = findPatternMatches(text6, pattern6, 101); // Eşleşmeleri bul
    assert(result6 == expected6);                        // Boş vektörle karşılaştır
    cout << "Test 6 başarıyla geçti: Boş desen" << endl; // Sonucu yazdır
}

int main() {
    test1();                                             // Test 1'i çalıştır
    test2();                                             // Test 2'yi çalıştır
    test3();                                             // Test 3'ü çalıştır
    test4();                                             // Test 4'ü çalıştır
    test5();                                             // Test 5'i çalıştır
    test6();                                             // Test 6'yı çalıştır

    return 0;                                            // Programı başarılı şekilde sonlandır
}
