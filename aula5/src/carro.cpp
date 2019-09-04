#include "carro.hpp"

Carro::Carro(){
    cout << "Criou o carro" << endl;
    setVelocidadeAtual(0.0);
    setVelocidadeMaxima(220.0);
}
Carro::~Carro()
{
    cout << "Destriu o carro" << endl;
}
void Carro::setVelocidadeAtual(float velocidade)
{
    if(velocidade >= 0.0){
        velocidadeAtual = velocidade;
    }
}
float Carro::getVelocidadeAtual()
{
    return this->velocidadeAtual;
}
void Carro::setVelocidadeMaxima(float velocidade)
{
    cout << "setou velocidade maxima: "<< velocidade << endl;
    if(0.0 <= velocidade < 400.00){
        this->velocidadeMax =  velocidade;
    }
}
float Carro::getVelocidadeMax()
{
    return this->velocidadeMax;
}
void Carro::setCapacidade(int qtePessoas)
{
    if (qtePessoas > 0){
        capacidade = qtePessoas;
    }
}
int Carro::getCapacidade()
{
    return this->capacidade;
}