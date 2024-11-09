#include <stdio.h>

int main() {
//Código do desafio anterior com adaptações. 

 //Nome do jogo com dois espaços para melhor visualização.   
    printf("SuperTrunfo países \n \n");
    
 //Definição de variáveis a serem trabalhadas 

    int populacao1, populacao2, pontosturisticos1, pontosturisticos2;
    char pais[50], estado[50], cidade1[50], cidade2[50], codigo1[50], codigo2[50];
    float area1, area2, pib1, pib2, densidadepopulacional1, pibpercapita1, densidadepopulacional2, pibpercapita2;

//Cadastro das cartas com a interação do usuário no terminal

    printf("Vamos cadastrar o país! \n");    
    printf("Insira o nome do país: \n");
    scanf("%s", &pais);

    printf("Agora, vamos cadastrar o estado! \n");    
    printf("Insira o nome do estado: \n");
    scanf("%s", &estado);
    
    printf("\nAgora chegou o momento de cadastrar informações sobre as cidades! \n");

    printf("Cadastre um código para sua primeira carta: (Lembre-se, os códigos devem ter 3 caracteres, uma letra de A a H (representando um estado), e números de 01 a 04 (representando os municípios)\n");
    scanf("%s", &codigo1);

    printf("Informe o nome da primeira cidade: \n");
    scanf ("%s", &cidade1);
    
    printf("Informe a população dessa cidade: \n");
    scanf("%d", &populacao1);

    printf("Qual a área territorial dessa cidade? \n");
    scanf(" %f", &area1);

    printf("Qual o PIB dessa cidade? \n");
    scanf("%f", &pib1);

    printf("Informe o número de pontos turísticos dessa cidade: \n");
    scanf("%d", &pontosturisticos1);

//Cálculo de variáveis iniciais

    densidadepopulacional1 = (float)populacao1/area1;
    pibpercapita1 = pib1/(float)populacao1;

//Cadastro da segunda carta com interação de usuário

    printf("\nCadastre um código para sua segunda carta: (Lembre-se, os códigos devem ter 3 caracteres, uma letra de A a H (representando um estado), e números de 01 a 04 (representando os municípios)\n");
    scanf("%s", &codigo2);

    printf("Informe o nome da segunda cidade: \n");
    scanf ("%s", &cidade2);
    
    printf("Informe a população dessa cidade: \n");
    scanf("%d", &populacao2);

    printf("Qual a área territorial dessa cidade? \n");
    scanf(" %f", &area2);

    printf("Qual o PIB dessa cidade? \n");
    scanf("%f", &pib2);

    printf("Informe o número de pontos turísticos dessa cidade: \n");
    scanf("%d", &pontosturisticos2);

//Cálculo de variáveis

    densidadepopulacional2 = (float)populacao2/area2;
    pibpercapita2 = pib2/(float)populacao2;

//Agora, a apresentação dos dados coletados:

    printf("\nVeja informações da cidade escolhida com base nas informaçãoes preenchidas: \n");
    printf("\nPaís: %s - Estado: %s", pais, estado);
    printf("Cidade 1: %s\n", cidade1);
    printf("Código da carta 1: %s\n", codigo1);
    printf("A população dessa cidade é de %d\n",populacao1);
    printf("A área territorial dessa cidade é de %.2f\n",area1);
    printf("O PIB dessa cidade é %.2f\n",pib1);
    printf("Essa cidade tem %d pontos turísticos.\n", pontosturisticos1);
    printf("A densidade populacional é de: %.2f\n", densidadepopulacional1);
    printf("O PIB per capita é de: %.2f\n", pibpercapita1);

   
    printf("\nCidade 2: %s\n", cidade2);
    printf("Código da carta 2: %s\n", codigo2);
    printf("A população dessa cidade é de %d\n",populacao2);
    printf("A área territorial dessa cidade é de %.2f\n",area2);
    printf("O PIB dessa cidade é %.2f\n",pib2);
    printf("Essa cidade tem %d pontos turísticos.\n", pontosturisticos2);
    printf("A densidade populacional é de: %.2f\n", densidadepopulacional2);
    printf("O PIB per capita é de: %.2f\n", pibpercapita2);

//Início de implantação do código do novo desafio utilizando if/else

    printf("Vamos comparar os resultados das cidades:\n\n");

    if(populacao1>populacao2){
        printf("A cidade 1 tem a maior população.\n");
    }else{
        printf("A cidade 2 tem a maior população.\n");
    }

    if(area1>area2){
        printf("A cidade 1 tem maior área territorial.\n");
    }else{
        printf("A cidade 2 tem maior área territorial.\n");
    }

    if(pib1>pib2){
        printf("A cidade 1 tem maior PIB. \n");
    }else{
        printf("A cidade 2 tem maior PIB.\n");
    }

    if(pontosturisticos1>pontosturisticos2){
        printf("A cidade 1 tem mais pontos turísticos.\n");
    }else{
        printf("A cidade 2 tem mais pontos turísticos. \n");
    }

    if (densidadepopulacional1<densidadepopulacional2){
        printf("A cidade 1 tem menor densidade populacional. \n");
    }else{
        printf("A cidade 2 tem menor densidade populacional. \n");
    }
    if(pibpercapita1>pibpercapita2){
        printf("A cidade 1 tem maior PIB per capita. \n");
    }else{
    printf("A cidade 2 tem maior PIB per capita. \n");
    }




    printf("\nVamos aos resultados?\n");
    printf(" Qual cidade com menor Densidade populacional? %d\n", densidadepopulacional1 < densidadepopulacional2);
    printf(" A cidade com maior PIB per capita é a cidade 1? %d\n", pibpercapita1 > pibpercapita2);
   

    return 0;
}

    // Exemplo:
    // if (populacaoA > populacaoB) {
    //     printf("Cidade 1 tem maior população.\n");
    // } else {
    //     printf("Cidade 2 tem maior população.\n");
    // }

    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);


