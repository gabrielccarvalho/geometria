#include <iostream>
#include <cmath>
#include "./lib/geometria.h"

int main(int argc, char* argv[]) {
  // Printando as instruções do programa
  // caso o mesmo seja chamado sem argumentos.
  if (argc == 1) {
    std::cout << "Por favor, especifique a opção desejada e seus respectivos parametros:" << std::endl;
    std::cout << std::endl;
    std::cout << "1) Figuras planas: " << std::endl;
    std::cout << "    i. Retângulo: base e altura." << std::endl;
    std::cout << "    ii. Triângulo: lado 1, 2 e 3." << std::endl;
    std::cout << "    iii. Quadrado: lado." << std::endl;
    std::cout << "    iv. Círculo: raio." << std::endl;
    std::cout << std::endl;
    std::cout << "2) Figuras espaciais: " << std::endl;
    std::cout << "    i. Pirâmide: para a pirâmide nos teremos:" << std::endl;
    std::cout << "       a) tipo da base (Quadrangular, triangular ou retângular)" << std::endl;
    std::cout << "       b) parâmetros depedendo da base (ver as figuras planas)" << std::endl;
    std::cout << "       c) altura da pirâmide" << std::endl;
    std::cout << "    ii. Cubo: aresta." << std::endl;
    std::cout << "    iii. Paralelepípedo: arestas 1, 2 e 3." << std::endl;
    std::cout << "    iv. Esfera: raio." << std::endl;
    std::cout << std::endl;
    std::cout << "Ex¹.: ./geometria triangulo 3 4 5" << std::endl;
    std:: cout << "                 |-------| |-----| " << std::endl;
    std:: cout << "                  formato  opções" << std::endl;
    std::cout << std::endl;
    std::cout << "Ex².: ./geometria piramide triangular 3 4 5 10" << std::endl;
    std:: cout << "                           |--------| |---||--|" << std::endl;
    std:: cout << "                            formato  opções altura" << std::endl;
    std:: cout << "                            da base        " << std::endl;
    std::cout << std::endl;
    return 0;
  }

  std::string forma = argv[1];
  
  // Descobrindo se a figura informada é plana ou espacial
  // e separando-as em funções.
  if (forma == "retangulo" || forma == "triangulo" || forma == "quadrado" || forma == "circulo") {
    // Caso seja uma figura plana, chamaremos a função plana().
    plano(argc, argv);
  } else {
    // Caso seja uma figura espacial, chamaremos a função espacial().
    espacial(argc, argv);
  }
  // Retorno padrão
  return 0;
}
