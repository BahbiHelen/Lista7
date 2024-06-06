#include <iostream>
#include <locale>
using namespace std;

//int soma(int a, int b);
//int main() //essa é a função principal
//{
//	int num1 = 5;
//	int num2 = 3;
//	int resultado = soma(5, 3);
//	cout << resultado;
//}
//
//int soma(int a, int b) {
//	return a + b;
//}
//void imprimeTexto();

//int main() {
//	locale::global(locale("pt_BR.UTF-8"));
//	imprimeTexto();
//}
//void imprimeTexto() {
//	cout << "Essa é uma fução vazia, não retorna nada";
//}
//int main(){ //bloco de código principal
//locale::global(locale("pt_BR.UTF-8"));
//int num1, num 2;
//cout << "Digite o primeiro número"
//cout << "DIgite o segundo nùmero: ";
//cin >> num2;
//int resposta = maior(num1, num2);
//cout << "O maior entre eles é" << resposta;
//}
//int maior(int a, int b) { //função
//	if (a > b) {
//		return a;
//}

//ATIVIDADE 01
/*lude <iostream>
#include <iomanip>

    int main() {
        int numeroFuncionario;
        double horasTrabalhadas, valorPorHora, salario;

        std::cout << "Digite o número do funcionário: ";
        std::cin >> numeroFuncionario;

        std::cout << "Digite o número de horas trabalhadas: ";
        std::cin >> horasTrabalhadas;

        std::cout << "Digite o valor que recebe por hora: ";
        std::cin >> valorPorHora;

        salario = horasTrabalhadas * valorPorHora;

        std::cout << std::fixed << std::setprecision(2);

        std::cout << "Número do funcionário: " << numeroFuncionario << std::endl;
        std::cout << "Salário: R$ " << salario << std::endl;

        return 0;
    }*/

//ATIVIDADE 02
/*nclude <iostream>
#include <iomanip>

    int main() {
        int quantidadeProduto1, quantidadeProduto2;
        double valorUnitarioProduto1, valorUnitarioProduto2, total;

        std::cout << "Digite a quantidade do primeiro produto: ";
        std::cin >> quantidadeProduto1;
        std::cout << "Digite o valor unitário do primeiro produto: ";
        std::cin >> valorUnitarioProduto1;

        std::cout << "Digite a quantidade do segundo produto: ";
        std::cin >> quantidadeProduto2;
        std::cout << "Digite o valor unitário do segundo produto: ";
        std::cin >> valorUnitarioProduto2;

        total = (quantidadeProduto1 * valorUnitarioProduto1) + (quantidadeProduto2 * valorUnitarioProduto2);

        std::cout << std::fixed << std::setprecision(2);

        std::cout << "Total a pagar: R$ " << total << std::endl;

        return 0;
    }*/

    /*ATIVIDADE03*/

       /*ef area_triangulo_retangulo(base, altura) :
        return base * altura / 2.0

        def area_circulo(raio) :
        pi = 3.14159
        return pi * raio * raio

        def area_trapezio(base1, base2, altura) :
        return (base1 + base2) / 2.0 * altura

        def area_quadrado(lado) :
        return lado * lado

        def area_retangulo(lado1, lado2) :
        return lado1 * lado2

        A = float(input("Digite o valor de A: "))
        B = float(input("Digite o valor de B: "))
        C = float(input("Digite o valor de C: "))

        area_triangulo = area_triangulo_retangulo(A, C)
        area_circ = area_circulo(C)
        area_trap = area_trapezio(A, B, C)
        area_quad = area_quadrado(B)
        area_ret = area_retangulo(A, B)

        print(f"a) Área do triângulo retângulo: {area_triangulo:.2f}")
        print(f"b) Área do círculo: {area_circ:.2f}")
        print(f"c) Área do trapézio: {area_trap:.2f}")
        print(f"d) Área do quadrado: {area_quad:.2f}")
        print(f"e) Área do retângulo: {area_ret:.2f}")*/
