#include <iostream>
#include <string>
using namespace std;

class Carro{
    private:
        string marca;
        int ano;
        string modelo;
        int capacidade;
        string cor;
        float preco;
        float velocidadeMax;
        float velocidadeAtual;
    public:
        Carro();
        Carro(float _velocidadeMaxima);
        ~Carro();
        void aceleraCarro(float fatorAcelacao);
        void desaceleraCarro(float fatorAcelecao);
        string getMarca();
        void setMarca(string _marca);
        int getAno();
        void setAno (int _ano);
        string getModelo();
        void setModelo(string _modelo);
        int getCapacidade();
        void setCapacidade(int qtePessoas);
        string getCor();
        void setCor(string _cor);
        float getPreco();
        void setPreco(float _preco);
        float getVelocidadeMax();
        void setVelocidadeMaxima(float velocidade);
        float getVelocidadeAtual();
        void setVelocidadeAtual(float velocidade);
};