#include <iostream>
#include <string>

int main()
{
    std::string isim;
    int sayi1, sayi2;

    std::cout << "Adinizi girin: ";
    std::cin >> isim;

    std::cout << "Birinci sayiyi girin: ";
    std::cin >> sayi1;

    std::cout << "Ikinci sayiyi girin: ";
    std::cin >> sayi2;

    int toplam = sayi1 + sayi2;

    std::cout << "Merhaba, " << isim << "!" << std::endl;
    std::cout << "Girdiginiz sayilarin toplami: " << toplam << std::endl;

    return 0;
}