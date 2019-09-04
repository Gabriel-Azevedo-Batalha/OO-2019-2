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
string Carro::getMarca()
{
    return this->marca;
}
void Carro::setMarca(string _marca)
{
    marca = _marca;
}
int Carro::getAno()
{
    return this->ano;
}
void Carro::setAno(int _ano)
{
    if(_ano >= 1886){
        ano = _ano;
        }
}
string Carro::getModelo()
{
    return this->modelo;
}
void Carro::setModelo(string _modelo)
{
    modelo = _modelo;
}
int Carro::getCapacidade()
{
    return this->capacidade;
}
void Carro::setCapacidade(int qtePessoas)
{
    if (qtePessoas > 0){
        capacidade = qtePessoas;
    }
}
string Carro::getCor()
{
    return this->cor;
}
void Carro::setCor(string _cor)
{
    cor = _cor;
}
float Carro::getPreco()
{
    return this->preco;
}
void Carro::setPreco(float _preco)
{
    if(_preco > 0){
        preco = _preco;
    }
}
void Carro::setVelocidadeAtual(float velocidade)
{
    if(velocidade >= 0.0 && velocidade <= velocidadeMax){
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
    if(0.0 <= velocidade && velocidade < 400.00){
        this->velocidadeMax =  velocidade;
    }
}
float Carro::getVelocidadeMax()
{
    return this->velocidadeMax;
}


