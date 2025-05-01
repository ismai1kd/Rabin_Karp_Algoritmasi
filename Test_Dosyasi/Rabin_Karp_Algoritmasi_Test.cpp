#include <iostream>
#include <cassert>
#include <vector>
#include "../Kod_Dosyasi/Rabin_Karp_Algoritmasi.h" // Kod dosyasına giden doğru yol

using namespace std;

// Test 1: Basit eşleşme
void test1() {
    string text1 = "GEEKSFORGEEKS";
    string pattern1 = "GEEK";
    vector<int> expected1 = {0, 8};
    vector<int> result1 = findPatternMatches(text1, pattern1, 101);
    assert(result1 == expected1);
    cout << "Test 1 başarıyla geçti: Basit eşleşme" << endl;
}

// Test 2: Tek eşleşme
void test2() {
    string text2 = "HELLO_WORLD";
    string pattern2 = "WORLD";
    vector<int> expected2 = {6};
    vector<int> result2 = findPatternMatches(text2, pattern2, 101);
    assert(result2 == expected2);
    cout << "Test 2 başarıyla geçti: Tek eşleşme" << endl;
}

// Test 3: Eşleşme yok
void test3() {
    string text3 = "ABCDE";
    string pattern3 = "XYZ";
    vector<int> expected3 = {};
    vector<int> result3 = findPatternMatches(text3, pattern3, 101);
    assert(result3 == expected3);
    cout << "Test 3 başarıyla geçti: Eşleşme yok" << endl;
}

// Test 4: Çakışan hash değerleri
void test4() {
    string text4 = "AAAAAA";
    string pattern4 = "AAA";
    vector<int> expected4 = {0, 1, 2, 3};
    vector<int> result4 = findPatternMatches(text4, pattern4, 101);
    assert(result4 == expected4);
    cout << "Test 4 başarıyla geçti: Çakışan hash değerleri" << endl;
}

// Test 5: Boş metin
void test5() {
    string text5 = "";
    string pattern5 = "ANY";
    vector<int> expected5 = {};
    vector<int> result5 = findPatternMatches(text5, pattern5, 101);
    assert(result5 == expected5);
    cout << "Test 5 başarıyla geçti: Boş metin" << endl;
}

// Test 6: Boş desen
void test6() {
    string text6 = "NONEMPTY";
    string pattern6 = "";
    vector<int> expected6 = {};  // Boş desen hiçbir eşleşme döndürmez
    vector<int> result6 = findPatternMatches(text6, pattern6, 101);
    assert(result6 == expected6);
    cout << "Test 6 başarıyla geçti: Boş desen" << endl;
}

int main() {
    test1();
    test2();
    test3();
    test4();
    test5();
    test6();

    return 0;
}
