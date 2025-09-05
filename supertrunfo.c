
#include <stdio.h>
#include <locale.h>



int main(){
    setlocale(LC_ALL, "Portuguese");

    //variaveis da primeira carta
    char estado1, codigo1[5], cidade1[20];
    int pontosTuristicos1, soma1;
    unsigned long int populacao1;
    float area1, PIB1, densidade1, PIBPerCapita1, poder1;

    //variaveis da segunda carta
    char estado2, codigo2[5], cidade2[20];
    int pontosTuristicos2;
    unsigned long int populacao2, soma2;
    float area2, PIB2, densidade2, PIBPerCapita2, poder2;

    int opcao = 0;
    int escolha1, escolha2 = 0;



    //loop para rodar o menu e a escolha do usuario
     while (opcao != 5){
        printf("----------super trunfo----------\n");
        printf("o que deseja fazer?\n");
        printf(" 1. criar cartas \n 2. batalhar \n 3. ver cartas \n 4. ler regras \n 5. sair\n");
        scanf("%d",&opcao);
        printf("\n\n");


        switch (opcao)
        {
        case 1:
            //criando a primera carta
            printf("carta 1 \n");
            printf("estado: ");
            scanf(" %c",&estado1);
            printf("codigo da carta: ");
            scanf("%s",codigo1);
            printf("cidade: ");
            scanf("%s",cidade1);
            printf("populacao: ");
            scanf("%lu",&populacao1);
            printf("area (em km²): ");
            scanf("%f",&area1);
            printf("PIB: ");
            scanf("%f",&PIB1);
            printf("numero de pontos turisticos: ");
            scanf("%d",&pontosTuristicos1);

            densidade1 = populacao1 / area1;
            PIBPerCapita1 = PIB1 / populacao1;
            poder1 = populacao1 + area1 + PIB1 + pontosTuristicos1 + PIBPerCapita1 + (1.0 / densidade1);

            printf("\n\n");

            //criando a segunda carta
            printf("carta 2 \n");
            printf("estado: ");
            scanf(" %c",&estado2);
            printf("codigo da carta: ");
            scanf("%s",codigo2);
            printf("cidade: ");
            scanf("%s",cidade2);
            printf("populacao: ");
            scanf("%lu",&populacao2);
            printf("area (em km²): ");
            scanf("%f",&area2);
            printf("PIB: ");
            scanf("%f",&PIB2);
            printf("numero de pontos turisticos: ");
            scanf("%d",&pontosTuristicos2);

            densidade2 = populacao2 / area2;
            PIBPerCapita2 = PIB2 / populacao2;
            poder2 = populacao2 + area2 + PIB2 + pontosTuristicos2 + PIBPerCapita2 + (1.0 / densidade2);

            printf("\n\n");

            break;
        case 2:
            
            printf("comparando cartas\n");
            printf("escolha o primeiro atributo para comparacao\n");
            printf(" 1. populacao \n 2. area \n 3. PIB \n 4. quantidade de pontos turisticos \n 5. densidade populacional \n 6. PIB per capita \n 7. poder \n");
            scanf("%d",&escolha1); 
            
            printf("escolha outro atributo\n");
            //logica para nao exibir a opcao de um atributo ja escolhido
            for(int i = 1;i <= 7;i ++){
            if (i != escolha1){
                switch (i)
                {
                case 1:
                    printf(" 1. populacao \n");
                    break;
                case 2:
                    printf(" 2. area \n");
                    break;
                case 3:
                    printf(" 3. PIB \n");
                    break;  
                case 4:
                    printf(" 4. quantidade de pontos turisticos \n");
                    break; 
                case 5:
                    printf(" 5. densidade populacional \n");
                    break; 
                case 6:
                    printf(" 6. PIB per capita \n");
                    break; 
                case 7:
                    printf(" 7. poder \n");
                    break;   
                }
            }}
            scanf("%d",&escolha2);

            //logica para finalizar o codigo com mensagem de erro caso o mesmo atributo seja selecionado duas vezes
            if(escolha1 == escolha2){
                printf("erro voce deve escolher um atributo valido\n");
            }else{

                printf("---atributo 1---\n");
                switch (escolha1){
                case 1:
                printf("populacao da cidade:\n");
                if(populacao1 > populacao2){
                    soma1 ++;
                    printf("carta 1 (%s) venceu a rodada\n",cidade1);
                    printf("populacao: %lu \n",populacao1);
                }else if(populacao2 > populacao1){
                    soma2 ++;
                    printf("carta 2 (%s) venceu a rodada\n",cidade2);
                    printf("populacao: %lu \n",populacao2);
                }else{
                    printf("empate!\n");
                }
                    break;
                case 2:
                if(area1 > area2){
                    soma1 ++;
                    printf("carta 1 (%s) venceu a rodada\n",cidade1);
                    printf("area: %.2f \n",area1);
                }else if(area2 > area1){
                    soma2 ++;
                    printf("carta 2 (%s) venceu a rodada\n",cidade2);
                    printf("area: %.2f \n",area2);
                }else{
                    printf("empate!\n");
                }
                    break;
                case 3:
                if(PIB1 > PIB2){
                    soma1 ++;
                    printf("carta 1 (%s) venceu a rodada\n",cidade1);
                    printf("PIB: %.2f \n",PIB1);
                }else if(PIB2 > PIB1){
                    soma2 ++;
                    printf("carta 2 (%s) venceu a rodada\n",cidade2);
                    printf("PIB: %.2f \n",PIB2);
                }else{
                    printf("empate!\n");
                }
                    break;
                case 4:
                if(pontosTuristicos1 > pontosTuristicos2){
                    soma1 ++;
                    printf("carta 1 (%s) venceu a rodada\n",cidade1);
                    printf("quantidade de pontos turisticos: %d \n",pontosTuristicos1);
                }else if(pontosTuristicos2 > pontosTuristicos1){
                    soma2 ++;
                    printf("carta 2 (%s) venceu a rodada\n",cidade2);
                    printf("quantidade de pontos turisticos: %d \n",pontosTuristicos2);
                }else{
                    printf("empate!\n");
                }
                    break;
                case 5:
                if(densidade1 < densidade2){
                    soma1 ++;
                    printf("carta 1 (%s) venceu a rodada\n",cidade1);
                    printf("densidade populacional: %.2f \n",densidade1);
                }else if(densidade2 < densidade1){
                    soma2 ++;
                    printf("carta 2 (%s) venceu a rodada\n",cidade2);
                    printf("densidade populacional: %.2f \n",densidade2);
                }else{
                    printf("empate!\n");
                }
                    break;
                case 6:
                if(PIBPerCapita1 > PIBPerCapita2){
                    soma1 ++;
                    printf("carta 1 (%s) venceu a rodada\n",cidade1);
                    printf("PIB Per Capita: %.2f \n",PIBPerCapita1);
                }else if(PIBPerCapita2 > PIBPerCapita1){
                    soma2 ++;
                    printf("carta 2 (%s) venceu a rodada\n",cidade2);
                    printf("PIB Per Capita: %.2f \n",PIBPerCapita2);
                }else{
                    printf("empate!\n");
                }
                    break;
                case 7:
                if(poder1 > poder2){
                    soma1 ++;
                    printf("carta 1 (%s) venceu a rodada\n",cidade1);
                    printf("Poder: %.2f \n",poder1);
                }else if(poder2 > poder1){
                    soma2 ++;
                    printf("carta 2 (%s) venceu a rodada\n",cidade2);
                    printf("Poder: %.2f \n",poder2);
                }else{
                    printf("empate!\n");
                }
                    break;
                default:
                    break;
                }

                printf("---atributo 2---\n");
                switch (escolha2){
                case 1:
                printf("populacao da cidade:\n");
                if(populacao1 > populacao2){
                    soma1 ++;
                    printf("carta 1 (%s) venceu a rodada\n",cidade1);
                    printf("populacao: %lu \n",populacao1);
                }else if(populacao2 > populacao1){
                    soma2 ++;
                    printf("carta 2 (%s) venceu a rodada\n",cidade2);
                    printf("populacao: %lu \n",populacao2);
                }else{
                    printf("empate!\n");
                }
                    break;
                case 2:
                if(area1 > area2){
                    soma1 ++;
                    printf("carta 1 (%s) venceu a rodada\n",cidade1);
                    printf("area: %.2f \n",area1);
                }else if(area2 > area1){
                    soma2 ++;
                    printf("carta 2 (%s) venceu a rodada\n",cidade2);
                    printf("area: %.2f \n",area2);
                }else{
                    printf("empate!\n");
                }
                    break;
                case 3:
                if(PIB1 > PIB2){
                    soma1 ++;
                    printf("carta 1 (%s) venceu a rodada\n",cidade1);
                    printf("PIB: %.2f \n",PIB1);
                }else if(PIB2 > PIB1){
                    soma2 ++;
                    printf("carta 2 (%s) venceu a rodada\n",cidade2);
                    printf("PIB: %.2f \n",PIB2);
                }else{
                    printf("empate!\n");
                }
                    break;
                case 4:
                if(pontosTuristicos1 > pontosTuristicos2){
                    soma1 ++;
                    printf("carta 1 (%s) venceu a rodada\n",cidade1);
                    printf("quantidade de pontos turisticos: %d \n",pontosTuristicos1);
                }else if(pontosTuristicos2 > pontosTuristicos1){
                    soma2 ++;
                    printf("carta 2 (%s) venceu a rodada\n",cidade2);
                    printf("quantidade de pontos turisticos: %d \n",pontosTuristicos2);
                }else{
                    printf("empate!\n");
                }
                    break;
                case 5:
                if(densidade1 < densidade2){
                    soma1 ++;
                    printf("carta 1 (%s) venceu a rodada\n",cidade1);
                    printf("densidade populacional: %.2f \n",densidade1);
                }else if(densidade2 < densidade1){
                    soma2 ++;
                    printf("carta 2 (%s) venceu a rodada\n",cidade2);
                    printf("densidade populacional: %.2f \n",densidade2);
                }else{
                    printf("empate!\n");
                }
                    break;
                case 6:
                if(PIBPerCapita1 > PIBPerCapita2){
                    soma1 ++;
                    printf("carta 1 (%s) venceu a rodada\n",cidade1);
                    printf("PIB Per Capita: %.2f \n",PIBPerCapita1);
                }else if(PIBPerCapita2 > PIBPerCapita1){
                    soma2 ++;
                    printf("carta 2 (%s) venceu a rodada\n",cidade2);
                    printf("PIB Per Capita: %.2f \n",PIBPerCapita2);
                }else{
                    printf("empate!\n");
                }
                    break;
                case 7:
                if(poder1 > poder2){
                    soma1 ++;
                    printf("carta 1 (%s) venceu a rodada\n",cidade1);
                    printf("Poder: %.2f \n",poder1);
                }else if(poder2 > poder1){
                    soma2 ++;
                    printf("carta 2 (%s) venceu a rodada\n",cidade2);
                    printf("Poder: %.2f \n",poder2);
                }else{
                    printf("empate!\n");
                }
                    break;
                default:
                    break;
                }

                //exibicao da pontuacao final e a carta vencedora 
                printf("------resultado final------\n");
                printf("carta 1: %s | ",cidade1);
                printf("pontuacao: %d pontos\n",soma1);

                printf("carta 2: %s | ",cidade2);
                printf("pontuacao: %d pontos\n",soma2);
                if (soma1 > soma2){
                    printf("-------------------");
                    printf("a carta 1 venceu!!!");
                    printf("-------------------");
                }else if(soma2 > soma1){
                    printf("-------------------");
                    printf("a carta 2 venceu!!!");
                    printf("-------------------");
                }else{
                    printf("empate!!! nenhuma carta venceu!");
                }
                
            
            }
            
            break;
        case 3:
            //mostra a carta criada
            printf("-------carta 1------- \n");
            printf("estado: %c \n",estado1);
            printf("codigo da carta: %s \n",codigo1);
            printf("nome da cidade: %s \n",cidade1);
            printf("populacao: %lu \n",populacao1);
            printf("area: %.2f km2 \n",area1);
            printf("PIB: %.2f reais \n",PIB1);
            printf("numero de pontos turisticos: %d \n",pontosTuristicos1);
            printf("densidade populacional: %.2f hab/km2\n ",densidade1);
            printf("PIB per capita: %.2f reais \n", PIBPerCapita1);
            printf("o poder desta carta e: %.2f",poder1);

            printf("\n");

            //mostra a carta criada
            printf("-------carta 2------- \n");
            printf("estado: %c \n",estado2);
            printf("codigo da carta: %s \n",codigo2);
            printf("nome da cidade: %s \n",cidade2);
            printf("populacao: %lu \n",populacao2);
            printf("area: %.2f km2 \n",area2);
            printf("PIB: %.2f reais \n",PIB2);
            printf("numero de pontos turisticos: %d \n",pontosTuristicos2);
            printf("densidade populacional: %.2f hab/km2 \n",densidade2);
            printf("PIB per capita: %.2f reais \n", PIBPerCapita2);
            printf("o poder desta carta e: %.2f",poder2);

            printf("\n\n");

            break;
        case 4:
            //regras do jogo
            printf("----REGRAS SUPERTRUNFO----\n");
            printf("1. crie duas cartas\n");
            printf("2. selecione dois atributos para serem usados na batalha\n");
            printf("2.1 a carta com os melhores atributos vence a rodada");
            printf("2.2 duas rodadas de batalha com os dois atributos selecionados e o resultado sera exibido no final.\n\n");
            break;
        case 5:
            printf("saindo....");
            break;
        default:
            printf("escolha uma opcao valida\n");
            break;
        }

     }
   
    return 0;
}
