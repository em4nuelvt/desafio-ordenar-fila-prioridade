#include "Pessoa.hpp"

using namespace std;

Pessoa::Pessoa(){

}

Pessoa::~Pessoa(){

}

void Pessoa::setIdade(int idade){
    this-> idade= idade;
}

void Pessoa::setNome(string nome){
    this-> nome= nome;
}

string Pessoa::getNome(){
    return this-> nome;
}

int Pessoa::getIdade(){
    return this-> idade;
}






