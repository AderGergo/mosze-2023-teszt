#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    // NELEMENTS nincs definiálva helyesen: N_ELEMENTS
    int *b = new int[NELEMENTS];

    // Hiányzó pontosvessző a sor végéről
    // A ' ' karakterekhez való (1 betű), szöveghez " " kell
    std::cout << '1-100 ertekek duplazasa'

    // A for ciklusból hiányzik a feltétel és a növekmény 
    for (int i = 0;)
    {
        b[i] = i * 2;
    }

    // A feltétel csak egy 'i', ami 0-nál azonnal leáll, így a ciklus le sem fut
    for (int i = 0; i; i++)
    {
        //  Hiányzó pontosvessző a sor végéről
        std::cout << "Ertek:"
    }    

    std::cout << "Atlag szamitasa: " << std::endl;

    // Nincs kezdőérték (0), így az atlag változó memóriaszeméttel fog számolni
    int atlag;

    // A for ciklusban pontosvessző ; kellene a vessző helyett
    for (int i = 0; i < N_ELEMENTS, i++)
    {
        // Hiányzó pontosvessző a sor végéről
        atlag += b[i]
    }

    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;

    // Memóriaszivárgás!

    return 0;
}