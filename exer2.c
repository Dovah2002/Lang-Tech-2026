
#include <stdio.h>
#include <math.h>

/* ---------- Prototipos ---------- */
void exercicioA(void); /* Ano de nascimento a partir da idade */
void exercicioB(void); /* km/h -> m/s */
void exercicioC(void); /* Reais -> Dolares */
void exercicioD(void); /* Celsius -> Fahrenheit */
void exercicioE(void); /* Graus -> Radianos */
void exercicioF(void); /* Antecessor e sucessor */
void exercicioG(void); /* URI - divisao de premio entre 3 ganhadores */
void exercicioH(void); /* URI 1019 - segundos -> horas:minutos:segundos */
void exercicioI(void); /* URI 1017 - litros de combustivel gastos */
void exercicioJ(void); /* URI 1013 - maior de tres valores (formula) */

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
            case 'i':
            case 'I':
                exercicioI();
                break;
            case 'j':
            case 'J':
                exercicioJ();
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
    printf(" a) Ano de nascimento a partir da idade\n");
    printf(" b) Velocidade km/h -> m/s\n");
    printf(" c) Reais -> Dolares\n");
    printf(" d) Celsius -> Fahrenheit\n");
    printf(" e) Graus -> Radianos\n");
    printf(" f) Antecessor e sucessor\n");
    printf(" g) Divisao de premio entre 3 ganhadores\n");
    printf(" h) URI 1019 - segundos -> h:m:s\n");
    printf(" i) URI 1017 - litros de combustivel gastos\n");
    printf(" j) URI 1013 - maior de tres valores (formula)\n");
    printf(" q) Sair\n");
    printf("=========================================\n");
    printf("Escolha uma opcao: ");
}

/* -------------------------------------------------------------
 * a) Ano de nascimento a partir da idade e do ano atual
 * ------------------------------------------------------------- */
void exercicioA(void) {
    int idade, anoAtual, anoNascimento;

    printf("Digite a idade da pessoa: ");
    scanf("%d", &idade);
    printf("Digite o ano atual: ");
    scanf("%d", &anoAtual);

    anoNascimento = anoAtual - idade;

    printf("Ano de nascimento: %d\n", anoNascimento);
}

/* -------------------------------------------------------------
 * b) km/h -> m/s   (M = K / 3.6)
 * ------------------------------------------------------------- */
void exercicioB(void) {
    double kmh, ms;

    printf("Digite a velocidade em km/h: ");
    scanf("%lf", &kmh);

    ms = kmh / 3.6;

    printf("Velocidade em m/s: %.2lf\n", ms);
}

/* -------------------------------------------------------------
 * c) Reais -> Dolares
 * ------------------------------------------------------------- */
void exercicioC(void) {
    double valorReais, cotacaoDolar, valorDolar;

    printf("Digite o valor em reais: ");
    scanf("%lf", &valorReais);
    printf("Digite a cotacao do dolar: ");
    scanf("%lf", &cotacaoDolar);

    valorDolar = valorReais / cotacaoDolar;

    printf("Valor em dolares: %.2lf\n", valorDolar);
}

/* -------------------------------------------------------------
 * d) Celsius -> Fahrenheit  (F = C * 9/5 + 32)
 * ------------------------------------------------------------- */
void exercicioD(void) {
    double celsius, fahrenheit;

    printf("Digite a temperatura em graus Celsius: ");
    scanf("%lf", &celsius);

    fahrenheit = celsius * (9.0 / 5.0) + 32.0;

    printf("Temperatura em Fahrenheit: %.2lf\n", fahrenheit);
}

/* -------------------------------------------------------------
 * e) Graus -> Radianos  (R = G * pi / 180)
 * ------------------------------------------------------------- */
void exercicioE(void) {
    double graus, radianos;
    const double PI = 3.141592;

    printf("Digite o angulo em graus: ");
    scanf("%lf", &graus);

    radianos = graus * PI / 180.0;

    printf("Angulo em radianos: %.6lf\n", radianos);
}

/* -------------------------------------------------------------
 * f) Antecessor e sucessor de um numero inteiro
 * ------------------------------------------------------------- */
void exercicioF(void) {
    int numero;

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    printf("Antecessor: %d\n", numero - 1);
    printf("Sucessor: %d\n", numero + 1);
}

/* -------------------------------------------------------------
 * g) Divisao de R$780.000,00 entre 3 ganhadores (46%, 32%, resto)
 * ------------------------------------------------------------- */
void exercicioG(void) {
    const double TOTAL = 780000.00;
    double primeiro, segundo, terceiro;

    primeiro = TOTAL * 0.46;
    segundo = TOTAL * 0.32;
    terceiro = TOTAL - (primeiro + segundo);

    printf("Primeiro ganhador recebe: R$ %.2lf\n", primeiro);
    printf("Segundo ganhador recebe: R$ %.2lf\n", segundo);
    printf("Terceiro ganhador recebe: R$ %.2lf\n", terceiro);
}

/* -------------------------------------------------------------
 * h) URI 1019 - segundos -> horas:minutos:segundos
 * ------------------------------------------------------------- */
void exercicioH(void) {
    int totalSegundos, horas, minutos, segundos;

    printf("Digite a duracao em segundos: ");
    scanf("%d", &totalSegundos);

    horas = totalSegundos / 3600;
    minutos = (totalSegundos % 3600) / 60;
    segundos = totalSegundos % 60;

    printf("%d:%d:%d\n", horas, minutos, segundos);
}

/* -------------------------------------------------------------
 * i) URI 1017 - litros de combustivel gastos (12 km/L)
 * ------------------------------------------------------------- */
void exercicioI(void) {
    double tempoHoras, velocidadeMedia, distancia, litros;
    const double KM_POR_LITRO = 12.0;

    printf("Digite o tempo da viagem (em horas): ");
    scanf("%lf", &tempoHoras);
    printf("Digite a velocidade media (em km/h): ");
    scanf("%lf", &velocidadeMedia);

    distancia = tempoHoras * velocidadeMedia;
    litros = distancia / KM_POR_LITRO;

    printf("%.3lf\n", litros);
}

/* -------------------------------------------------------------
 * j) URI 1013 - maior de tres valores usando formula
 *    max(a,b) = (a + b + |a - b|) / 2
 *    depois compara esse resultado com c da mesma forma.
 * ------------------------------------------------------------- */
void exercicioJ(void) {
    double a, b, c, maiorAB, maiorFinal;

    printf("Digite o primeiro valor (A): ");
    scanf("%lf", &a);
    printf("Digite o segundo valor (B): ");
    scanf("%lf", &b);
    printf("Digite o terceiro valor (C): ");
    scanf("%lf", &c);

    maiorAB = (a + b + fabs(a - b)) / 2.0;
    maiorFinal = (maiorAB + c + fabs(maiorAB - c)) / 2.0;

    printf("%.2lf eh o maior\n", maiorFinal);
}
