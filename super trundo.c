    #include <stdio.h>

int main(){
    char estado;

    char codigo_da_carta[100];

    char nome_da_cidade[100];

    int População;

    float Area_em_km;

    float PIB;

    int pontos_Turisticos;


    printf("Diga-me um estado?: \n");
    scanf("%s", &estado);

    printf("Diga-me o codigo da cidade?: \n");
    scanf("%s", &codigo_da_carta);

    printf("Diga-me uma cidade?: \n");
    scanf("%s", &nome_da_cidade);

    printf("Diga-me a população da cidade selecionada?: \n");
    scanf("%d", &População);

    printf("Diga-me a área em km² da sua cidade?: \n");
    scanf("%f", &Area_em_km);

    printf("Diga-me o PIB da cidade selecionada?: \n");
    scanf("%f", &PIB);

    printf("Diga-me quantos pontos turisticois tem a cidade selecionada/: \n");
    scanf("%d", &pontos_Turisticos);

    // __________________________________________________________________________
    printf("\n");

    printf("Sua carta esta pronta!\n");

    printf("\n");

    printf("Estado: %s\n", &estado);

    printf("Codigo da cidade: %s\n", codigo_da_carta);

    printf("cidade: %s\n", nome_da_cidade);

    printf("População: %d\n", População);

    printf("Área: %.2f\n", Area_em_km);

    printf("PIB: %d\n", PIB);

    printf("Numero de Pontos Turisticos: %d\n", pontos_Turisticos);

    printf("\n");

    printf("Proxima carta");
    // _________________________________________________________________________
    printf("\n");
    
    printf("Diga-me um estado?: \n");
    scanf("%s", &estado);

    printf("Diga-me o codigo da cidade?: \n");
    scanf("%s", &codigo_da_carta);

    printf("Diga-me uma cidade?: \n");
    scanf("%s", &nome_da_cidade);

    printf("Diga-me a população da cidade selecionada?: \n");
    scanf("%d", &População);

    printf("Diga-me a área em km² da sua cidade?: \n");
    scanf("%f", &Area_em_km);

    printf("Diga-me o PIB da cidade selecionada?: \n");
    scanf("%f", &PIB);

    printf("Diga-me quantos pontos turisticois tem a cidade selecionada/: \n");
    scanf("%d", &pontos_Turisticos);

    printf("\n");

    // _________________________________________________________________________

    printf("\n");

    printf("A segunda carta esta pronta!\n");

    printf("\n");

    printf("Estado: %s\n", &estado);

    printf("Codigo da cidade: %s\n", codigo_da_carta);

    printf("cidade: %s\n", nome_da_cidade);

    printf("População: %d\n", População);

    printf("Área: %.2f\n", Area_em_km);

    printf("PIB: %d\n", PIB);

    printf("Numero de Pontos Turisticos: %d\n", pontos_Turisticos);






}
