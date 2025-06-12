// Criador: Douglas Magalhães de Vasconcelos

#include <iostream>
#include <vector>

float somar(float a, float b) {
    return a + b;
}

float subtrair(float a, float b) {
    return a - b;
}

float multiplicar(float a, float b) {
    return a * b;
}

float dividir(float a, float b) {
    if (b == 0) {
        std::cout << "Não existe divisão por zero!" << std::endl;
        return 0; // valor padrão para evitar erro
    }
    return a / b;
}

bool estaNaLista(int valor, const std::vector<int>& lista) {
    for (int item : lista) {
        if (item == valor) {
            return true;
        }
    }
    return false;
}

int main() {
    float number1, number2, resultado = 0;
    int entrada;
    std::vector<int> opcoesValidas = {1, 2, 3, 4};

    while (true) {
        std::cout << "\nEscolha uma operação aritmética:" << std::endl;
        std::cout << "1 - Somar\n2 - Subtrair\n3 - Multiplicar\n4 - Dividir\n0 - Sair\n> ";
        std::cin >> entrada;

        if (entrada == 0) {
            std::cout << "Programa encerrado com sucesso!" << std::endl;
            break;
        }

        if (!estaNaLista(entrada, opcoesValidas)) {
            std::cout << "Opção inválida!" << std::endl;
            continue;
        }

        std::cout << "Digite um número: ";
        std::cin >> number1;
        std::cout << "Digite outro número: ";
        std::cin >> number2;

        if (entrada == 1) {
            resultado = somar(number1, number2);
            std::cout << "Resultado de " << number1 << " + " << number2 << " = " << resultado << std::endl;
        } else if (entrada == 2) {
            resultado = subtrair(number1, number2);
            std::cout << "Resultado de " << number1 << " - " << number2 << " = " << resultado << std::endl;
        } else if (entrada == 3) {
            resultado = multiplicar(number1, number2);
            std::cout << "Resultado de " << number1 << " * " << number2 << " = " << resultado << std::endl;
        } else if (entrada == 4) {
            resultado = dividir(number1, number2);
            std::cout << "Resultado de " << number1 << " / " << number2 << " = " << resultado << std::endl;
        }
    }

    return 0;
}
