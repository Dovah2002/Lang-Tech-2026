

#include <stdio.h>
#include <math.h>

/* ---------- Protótipos ---------- */
void exercicioA(void); /* Lê dois inteiros e imprime em ordem inversa */
void exercicioB(void); /* Notação científica de um double */
void exercicioC(void); /* Número em base binária */
void exercicioD(void); /* URI 1009 - salário + comissão */
void exercicioE(void); /* Soma, média e produtório de 4 valores */
void exercicioF(void); /* URI 1020 - idade em dias -> anos/meses/dias */
void exercicioG(void); /* URI 1011 - volume da esfera */
void exercicioH(void); /* Distância euclidiana entre dois pontos */

void mostrarMenu(void);

int main(void) {
    char opcao;
    int continuar = 1;

    while (continuar) {
        mostrarMenu();
        scanf(" %c", &opcao);

        switch (opcao) {
            case 'a':
            case 'A':
                exercicioA();
                break;
            case 'b':
            case 'B':
                exercicioB();
                break;
            case 'c':
            case 'C':
                exercicioC();
                break;
            case 'd':
            case 'D':
                exercicioD();
                break;
            case 'e':
            case 'E':
                exercicioE();
                break;
            case 'f':
            case 'F':
                exercicioF();
                break;
            case 'g':
            case 'G':
                exercicioG();
                break;
            case 'h':
            case 'H':
                exercicioH();
                break;
            case 'q':
            case 'Q':
                printf("Encerrando o programa.\n");
                continuar = 0;
                break;
            default:
                printf("Opcao invalida! Tente novamente.\n");
                break;
        }
        printf("\n");
    }

    return 0;
}

void mostrarMenu(void) {
    printf("=========================================\n");
    printf(" MENU DE EXERCICIOS\n");
    printf("=========================================\n");
    printf(" a) Ler dois inteiros e imprimir invertidos\n");
    printf(" b) Double em notacao cientifica\n");
    printf(" c) Numero em binario\n");
    printf(" d) URI 1009 - Salario + comissao\n");
    printf(" e) Soma, media e produtorio de 4 valores\n");
    printf(" f) URI 1020 - Idade em dias -> anos/meses/dias\n");
    printf(" g) URI 1011 - Volume da esfera\n");
    printf(" h) Distancia euclidiana entre dois pontos\n");
    printf(" q) Sair\n");
    printf("=========================================\n");
    printf("Escolha uma opcao: ");
}

/* -------------------------------------------------------------
 * a) Le dois numeros inteiros e os imprime na ordem inversa
 * ------------------------------------------------------------- */
void exercicioA(void) {
    int a, b;

    printf("Digite o primeiro numero inteiro: ");
    scanf("%d", &a);
    printf("Digite o segundo numero inteiro: ");
    scanf("%d", &b);

    printf("Ordem inversa: %d %d\n", b, a);
}

/* -------------------------------------------------------------
 * b) Le um double e imprime em notacao cientifica (A x 10^n),
 *    com 1 <= A < 10, apenas valores positivos.
 * ------------------------------------------------------------- */
void exercicioB(void) {
    double valor, mantissa;
    int expoente = 0;

    printf("Digite um valor double positivo: ");
    scanf("%lf", &valor);

    mantissa = valor;

    if (mantissa > 0.0) {
        while (mantissa >= 10.0) {
            mantissa /= 10.0;
            expoente++;
        }
        while (mantissa < 1.0) {
            mantissa *= 10.0;
            expoente--;
        }
    }

    printf("%.6lf x 10^%d\n", mantissa, expoente);
}

/* -------------------------------------------------------------
 * c) Le um numero n (1 <= n <= 64) e mostra seu valor em binario
 * ------------------------------------------------------------- */
void exercicioC(void) {
    unsigned long long n;
    int bits[64];
    int i, totalBits = 0;

    printf("Digite um numero inteiro (1 a 64 bits, valor >= 0): ");
    scanf("%llu", &n);

    if (n == 0) {
        printf("Binario: 0\n");
        return;
    }

    while (n > 0) {
        bits[totalBits] = n % 2;
        n /= 2;
        totalBits++;
    }

    printf("Binario: ");
    for (i = totalBits - 1; i >= 0; i--) {
        printf("%d", bits[i]);
    }
    printf("\n");
}

/* -------------------------------------------------------------
 * d) URI 1009 - salario fixo + 15% de comissao sobre as vendas
 * ------------------------------------------------------------- */
void exercicioD(void) {
    double salarioFixo, totalVendas, comissao, totalReceber;

    printf("Digite o salario fixo: ");
    scanf("%lf", &salarioFixo);
    printf("Digite o total em vendas: ");
    scanf("%lf", &totalVendas);

    comissao = totalVendas * 0.15;
    totalReceber = salarioFixo + comissao;

    printf("Total a receber no final do mes: R$ %.2lf\n", totalReceber);
}

/* -------------------------------------------------------------
 * e) Le 4 valores e mostra soma, media e produtorio
 * ------------------------------------------------------------- */
void exercicioE(void) {
    double valores[4];
    double soma = 0.0, produtorio = 1.0, media;
    int i;

    for (i = 0; i < 4; i++) {
        printf("Digite o valor %d: ", i + 1);
        scanf("%lf", &valores[i]);
    }

    for (i = 0; i < 4; i++) {
        soma += valores[i];
        produtorio *= valores[i];
    }
    media = soma / 4.0;

    printf("Soma: %.2lf\n", soma);
    printf("Media: %.2lf\n", media);
    printf("Produtorio: %.2lf\n", produtorio);
}

/* -------------------------------------------------------------
 * f) URI 1020 - idade em dias -> anos, meses e dias
 *    (ano = 365 dias, mes = 30 dias)
 * ------------------------------------------------------------- */
void exercicioF(void) {
    int totalDias, anos, meses, dias;

    printf("Digite a idade em dias: ");
    scanf("%d", &totalDias);

    anos = totalDias / 365;
    meses = (totalDias % 365) / 30;
    dias = (totalDias % 365) % 30;

    printf("%d ano(s)\n", anos);
    printf("%d mes(es)\n", meses);
    printf("%d dia(s)\n", dias);
}

/* -------------------------------------------------------------
 * g) URI 1011 - volume da esfera: (4/3) * pi * R^3, pi = 3.14159
 * ------------------------------------------------------------- */
void exercicioG(void) {
    double raio, volume;
    const double PI = 3.14159;

    printf("Digite o raio (R) da esfera: ");
    scanf("%lf", &raio);

    volume = (4.0 / 3.0) * PI * raio * raio * raio;

    printf("VOLUME = %.4lf\n", volume);
}

/* -------------------------------------------------------------
 * h) Distancia euclidiana entre p1(x1,y1) e p2(x2,y2)
 * ------------------------------------------------------------- */
void exercicioH(void) {
    double x1, y1, x2, y2, distancia;

    printf("Digite x1: ");
    scanf("%lf", &x1);
    printf("Digite y1: ");
    scanf("%lf", &y1);
    printf("Digite x2: ");
    scanf("%lf", &x2);
    printf("Digite y2: ");
    scanf("%lf", &y2);

    distancia = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    printf("Distancia: %.4lf\n", distancia);
}
