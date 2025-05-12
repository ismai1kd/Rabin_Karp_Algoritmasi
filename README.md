# Rabin_Karp_Algoritmasi
Rabin_Karp_Algoritmasi

---
# Repo Sahibi
👉 Repo'yu Atan: **İsmail Bayhan Yaltırık**  
👉 Atan Kişinin Numarası: **F241230022**  
👉 Bölümü: **Yapay Zeka ve Makine Öğrenmesi Mühendisliği**  
👉 Üniversitesi: **Konya Teknik Üniversitesi**  
👉 Ders: **Algoritma**  

---
# 📚 Rabin-Karp Algoritması

## 🔍 Algoritmanın Tanıtımı
Rabin-Karp algoritması, metin içinde belirli bir deseni (pattern) aramak için kullanılan etkin bir **string arama algoritmasıdır**. Bu algoritma, metindeki alt dizilerin ve aranan desenin **hash değerlerini karşılaştırarak** hızlıca eşleşme tespit eder. Özellikle büyük metinlerde ve çoklu desen aramalarında etkili bir çözüm sunar.

---

## 🧭 Kategori
- **Algoritma Türü:** Arama (Search)  
- **Alt Kategori:** String Arama  

---

## 🧠 Çözüm Yaklaşımı
Rabin-Karp algoritması, **rolling hash (kayan hash)** tekniğini kullanır.  
Bu yaklaşımda:
1. Hash değerleri her adımda yeniden hesaplanmaz.
2. Önceki hash değerinden, kaydırılan karakterlerin katkısıyla yeni hash değeri hızlıca türetilir.
3. Bu yöntem, hesaplama süresini önemli ölçüde azaltır.

---

## 🧪 Kullanım Alanları
Rabin-Karp algoritması, aşağıdaki durumlarda sıklıkla kullanılır:

| **Kullanım Alanı**         | **Açıklama**                                                            |
|----------------------------|------------------------------------------------------------------------|
| **Plagiarism Tespiti**     | Büyük metinler arasında benzerlikleri tespit etmek.                    |
| **Antivirüs Yazılımları**  | Zararlı yazılım imzalarını hızlıca tespit etmek.                       |
| **Veri Tabanı Aramaları**  | Büyük veri tabanlarında belirli desenleri aramak.                     |
| **DNA Dizilim Analizi**    | Genetik dizilerde belirli motifleri bulmak.                           |

---

## ⏱️ Karmaşıklık Analizi

| **Durum**         | **Zaman Karmaşıklığı** | **Açıklama**                                       |
|-------------------|------------------------|---------------------------------------------------|
| **En İyi Durum**  | O(n + m)              | Hash çakışması olmadan hızlı eşleşmeler.          |
| **Ortalama Durum**| O(n + m)              | Düşük hash çakışmasıyla verimli çalışma.          |
| **En Kötü Durum** | O(nm)                 | Her adımda hash çakışması ve karakter karşılaştırması. |

- **n:** Metin uzunluğu  
- **m:** Desen uzunluğu  
- **Uzay Karmaşıklığı:** O(1) (Sabit miktarda ek bellek kullanılır.)  

---

## 🧰 Algoritmanın Adımları

1. **Hash Fonksiyonu Seçimi:**
   - Uygun bir taban (ör. 256) ve asal modül (ör. 101) seçilir.
   
2. **Desenin Hash Değeri Hesaplanır:**
   - Aranan desenin hash değeri hesaplanır.
   
3. **Metindeki İlk Alt Dizinin Hash Değeri Hesaplanır:**
   - Metnin ilk `m` uzunluğundaki alt dizisinin hash değeri bulunur.
   
4. **Karşılaştırma ve Kaydırma:**
   - Eğer desenin hash değeri ile alt dizinin hash değeri eşleşirse, karakter bazlı karşılaştırma yapılır.
   - Eşleşme bulunursa, başlangıç indeksi kaydedilir.
   - Metin bir karakter kaydırılarak işlem tekrarlanır.

---

## ✅ Avantajlar ve ❌ Dezavantajlar

| **Avantajlar**                             | **Dezavantajlar**                                 |
|--------------------------------------------|--------------------------------------------------|
| Hashing sayesinde hızlı ön eleme yapılır.  | Kötü bir hash fonksiyonu performansı düşürür.    |
| Çoklu desen aramalarında etkilidir.         | Hash çakışmaları ek karşılaştırmalar gerektirir. |
| Büyük metinlerde verimli çalışır.           | En kötü durumda performansı düşebilir.           |

