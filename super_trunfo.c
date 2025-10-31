#include <stdio.h>
#include <math.h>

//Estrutura de dados que representa uma carta
struct card {
 	char state;
	char id[4];
	char city[50];
	unsigned long int population;
	float area;
	float pib;
	int touristAttractions;
	float populationDensity;
	float gdpPerCapita; //Pib per capita
	float superPower;
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
	card1.gdpPerCapita = card1.pib * pow(10,9) / card1.population;
	card1.superPower = (float) card1.population + (float) card1.touristAttractions + card1.area + card1.pib + card1.gdpPerCapita + (1/card1.populationDensity);

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
	card2.gdpPerCapita = card2.pib * pow(10,9) / card2.population;
	card2.superPower = (float) card2.population + (float) card2.touristAttractions + card2.area + card2.pib + card2.gdpPerCapita + (1/card2.populationDensity);


	printf("---------------------------------------------------------------");
	printf("\nVISUALIZAÇÃO DE DADOS\n");
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

	//comparações feitas usando operador ternário para facilitar a legibilidade.
	printf("---------------------------------------------------------------");
	printf("\nComparação de dados\n");
	printf("\nPopulação: %s", card1.population > card2.population ? "Carta 1 venceu (1)" : "Carta 2 venceu (0)");
	printf("\nÁrea: %s", card1.area > card2.area ? "Carta 1 venceu (1)" : "Carta 2 venceu (0)");
	printf("\nPIB: %s", card1.pib > card2.pib ? "Carta 1 venceu (1)" : "Carta 2 venceu (0)");
	printf("\nPontos turísticos: %s", card1.touristAttractions > card2.touristAttractions ? "Carta 1 venceu (1)" : "Carta 2 venceu (0)");
	printf("\nDensidade populacional: %s", card1.populationDensity < card2.populationDensity ? "Carta 1 venceu (1)" : "Carta 2 venceu (0)");
	printf("\nPib per capita: %s", card1.gdpPerCapita > card2.gdpPerCapita ? "Carta 1 venceu (1)" : "Carta 2 venceu (0)");
	printf("\nSuper poder: %s\n", card1.superPower > card2.superPower ? "Carta 1 venceu (1)" : "Carta 2 venceu (0)");


	return 0;
}
