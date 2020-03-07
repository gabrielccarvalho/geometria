#include <iostream>
#include <cmath>

// Função para calcular área e perímetro de figuras planas.
void plano(int argc, char* argv[]) {
  // Definindo o primeiro parâmetro, onde será passada a forma geométrica a ser
  // trabalhada, como uma string.
  std::string forma = argv[1];
  
  // Analisando a forma informada e decidindo as operações a serem utilizadas.
  if (forma == "retangulo") { // Caso a forma informada seja um Retângulo.
    // Caso a figura seja um retângulo, utilizaremos os argumentos como sendo
    // base e altura.
    int base = atoi(argv[2]);
    int altura = atoi(argv[3]);
    
    // Calculando o perímetro do retângulo.
    int perimetro;
    perimetro = 2 * (base + altura);

    // Calculando a área do retângulo.
    float area;
    area = (base * altura);

    // Printando informações em tela.
    std::cout << "# Área do retângulo: " << area << std::endl;
    std::cout << "# Perímetro do retângulo: " << perimetro << std::endl;

  } else if (forma == "triangulo") { // Caso a forma informada seja um Triângulo.
    // Caso a figura seja um retângulo, utilizaremos os argumentos como sendo
    // os 3 lados do mesmo.
    int lado1 = atoi(argv[2]);
    int lado2 = atoi(argv[3]);
    int lado3 = atoi(argv[4]);

    // Calculando o perímetro do triângulo.
    int perimetro;
    perimetro = (lado1 + lado2 + lado3) / 2;
    
    // Utilizando a fórmula de Heron para calcular a área do triângulo.
    float area;
    area = sqrt(perimetro * (perimetro - lado1) * (perimetro - lado2) * (perimetro - lado3));

    // Printando informações em tela.
    std::cout << "# Área do triângulo: " << area << std::endl;
    std::cout << "# Perímetro do triângulo: " << perimetro << std::endl;

  } else if (forma == "quadrado") { // Caso a forma informada seja um Quadrado.
    // Caso a figura seja um quadrado, utilizaremos os argumentos como sendo
    // o lado.
    int lado = atoi(argv[2]);

    // Calculando o perímetro do quadrado.
    int perimetro;
    perimetro = 4 * lado;

    // Calculando a área do quadrado.
    float area;
    area = pow(lado, 2.0f);

    // Printando informações na tela.
    std::cout << "# Área do quadrado: " << area << std::endl;
    std::cout << "# Perímetro do quadrado: " << perimetro << std::endl;

  } else if (forma == "circulo") { // Caso a forma informada seja um círculo.
    // Caso a figura seja um retângulo, utilizaremos os argumentos como sendo
    // seu raio.
    int raio = atoi(argv[2]);

    // Calculando o perímetro do círculo.
    int perimetro;
    perimetro = 2 * M_PI * raio;

    // Calculando a área do círculo.
    float area;
    area = M_PI * pow(raio, 2.0f);

    // Printando informações na tela.
    std::cout << "# Área do circulo: " << area << std::endl;
    std::cout << "# Perímetro do circulo: " << perimetro << std::endl;

  }
}

void espacial(int argc, char* argv[]) {
  std::string forma = argv[1];

  if (forma == "piramide") { // TODO

    float area = 0;
    float volume = 0;

    // Printando informações na tela.
    std::cout << "# Área da pirâmide: " << area << std::endl;
    std::cout << "# Volume da pirâmide: " << volume << std::endl;
  } else if (forma == "cubo") { // Caso a forma informada seja um cubo.
    // Caso a figura seja um cubo, utilizaremos os argumentos como sendo
    // sua aresta.
    int aresta = atoi(argv[2]);

    // Calculando a área do cubo.
    float area;
    area = 6 * pow(aresta, 2.0f);

    // Calculando o volume do cubo.
    float volume; 
    volume = pow(aresta, 3.0f);

    // Printando informacoes
    std::cout << "# Área do cubo: " << area << std::endl;
    std::cout << "# Volume do cubo: " << volume << std::endl;
  } else if (forma == "paralelepipedo") {
    // Caso a figura seja um paralelepípedo, utilizaremos os argumentos como sendo
    // suas arestas.
    int aresta1 = atoi(argv[2]);
    int aresta2 = atoi(argv[3]);
    int aresta3 = atoi(argv[4]);

    // Calculando a área do paralelepípedo.
    float area;
    area = (2 * aresta1 * aresta2) + (2 * aresta1 * aresta3) + (2 * aresta2 * aresta3);

    // Calculando o volume do paralelepípedo.
    float volume; 
    volume = (aresta1 * aresta2 * aresta3);

    // Printando informações na tela.
    std::cout << "# Área do paralelepípedo: " << area << std::endl;
    std::cout << "# Volume do paralelepípedo: " << volume << std::endl;
  } else if (forma == "esfera") {
    // Caso a figura seja uma esfera, utilizaremos os argumentos como sendo
    // seu raio.
    int raio = atoi(argv[2]);

    // Calculando a área da esfera.
    float area;
    area = 4 * M_PI * pow(raio, 2.0f);

    // Calculando o volume da esfera.
    float volume; 
    volume = 4/3 * M_PI * pow(raio, 3.0f);

    // Printando informações na tela.
    std::cout << "# Área da esfera: " << area << std::endl;
    std::cout << "# Volume da esfera: " << volume << std::endl;
  }
}

int main(int argc, char* argv[]) {
  // Printando as instruções do programa
  // caso o mesmo seja chamado sem argumentos.
  if (argc == 1) {
    std::cout << "Por favor, especifique a opção desejada e seus respectivos parametros." << std::endl;
    std::cout << std::endl;
    std::cout << "1) Figuras planas: " << std::endl;
    std::cout << "    i. Retângulo: base e altura." << std::endl;
    std::cout << "    ii. Triângulo: lado 1, 2 e 3." << std::endl;
    std::cout << "    iii. Quadrado: lado." << std::endl;
    std::cout << "    iv. Círculo: raio." << std::endl;
    std::cout << std::endl;
    std::cout << "2) Figuras espaciais: " << std::endl;
    std::cout << "    i. Pirâmide: formato da base, (informações do item 1 de acordo com o formato da base) e altura." << std::endl;
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
    plano(argc, argv);
  } else {
    espacial(argc, argv);
  }
  return 0;
}
