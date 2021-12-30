#include <iostream>
#include <fstream>
#include <cmath>
#include <string.h>
#include <vector>
int main(int argc, char* argv[]) 
{
    //string nazwaPliku = argv[0]; NIE WIEM CZY DOBRZE
    std::fstream plik;
    plik.open("test.txt"); //, std::fstream::in | std::fstream::out | std::fstream::app);
    char o;
    std::vector<std::string>K; //Para klientów
    std::vector<int>Odl; //Odległosc między klientami: K[1] = Odl[1], K[2] = Odl[2], K[3] = Odl[3], K[4]...
    char a, b; // np Klient1 -> Klient2
    while (plik >> o)
    {
        if (o >= 48 && o <= 58)
        {
            a = o;
            while (plik >> o)
            {
                if (o >= 48 && o <= 58)
                {
                    b = o;
                    while (plik >> o)
                    {
                        if (o >= 48 && o <= 58)
                            Odl.push_back(o);
                    }
                }
            }
        }
    }
    /*std::string inFile, outFile;
    inFile = argv[0];
    std::cout << inFile;*/
    
    std::string a1 = "a", b1 = "b";
    //int c = a + b;
    std::string test = a1 + b1;
    std::cout << test;
    std::cout << "Hello World!\n";
}