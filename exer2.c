#include <stdio.h>

int main()
{
    /* 1) Ano de nascimento */
    int idade, anoAtual, anoNascimento;

    printf("1) Digite sua idade: ");
    scanf("%d", &idade);

    printf("Digite o ano atual: ");
    scanf("%d", &anoAtual);

    anoNascimento = anoAtual - idade;

    printf("Ano de nascimento: %d\n\n", anoNascimento);


    /* 2) km/h para m/s */
    float km, ms;

    printf("2) Digite a velocidade em km/h: ");
    scanf("%f", &km);

    ms = km / 3.6;

    printf("Velocidade em m/s: %.2f\n\n", ms);


    /* 3) Reais para dolares */
    float reais, cotacao, dolares;

    printf("3) Digite o valor em reais: ");
    scanf("%f", &reais);

    printf("Digite a cotacao do dolar: ");
    scanf("%f", &cotacao);

    dolares = reais / cotacao;

    printf("Valor em dolares: %.2f\n\n", dolares);


    /* 4) Celsius para Fahrenheit */
    float celsius, fahrenheit;

    printf("4) Digite a temperatura em Celsius: ");
    scanf("%f", &celsius);

    fahrenheit = celsius * (9.0 / 5.0) + 32.0;

    printf("Temperatura em Fahrenheit: %.2f\n\n", fahrenheit);


    /* 5) Graus para radianos */
    float graus, radianos;
    float pi = 3.141592;

    printf("5) Digite o angulo em graus: ");
    scanf("%f", &graus);

    radianos = graus * pi / 180;

    printf("Angulo em radianos: %.4f\n\n", radianos);


    /* 6) Antecessor e sucessor */
    int numero;

    printf("6) Digite um numero inteiro: ");
    scanf("%d", &numero);

    printf("Antecessor: %d\n", numero - 1);
    printf("Sucessor: %d\n\n", numero + 1);


    /* 7) Divisao do premio */
    float premio = 780000;
    float primeiro, segundo, terceiro;

    primeiro = premio * 0.46;
    segundo = premio * 0.32;
    terceiro = premio - primeiro - segundo;

    printf("7) Primeiro ganhador: R$ %.2f\n", primeiro);
    printf("Segundo ganhador: R$ %.2f\n", segundo);
    printf("Terceiro ganhador: R$ %.2f\n\n", terceiro);


    /* 8) URI 1019 */
    int segundos, horas, minutos;

    printf("8) Digite o tempo em segundos: ");
    scanf("%d", &segundos);

    horas = segundos / 3600;
    segundos = segundos % 3600;

    minutos = segundos / 60;
    segundos = segundos % 60;

    printf("%d:%d:%d\n\n", horas, minutos, segundos);


    /* 9) URI 1017 */
    float tempo, velocidade, distancia, litros;

    printf("9) Digite o tempo da viagem: ");
    scanf("%f", &tempo);

    printf("Digite a velocidade media: ");
    scanf("%f", &velocidade);

    distancia = tempo * velocidade;
    litros = distancia / 12;

    printf("Litros gastos: %.3f\n\n", litros);


    /* 10) URI 1013 */
    int a, b, c, maior;

    printf("10) Digite tres valores: ");
    scanf("%d %d %d", &a, &b, &c);

    maior = a;

    if (b > maior)
    {
        maior = b;
    }

    if (c > maior)
    {
        maior = c;
    }

    printf("%d eh o maior\n", maior);

    return 0;
