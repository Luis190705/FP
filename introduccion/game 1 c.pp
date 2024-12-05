// ConsoleApplication1.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <string>

//las clases se declaran fuera de cualquier funcion
class Enemigo
{
public:
    std::string tipo;
    int vida;
    int potencia;
    //constructor enemigo
    Enemigo(std::string tipo1, int vida1, int potencia1)
    {
        this->tipo = tipo1;
        this->potencia = potencia1;
        this->vida = vida1;
    }
};
//subclase
class orco :public Enemigo
{
public:
    orco (int vida1, int potencia1): 
        Enemigo ("Orco", vida1, potencia1)
    {}
};
//subclase
class dragon :public Enemigo
{
public:
    dragon(int vida1, int potencia1):
        Enemigo("dragon", vida1, potencia1)
    {}
};
   
class Jugador
{public:
    std::string id; //identificador del jugador

    int vida;
    int potencia;
    // un constructor genera un objeto o una instancia de la clase
    //un constructor tiene el nombre de la clase

    Jugador(std::string id1, int vida1, int potencia1) 
    {
        this->id = id1;
        this->potencia = potencia1;
        this->vida = vida1;
    
    }
    std::string getID()const
    {
        return id;
    }
    int getvida()const
    {
        return vida;
    }
    int getpotencia()const
    {
        return potencia;
    }
    //setters
    void setID(std::string id1)
    {
        this->id = id1;
     }
    void setVida(int vida1)
    {
        this->vida = vida1;
    }
    //ataque

    void ataque(Enemigo& enemigo);//esta es una funcion prototipo define la primera linea de la funcion y se cierra con ";"
};

int main()
{
    Jugador Link("Link", 100, 20);
    std::cout << "Nombre: " << Link.getID();
   
    std::cout << "vida: " << Link.getvida();

    std::cout << "potencia: " << Link.getpotencia();

    std::cout << std::endl;
    orco orco(80, 10);
    dragon dragon(1000, 200);
    std::cout<< "vida orco: " << orco.vida 


} 

