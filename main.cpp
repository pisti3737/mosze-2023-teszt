#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    int* b = new int[N_ELEMENTS]; //hiba, felreiras, kimaradt a '_' JAVITVA
    std::cout << "1-100 ertekek duplazasa" //hiba, dupla idezojelekbe kell kerulnie a stringnek JAVITVA
        for (int i = 0; i < N_ELEMENTS; i++)    //hiba, nincs feltetel a loopban, sem novekedes JAVITVA
    {
        b[i] = i * 2;
    }
    for (int i = 0; i<N_ELEMENTS; i++) //hiba, a feltetel nem megfelelo JAVITVA
    {
        std::cout << "Ertek:"; //hiba, nincs a sor végén ';' karakter JAVITVA
    }    
    std::cout << "Atlag szamitasa: " << std::endl;
    int atlag=0;     //hiba, az atlag nincs inicializalva JAVITVA
    for (int i = 0; i < N_ELEMENTS; i++) //hiba ',' karakter helyett ';' hasznalando JAVITVA
    {
        atlag += b[i]; //hiba, nincs ';' karakter JAVITVA
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
    return 0;
}