---

## 📊 Kullanım Yerlerine Ait Örnekler
- **Plagiarism Tespiti:** Öğrenci ödevlerinde benzerlikleri bulmak için.
- **Antivirüs Yazılımları:** Bilinen zararlı yazılım imzalarını hızlıca tespit etmek için.
- **DNA Dizilim Analizi:** Genetik dizilerde belirli motifleri tespit etmek için.

---

## 🛠️ Projenin Derlenmesi ve Test Edilmesi

### 🔨 Nasıl Derlenir?
Proje dosyalarını derlemek için aşağıdaki adımları takip edin.

#### Gereksinimler
1. **C++ Derleyicisi**:  
   - Tasarlayıcı kişi **MinGW**'yi indirerek programı derleyip ardından çalıştırmıştır.
   - Eğer siz **MinGW** indirmek istemiyor iseniz **Visual Studio Code veya CodeBlocks** kullanabilirsiniz.
   - **MinGW** derleyicisini indirmek için lütfen tıklayınız. 👉 [MinGW](https://sourceforge.net/projects/mingw/)

2. **Dosya Yapısı**:  
   Proje dosyalarının aşağıdaki gibi düzenlenmiş olduğundan emin olun:  
   **Proje_Klasoru/ ├── Kod_Dosyasi/ │ ├── Rabin_Karp_Algoritmasi.cpp │ ├── Rabin_Karp_Algoritmasi.h ├── Test_Dosyasi/ │ ├── Rabin_Karp_Algoritmasi_Test.cpp**

3. **Kodun Derlenmesi**:  
   Terminalde veya CMD üzerinden aşağıdaki komutu çalıştırarak proje dosyalarını derleyebilirsiniz:  
   **g++ Test_Dosyasi/Rabin_Karp_Algoritmasi_Test.cpp Kod_Dosyasi/Rabin_Karp_Algoritmasi.cpp -o RabinKarpTest**
---

## 🧪 Nasıl Test Çalıştırılır?

Kodun doğruluğunu kontrol etmek için test dosyasını çalıştırabilirsiniz.

### Çalıştırma Adımları
1. Derleme tamamlandıktan sonra, aşağıdaki komutu çalıştırarak testleri başlatabilirsiniz:

    **GIT Bash** ile çalıştıracaksanız: **./RabinKarpTest**  
    **CMD veya Terminal** ile çalıştıracaksanız: **RabinKarpTest**

### Beklenen Çıktı
Başarılı bir test çalıştırması sonucunda terminalde aşağıdaki gibi bir çıktı görmelisiniz:

👉Test 1 başarıyla geçti: Basit eşleşme  
👉Test 2 başarıyla geçti: Tek eşleşme  
👉Test 3 başarıyla geçti: Eşleşme yok  
👉Test 4 başarıyla geçti: Çakışan hash değerleri  
👉Test 5 başarıyla geçti: Boş metin  
👉Test 6 başarıyla geçti: Boş desen

---

## 📚 Kaynaklar
- [GeeksforGeeks: Rabin-Karp Algorithm](https://www.geeksforgeeks.org/rabin-karp-algorithm-for-pattern-searching/)
- [Wikipedia: Rabin–Karp Algorithm](https://en.wikipedia.org/wiki/Rabin%E2%80%93Karp_algorithm)
- [Programiz: Rabin-Karp Algorithm](https://www.programiz.com/dsa/rabin-karp-algorithm)

---

## 🚀 Ek Notlar ve Geliştirme Önerileri
- **Hash Fonksiyonu Seçimi:** Performansı artırmak için uygun bir hash fonksiyonu seçimi yapabilirsiniz.
- **Çoklu Desen Arama:** Algoritmayı çoklu hash desteği ile genişletebilirsiniz.
- **Hash Çakışmaları:** Çakışma durumlarını azaltmak için prime number seçimine dikkat edin.

---

## 🧑‍💻 Kod Tasarlayıcıları
- **Kod ve Repo Yöneticisi:** 👉 İsmail Bayhan Yaltırık  
- **Kod ve Repo Yönetici Yardımcısı:** 👉 Elif Su Baydarlı  


- 📚 Eğer Aklınıza Takılan Bir Soru Olursa Lütfen Yöneticinin Kendi Web Sitesinden Ulaşınız.  
  Web Siteye Ulaşmak İçin 👉👉 [İsmail Yaltırık](https://www.ismailyaltirik.com)

---
