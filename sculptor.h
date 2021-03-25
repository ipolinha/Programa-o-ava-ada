#ifndef sculptor_h
#define sculptor_h
#include <iostream>

using namespace std;
/**
 * @brief A Estrutura do Voxel
 * @details a estrutura é formada pelas variaveis,
 * que são denominadas de cores, transparecia
 * e a existencia ou não do voxel.
 */
struct Voxel{
    /**
     * @brief r
     * @details r recebe a cor vermelha
     * */
    /**
     * @brief g
     * @details g recebe a cor vermelha
     */
    /**
     * @brief b
     * @details b recebe a cor azul
    */
    /**
     * @brief a
     * @details a é a varivel que recebe o alfa
     */
    float  r,g,b; //Cores vermelho,verde e azul
    float a;
    bool isOn;

};
/**
 * @brief A classe do Sculptor
 */
class Sculptor {
protected:
    /**
   * @brief v é um ponteiro vetor  para o voxel
   */
    Voxel ***v;
    // 3D matrix
    int nx,ny,nz; // Dimensoes
    float r,g,b,a;
public:
    /**
   * @brief Metodo do Sculptor da escultura
   * @param _nx é referente a espessura
   * @param _ny é referente a comprimento
   * @param _nz é referente a altura
   */
    Sculptor(int _nx, int _ny, int _nz);
    ~Sculptor();
    /**
   * @brief setColor
   * @details funções responsavel pela definições das cores usando o RGB
   * e o Alfa para tonalizar os blocos de acordo com a numeração escolhida.
   * @param r
   * @param g
   * @param b
   * @param alpha
   */
    void setColor(float r, float g, float b, float alpha);
    /**
   * @brief putVoxel
   * @details função responsavel por inserir os voxel.
   * @param x
   * @param y
   * @param z
   */
    void putVoxel(int x, int y, int z);
    /**
   * @brief cutVoxel
   * @details função responsavel pela remoção dos voxel.
   * @param x
   * @param y
   * @param z
   */
    void cutVoxel(int x, int y, int z);
    /**
   * @brief putBox
   * @details Esta função cria a caixa ou bloco
   * ultilizando os parametros como intervalos
   * de dimensões usando a função putvoxel pra inserir os blocos no formato de caixa.
   * @param x0 Este parametro é o intervalo inicial em x.
   * @param x1 Este parametro é o intervalo final em x.
   * @param y0 Este parametro é o intervalo inicial em y.
   * @param y1 Este parametro é o intervalo final em y.
   * @param z0 Este parametro é o intervalo inicial em z.
   * @param z1 Este parametro é o intervalo final em z.
   */
    void putBox(int x0, int x1, int y0, int y1, int z0, int z1);
    /**
   * @brief cutBox
   * @details Esta função corta a caixa ou bloco como queira chamar.
   * ultilizando os parametros como intervalos
   * de dimensões usando a função cutvoxel pra cortar os blocos.
   * @param x0 Este parametro é o intervalo inicial em x do corte.
   * @param x1 Este parametro é o intervalo final em x do corte.
   * @param y0 Este parametro é o intervalo inicial em y do corte.
   * @param y1 Este parametro é o intervalo final em y do corte.
   * @param z0 Este parametro é o intervalo inicial em z do corte.
   * @param z1 Este parametro é o intervalo final em z do corte.
   */
    void cutBox(int x0, int x1, int y0, int y1, int z0, int z1);
    /**
   * @brief putSphere
   * @details Esta função cria a Esfera.
   * ultilizando as variaveis abaixo como parametros
   * de dimensões usando a função putvoxel pra inserir os blocos no formato de esfera.
   * @param xcenter Este parametro é o centro em x.
   * @param ycenter Este parametro é o centro em y.
   * @param zcenter Este parametro é o centro em z.
   * @param radius  Este parametro é o raio da Esfera.
   */
    void putSphere(int xcenter, int ycenter, int zcenter, int radius);
    /**
   * @brief cutSphere
   *  @details Esta função corta a Esfera.
   * @param xcenter Este parametro é o centro em x para o corte.
   * @param ycenter Este parametro é o centro em y para o corte.
   * @param zcenter Este parametro é o centro em z para o corte.
   * @param radius  Este parametro é o raio da Esfera para o corte.
   */
    void cutSphere(int xcenter, int ycenter, int zcenter, int radius);
    /**
   * @brief putEllipsoid
   * @details Esta função cria a elipse, ultilizando as variaveis abaixo como parametros
   * de dimensões usando a função putvoxel pra inserir os blocos no formato elipsal.
   * @param xcenter  Este parametro é o centro da elipse referente a posição em x.
   * @param ycenter  Este parametro é o centro da elipse referente a posição em y.
   * @param zcenter  Este parametro é o centro da elipse referente a posição em z.
   * @param rx Este parametro é o raio na direção de x.
   * @param ry Este parametro é o raio na direção de y.
   * @param rz Este parametro é o raio na direção de z.
   */
    void putEllipsoid(int xcenter, int ycenter, int zcenter, int rx, int ry, int rz);
    /**
   * @brief cutEllipsoid
   * @details Esta função corta a elipse ultilizando as variaveis abaixo como parametros
   * de dimensões usando a função cutvoxel.
   * @param xcenter Este parametro é o centro da elipse referente a posição em x para o corte
   * @param ycenter Este parametro é o centro da elipse referente a posição em y para o corte
   * @param zcenter Este parametro é o centro da elipse referente a posição em z para o corte
   * @param rx Este parametro é o raio na direção de x
   * @param ry Este parametro é o raio na direção de y
   * @param rz Este parametro é o raio na direção de z
   */
    void cutEllipsoid(int xcenter, int ycenter, int zcenter, int rx, int ry, int rz);
    /**
   * @brief writeOFF
   * @details Esta função é responsavel pela criação do arquivo
   * @param filename
   */
    void writeOFF(char* filename);
};

#endif // SCULPTOR_H
