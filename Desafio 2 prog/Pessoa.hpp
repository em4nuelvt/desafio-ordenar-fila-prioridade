#ifndef PESSOA_HPP
#define PESSOA_HPP

#include <iostream>
#include <string>
#include <vector>

using namespace std;



class Pessoa{
    private:
        string nome;
        int idade;  

    public:
        Pessoa();
        virtual ~Pessoa();
        string getNome();
        void setNome(string nome);
        void setIdade(int idade);
        int getIdade();
        friend bool operator<(const Pessoa& p1, const Pessoa& p2){
            return p1.idade < p2.idade;
        }


};
#endif 
