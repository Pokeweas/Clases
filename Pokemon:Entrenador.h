#ifndef POKEMON:ENTRENADOR_H
#define POKEMON:ENTRENADOR_H

namespace Pokemon {

class Entrenador
{
    public:
        Entrenador();
        virtual ~Entrenador();
    protected:
    private:
    Pokemon Equipo[5];//Arreglo tipo Pokemon que determina el equipo pokemon del entrenador (Generado aleatoriamente)
    char Nombre[30];//Nombre entrenador 

};

} // namespace Pokemon

#endif // POKEMON:ENTRENADOR_H
