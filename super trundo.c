    #include <stdio.h>

    int main(){

    char A[50];

    char A01[200];

    char nome_da_cidade[200];

    int Populaçao;

    float Area_em_km;

    int PIB;

    int pontos_Turisticos;

    printf("Carta 1");

    printf("\n"); 

    printf("Diga-me um estado?: \n");
    scanf("%s", &A);

    printf("Diga-me o codigo da cidade?: \n");
    scanf("%s", &A01);

    printf("Diga-me uma cidade?: \n");
    scanf("%s", &nome_da_cidade);

    printf("Diga-me a população da cidade selecionada: \n");
    scanf("%d", &Populaçao);

    printf("Diga-me a área em km² da sua cidade?: \n");
    scanf("%f", &Area_em_km);

    printf("Diga-me o PIB da cidade selecionada?: \n");
    scanf("%d", &PIB);

    printf("Diga-me quantos pontos turisticois tem a cidade selecionada/: \n");
    scanf("%d", &pontos_Turisticos);

    // __________________________________________________________________________
    printf("\n"); //Para pular espaço
    
    printf("Estado: %s\n", &A);

    printf("Codigo da cidade: %s\n", &A01);

    printf("cidade: %s\n", nome_da_cidade);

    printf("População: %d\n", Populaçao);

    printf("Área: %.2f\n", Area_em_km);

    printf("PIB: %d\n", PIB);

    printf("Numero de Pontos Turisticos: %d\n", pontos_Turisticos);


    //______________________________________________________
    
    printf("\n"); //Para pular espaço

    printf("Sua carta esta pronta!\n");

    printf("\n");

    printf("Carta 2");

    printf("\n"); //Para pular espaço

    printf("Diga-me um estado?: \n");
    scanf("%s", &A);

    printf("dDiga-me o codigo da cidade?: \n");
    scanf("%s", &A01);

    printf("Diga-me uma cidade?: \n");
    scanf("%s", &nome_da_cidade);

    printf("Diga-me a população da cidade selecionada: \n");
    scanf("%d", &Populaçao);

    printf("Diga-me a área em km² da sua cidade?: \n");
    scanf("%f", &Area_em_km);

    printf("Diga-me o PIB da cidade selecionada?: \n");
    scanf("%d", &PIB);

    printf("Diga-me quantos pontos turisticois tem a cidade selecionada/: \n");
    scanf("%d", &pontos_Turisticos);

    printf("\n");//Para pular espaço

    printf("Carta 2");
    // __________________________________________________________________________

    printf("\n"); //Para pular espaço

    printf("\n");

    printf("Estado: %s\n", &A);

    printf("Codigo da cidade: %f\n", &A01);

    printf("cidade: %s\n", nome_da_cidade);

    printf("População: %d\n", Populaçao);

    printf("Área: %.2f\n", Area_em_km);

    printf("PIB: %d\n", PIB);

    printf("Numero de Pontos Turisticos: %d\n", pontos_Turisticos);

    printf("\n"); //Para pular espaço

    printf("Sua carta esta pronta!\n");
    
}





}
