#include "caminhao.hpp"


Caminhao::Caminhao(string marca)
{
    carga = 0.0;
    comprimento = 0.0;
    altura = 0.0;
    setVelocidadeMaxima(180.0);
    cout << "Construtor do caminhao" << endl;
    cout << "Caminhão " << marca;
    setMarca(marca);
}
Caminhao::Caminhao(float _velocidadeMaxima, string marca)//:Carro(_velocidadeMaxima)
{
    carga = 0.0;
    comprimento = 0.0;
    altura = 0.0;
    setVelocidadeMaxima(_velocidadeMaxima);
    cout << "Construtor do caminhao" << endl;
    cout << "Caminhão: " << marca << endl;
    setMarca(marca);
}
void Caminhao::setTipoCarga(string tcarga)
{
    tipoCarga = tcarga;
}
string Caminhao::getTipoCarga()
{
    return this->tipoCarga;
}
void Caminhao::setComprimento(float _comprimento)
{
    if (_comprimento > 0.0){
        comprimento = _comprimento;
    }
}
float Caminhao::getComprimento()
{
    return this->comprimento;
}
void Caminhao::setCarga(float _carga)
{
    if (_carga >= 0.0){
        carga = _carga;
    }
}
float Caminhao::getCarga()
{
    return this->carga;
}
void Caminhao::setAltura(float _altura)
{
    if (_altura > 0.0){
        altura = _altura;
    }
}
float Caminhao::getAltura()
{
    return this->altura;
}