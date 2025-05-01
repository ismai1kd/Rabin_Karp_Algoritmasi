#include <iostream>
#include <vector>
using namespace std;

vector<int> findPatternMatches(const string& text, const string& pattern, int prime) {
    if (pattern.empty()) {
        return {}; // Boş desen için hemen boş sonuç döndür
    }

    int n = text.length();
    int m = pattern.length();
    int d = 256; // Karakter kümesi (ASCII)
    int h = 1;
    int p = 0; // Desenin hash değeri
    int t = 0; // Metnin ilk pencere hash değeri
    vector<int> result;

    // h = (d^(m-1)) % prime hesaplanıyor
    for (int i = 0; i < m - 1; i++) {
        h = (h * d) % prime;
    }

    // Desenin ve metnin ilk pencere hash değerleri hesaplanıyor
    for (int i = 0; i < m; i++) {
        p = (d * p + pattern[i]) % prime;
        t = (d * t + text[i]) % prime;
    }

    // Metin üzerinde kaydırma işlemi
    for (int i = 0; i <= n - m; i++) {
        // Hash değerleri eşleşiyorsa karakter karşılaştırması yapılır
        if (p == t) {
            bool match = true;
            for (int j = 0; j < m; j++) {
                if (text[i + j] != pattern[j]) {
                    match = false;
                    break;
                }
            }
            if (match) {
                result.push_back(i);
            }
        }

        // Bir sonraki pencerenin hash değeri hesaplanıyor
        if (i < n - m) {
            t = (d * (t - text[i] * h) + text[i + m]) % prime;
            if (t < 0) {
                t = t + prime;
            }
        }
    }

    return result;
}
