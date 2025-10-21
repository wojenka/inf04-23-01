#include <iostream>
int nwd(int a, int b){
    while(a!=b){
        if(a>b)  a=a-b;
        else b=a-b;
    }
    return a;
}

/*
nazwa funkcji: nwd
opis funkcji: funkcja implementuje algorytm Euklidesa
parametry: 
int a - liczba dodatnia całkowita, dla której szukamy nawiekszego wspólnego dzielnika z liczbą b
int b - liczba dodatnia całkowita, dla której szukamy nawiekszego wspólnego dzielnika z liczbą a
zwracany typ i opis: int a - największy wspólny dzielnik
autor:  :)
*/
int main(int argc, char const *argv[])
{
    int a=0, b=0;
    while (a==0||a<0)
    {
        std::cout<<"Podaj (dodatnią, całkowitą) liczbę a: ";
        std::cin>>a;
        std::cout<<"\n";
        if(a<0) std::cout<<"Liczba nie może być mniejsza od zera!\n";
    }
    while (b==0||b<0)
    {
        std::cout<<"Podaj (dodatnią, całkowitą) liczbę b: ";
        std::cin>>b;
        std::cout<<"\n";
        if(b<0) std::cout<<"Liczba nie może być mniejsza od zera!\n";
    }
    std::cout<<"NWD:"<<nwd(a,b)<<"\n";
    return 0;
}
