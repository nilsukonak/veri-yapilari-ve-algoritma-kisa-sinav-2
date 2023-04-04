# veri-yapilari-ve-algoritma-kisa-sinav-2 soru2
soru2: Diziyi toplamı eşit alt kümelere bölme. Açıklama  : Sadece pozitif tamsayılar içeren boş olmayan bir tamsayı dizisi verildiğinde, dizinin her iki alt kümedeki elemanların toplamı eşit olacak şekilde iki alt kümeye bölünüp bölünemeyeceğini bulun.
cevap:Bir örnek üzerinden açıklayalım
böyle bir dizimiz olsun 
dizi = [2, 5, 1, 3, 4, 7, 8]

Bu diziyi iki alt kümeye bölmek istiyoruz, böylece her iki alt kümenin elemanlarının toplamı da aynı olacak. Bu örnekte bunu yapmak mümkündür. Bir çözüm şöyle olabilir:

alt_kume1 = [2, 5, 1, 7] toplamı = 15
alt_kume2 = [3, 4, 8] toplamı = 15

Her iki alt kümenin elemanlarının toplamı da 15'tir, bu nedenle dizi iki alt kümeye bölünebilir. Ancak, bu her zaman mümkün olmayabilir. Bazı durumlarda, verilen dizi iki alt kümeye bölünemez.

Bir dizinin toplamı eşit iki alt kümeye bölünebilmesi için, dizinin toplamının 2'ye bölümünden kalanın sıfır olması gerekir. Bu, toplamın eşit şekilde iki alt kümeye bölünebileceği anlamına gelir. Aksi takdirde, dizi iki alt kümeye bölünemez. Bu, herhangi bir dizi için geçerlidir. Daha büyük boyutlu dizilerde bu yöntem yeterli olmayabilir ve başka teknikler gerekebilir.

Bu teknikler arasında dinamik programlama ve backtracking gibi yöntemler bulunmaktadır.

Dinamik programlama, alt kümelerin toplamını hesaplamak için bir tablo kullanır ve ardından alt kümelerin toplamının eşit olup olmadığını kontrol eder. Bu yöntem, dizinin boyutu arttıkça zaman ve bellek karmaşıklığı açısından hızlı bir şekilde artabilir.

Backtracking ise, tüm olası alt kümeleri deneyerek eşit toplam elde edilip edilemeyeceğini kontrol eder. Bu yöntem, daha küçük boyutlu diziler için iyi çalışabilir, ancak daha büyük boyutlu dizilerde çok yavaş çalışabilir.

Diğer bir yöntem, ortada buluşma yöntemi olarak adlandırılır ve dinamik programlama ve backtracking yöntemlerinin birleşimidir. Bu yöntem, dizinin boyutu arttıkça hızlı bir şekilde artmasa da, bellek kullanımı yüksek olabilir.

Bu yöntemlerin tümü, daha büyük boyutlu diziler için de uygun sonuçlar üretmek için geliştirilmiş olsa da, her birinin kendi avantajları ve dezavantajları vardır ve herhangi bir özel durum için hangi yöntemin en uygun olduğuna karar vermek için bazı testler yapmak gerekmektedir.
