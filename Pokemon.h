#ifndef POKEMON_H
#define POKEMON_H

class Ataques
{
    private:
    char Nombre[30]//Nombre Ataque
    char TipoP[30];//Tipo Pokemon
    char TipoA[30];//Tipo Ataque
    int PO;
}

class Pokemon
{
    public:
        Pokemon();
        virtual ~Pokemon();
    protected:
    private:
    int Numero;
    char Nombre[30];//Nombre Pokemon
    char Tipo[30];//Tipo Pokemon
    //Estadisticas del Pokemon
    int PS;
    int ATK;
    int DEF;
    int ESP;
    int VEL;
};

#endif // POKEMON_H
