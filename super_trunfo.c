#include <stdio.h>
#include <string.h>

//Estrutura de dados que representa uma carta
struct card {
 	char state;
	char id[4];
	char city[50];
	int population;
	float area;
	float pib;
	int touristAttractions;
	float populationDensity;
	float gdpPerCapita; //Pib per capita
};

int main () {

	printf("Boas vindas ao Super trunfo C.");
	printf("\nCadastre 2 cartas");	

	struct card card1, card2;
	printf("\nDados da carta 1\n");

    printf("Estado: ");
    scanf(" %c", &card1.state); 

    printf("Código (Estado + numero da carta. Ex: A01): ");
    scanf("%s", card1.id); 

    printf("Nome da cidade: ");
    scanf(" %49[^\n]", card1.city); //scanf retirando a quebra delinha

	printf("Número de habitantes: ");
	scanf("%d", &card1.population);

	printf("Area (km²): ");
	scanf("%f", &card1.area);

	printf("PIB(bilhões): ");
	scanf("%f", &card1.pib);

	printf("Quantidade de pontos turísticos: ");
	scanf("%d", &card1.touristAttractions);

	//Cálculos
	card1.populationDensity = card1.population / card1.area;
	card1.gdpPerCapita = card1.pib * 1000000000 / card1.population;


	printf("\nInsira os dados da carta 2\n");
    printf("Estado: ");
    scanf(" %c", &card2.state); 

    printf("Código (Estado + numero da carta. Ex: A01): ");
    scanf("%s", card2.id); 

    printf("Nome da cidade: ");
    scanf(" %49[^\n]", card2.city); //scanf retirando a quebra delinha

	printf("Número de habitantes: ");
	scanf("%d", &card2.population);

	printf("Area (km²): ");
	scanf("%f", &card2.area);

	printf("PIB(bilhões): ");
	scanf("%f", &card2.pib);

	printf("Quantidade de pontos turísticos: ");
	scanf("%d", &card2.touristAttractions);

	card2.populationDensity = card2.population / card2.area;
	card2.gdpPerCapita = card2.pib * 1000000000 / card2.population;

	printf("\n\nVISUALIZAÇÃO DE DADOS\n\n");
	printf("\nDados da carta 1");
	printf("\nEstado: %c", card1.state);
	printf("\nCódigo: %s", card1.id);
	printf("\nNome da cidade: %s", card1.city);
	printf("\nPopulação: %d", card1.population);
	printf("\nÁrea: %.2f km²", card1.area);
	printf("\nPIB: %.2f bilhões de reais", card1.pib);
	printf("\nNúmero de pontos turísticos: %d", card1.touristAttractions);
	printf("\nDensidade populacional: %.2f hab/km²", card1.populationDensity);
	printf("\nPib per capita: %.2f reais\n", card1.gdpPerCapita);

	printf("\nDados da carta 2");
	printf("\nEstado: %c", card2.state);
	printf("\nCódigo: %s", card2.id);
	printf("\nNome da cidade: %s", card2.city);
	printf("\nPopulação: %d", card2.population);
	printf("\nÁrea: %.2f km²", card2.area);
	printf("\nPIB: %.2f bilhões de reais", card2.pib);
	printf("\nNúmero de pontos turísticos: %d", card2.touristAttractions);
	printf("\nDensidade populacional: %.2f hab/km²", card2.populationDensity);
	printf("\nPib per capita: %.2f reais\n", card2.gdpPerCapita);

	return 0;
}
