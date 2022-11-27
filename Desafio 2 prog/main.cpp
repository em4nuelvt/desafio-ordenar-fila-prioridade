#include "Pessoa.hpp"
#include <iostream>
#include <queue>
using namespace std;

int main(){

    priority_queue <Pessoa> P;
    Pessoa aux;

    aux.setIdade(80);
    aux.setNome("Eduardo");

    P.push(aux);

    aux.setIdade(30);
    aux.setNome("Joaquim");

    P.push(aux);

    aux.setIdade(20);
    aux.setNome("Anielly");

    P.push(aux);

    aux.setIdade(90);
    aux.setNome("Emanuel");

    P.push(aux);

    aux.setIdade(12);
    aux.setNome("Marcos");

    P.push(aux);

    while (!P.empty()) {
 
        Pessoa Q = P.top();
        
        P.pop();
 
        cout << Q.getNome() << " " << Q.getIdade() << "\n";
    }
    return 0;

}
