#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int veiculo = 0, motor = 0, cilindrada = 0, escolha3 = 0, combustivel = 0;
    float escolha2 = 0.0;
    char escolha1[10], escolha4[10];
    bool car, moto;
    
    //Entrada de dados, onde o usuário escolhe se quer verificar o consumo de seu Carro ou de sua Moto.
    do {
        printf("Escolha um veiculo \n");
        printf("1. Carro \n");
        printf("2. Moto \n");
        scanf("%d",&veiculo);
        printf("\n");
        if (veiculo < 1 || veiculo > 2)
        {
            printf("Digite 1 para Carro ou 2 para Moto.\n\n");
        }
    } while (veiculo < 1 || veiculo > 2);
    
    //Parte de armazenamento da informação que o usuário inseriu anteriormente
    if (veiculo == 1){
        car=true;
        strcpy(escolha1, "Carro");
    }
    else
    {
        moto=true;
        strcpy(escolha1, "Moto");
    }

    //Verificar a potência do motor do carro
    if (car == true)
    {
        do
        {
            printf("Qual a potencia do motor? \n");
            printf("1. 1.0: \n");
            printf("2. 1.4: \n");
            printf("3. 1.6: \n");
            printf("4. 2.0: \n");
            printf("5. 2.2: \n");
            printf("6. 2.6: \n");
            printf("7. 2.8: \n");
            printf("8. 3.0: \n");
            printf("Digita o valor correspondente a potencia do motor: ");
            scanf("%d",&motor);
            printf("\n");
            if (motor > 8 || motor < 1)
            {
                printf("Escolha um numero entre 1 e 8, correspondente a potencia do motor do carro: \n\n");
            }
        } while (motor > 8 || motor < 1); 
    }

    if (moto == true)
    {
        do
        {
            printf("Quantas cilindradas possui o motor? \n");
            printf("1. 100: \n");
            printf("2. 125: \n");
            printf("3. 160: \n");
            printf("4. 250: \n");
            printf("5. 300: \n");
            printf("6. 400: \n");
            printf("7. 500: \n");
            printf("8. 600: \n");
            scanf("%d",&cilindrada);
            printf("\n");

            if (cilindrada > 8 || cilindrada < 1)
            {
                printf("Escolha a potencia entre 1 e 8: \n\n");
            }
            
        } while (cilindrada > 8 || cilindrada < 1);
    }

    do 
    {
        printf("Qual o tipo de combustivel que o veiculo consome? \n");
        printf("1. Gasolina: \n");
        printf("2. Etanol: \n");
        scanf("%d",&combustivel);
        printf("\n");
        if (combustivel > 2 || combustivel < 1)
        {
            printf("Por favor, insira 1 para Gasolina ou 2 para Etanol.");
        }
        
    } while (combustivel > 2 || combustivel < 1);
    
    //Saída de emissão de CO2 / Km dos carros, baseado na potência do motor
    if (motor == 1 && combustivel == 1)
    {
        printf("-----------------------\n");
        printf("Emissao de CO2 / Km : 1.741g \n");
        printf("-----------------------\n");    
        strcpy(escolha4, "Gasolina");
        printf("\n");
    }

    if (motor == 1 && combustivel == 2)
    {
        printf("-----------------------\n");
        printf("Emissao de CO2 / Km : 0.871g \n");
        printf("-----------------------\n");
        strcpy(escolha4, "Etanol");
        printf("\n");
    }

    if (motor == 2 && combustivel == 1)
    {
        printf("-----------------------\n");
        printf("Emissao de CO2 / Km : 2.605g \n");
        printf("-----------------------\n");    
        strcpy(escolha4, "Gasolina");
        printf("\n");
    }

    if (motor == 2 && combustivel == 2){
        printf("-----------------------\n");
        printf("Emissao de CO2 / Km : 1.302g \n");
        printf("-----------------------\n");    
        strcpy(escolha4, "Etanol");
        printf("\n");
    }

    if (motor == 3 && combustivel == 1)
    {
        printf("-----------------------\n");
        printf("Emissao de CO2 / Km : 2.660g \n");
        printf("-----------------------\n");    
        strcpy(escolha4, "Gasolina");
        printf("\n");
    }

    if (motor == 3 && combustivel == 2)
    {
        printf("-----------------------\n");
        printf("Emissao de CO2 / Km : 1.330g \n");
        printf("-----------------------\n");    
        strcpy(escolha4, "Etanol");
        printf("\n");
    }

    if (motor == 4 && combustivel == 1)
    {
        printf("-----------------------\n");
        printf("Emissao de CO2 / Km : 3.049g \n");
        printf("-----------------------\n");    
        strcpy(escolha4, "Gasolina");
        printf("\n");
    }

    if (motor == 4 && combustivel == 2)
    {
        printf("-----------------------\n");
        printf("Emissao de CO2 / Km : 1.524g \n");
        printf("-----------------------\n");    
        strcpy(escolha4, "Etanol");
        printf("\n");
    }
    
    if (motor == 5 && combustivel == 1)
    {
        printf("-----------------------\n");
        printf("Emissao de CO2 / Km : 3.190g \n");
        printf("-----------------------\n");    
        strcpy(escolha4, "Gasolina");
        printf("\n");
    }

    if (motor == 5 && combustivel == 2)
    {
        printf("-----------------------\n");
        printf("Emissao de CO2 / Km : 1.690g \n");
        printf("-----------------------\n");    
        strcpy(escolha4, "Etanol");
        printf("\n");
    }

    if (motor == 6 && combustivel == 1)
    {
        printf("-----------------------\n");
        printf("Emissao de CO2 / Km : 3.371g \n");
        printf("-----------------------\n");    
        strcpy(escolha4, "Gasolina");
        printf("\n");
    }

    if (motor == 6 && combustivel == 2)
    {
        printf("-----------------------\n");
        printf("Emissao de CO2 / Km : 1.812g \n");
        printf("-----------------------\n");    
        strcpy(escolha4, "Etanol");
        printf("\n");
    }

    if (motor == 7 && combustivel == 1)
    {
        printf("-----------------------\n");
        printf("Emissao de CO2 / Km : 3.517g \n");
        printf("-----------------------\n");    
        strcpy(escolha4, "Gasolina");
        printf("\n");
    }

    if (motor == 7 && combustivel == 2)
    {
        printf("-----------------------\n");
        printf("Emissao de CO2 / Km : 2.062g \n");
        printf("-----------------------\n");    
        strcpy(escolha4, "Etanol");
        printf("\n");
    }

    if (motor == 8 && combustivel == 1)
    {
        printf("-----------------------\n");
        printf("Emissao de CO2 / Km : 3.924g \n");
        printf("-----------------------\n");    
        strcpy(escolha4, "Gasolina");
        printf("\n");
    }

    if (motor == 8 && combustivel == 2)
    {
        printf("-----------------------\n");
        printf("Emissao de CO2 / Km : 2.135g \n");
        printf("-----------------------\n");    
        strcpy(escolha4, "Etanol");
        printf("\n");
    }

    //Saída de emissão de CO2 / Km das motos, baseado nas cilindradas do motor
    if (cilindrada == 1 && combustivel == 1)
    {
        printf("-----------------------\n");
        printf("Emissao de CO2 / Km : 0.720g \n");
        printf("-----------------------\n");    
        strcpy(escolha4, "Gasolina");
        printf("\n");
    }

    if (cilindrada == 1 && combustivel == 2)
    {
        printf("-----------------------\n");
        printf("Emissao de CO2 / Km : 0.280g \n");
        printf("-----------------------\n");    
        strcpy(escolha4, "Etanol");
        printf("\n");
    }

    if (cilindrada == 2 && combustivel == 1)
    {
        printf("-----------------------\n");
        printf("Emissao de CO2 / Km : 0.760g \n");
        printf("-----------------------\n");    
        strcpy(escolha4, "Gasolina");
        printf("\n");
    }

    if (cilindrada == 2 && combustivel == 2)
    {
        printf("-----------------------\n");
        printf("Emissao de CO2 / Km : 0.300g \n");
        printf("-----------------------\n");    
        strcpy(escolha4, "Etanol");
        printf("\n");
    } 

    if (cilindrada == 3 && combustivel == 1)
    {
        printf("-----------------------\n");
        printf("Emissao de CO2 / Km : 0.790g \n");
        printf("-----------------------\n");    
        strcpy(escolha4, "Gasolina");
        printf("\n");
    }

    if (cilindrada == 3 && combustivel == 2)
    {
        printf("-----------------------\n");
        printf("Emissao de CO2 / Km : 0.341g \n");
        printf("-----------------------\n");    
        strcpy(escolha4, "Etanol");
        printf("\n");
    }

    if (cilindrada == 4 && combustivel == 1)
    {
        printf("-----------------------\n");
        printf("Emissao de CO2 / Km : 0.851g \n");
        printf("-----------------------\n");    
        strcpy(escolha4, "Gasolina");
        printf("\n");
    }

    if (cilindrada == 4 && combustivel == 2)
    {
        printf("-----------------------\n");
        printf("Emissao de CO2 / Km : 0.426g \n");
        printf("-----------------------\n");    
        strcpy(escolha4, "Etanol");
        printf("\n");
    }

    if (cilindrada == 5 && combustivel == 1)
    {
        printf("-----------------------\n");
        printf("Emissao de CO2 / Km : 0.942g \n");
        printf("-----------------------\n");    
        strcpy(escolha4, "Gasolina");
        printf("\n");
    }

    if (cilindrada == 5 && combustivel == 2)
    {
        printf("-----------------------\n");
        printf("Emissao de CO2 / Km : 0.460g \n");
        printf("-----------------------\n");    
        strcpy(escolha4, "Etanol");
        printf("\n");
    }

    if (cilindrada == 6 && combustivel == 1)
    {
        printf("-----------------------\n");
        printf("Emissao de CO2 / Km : 1.193g \n");
        printf("-----------------------\n");    
        strcpy(escolha4, "Gasolina");
        printf("\n");
    }

    if (cilindrada == 6 && combustivel == 2)
    {
        printf("-----------------------\n");
        printf("Emissao de CO2 / Km : 0.600g \n");
        printf("-----------------------\n");    
        strcpy(escolha4, "Etanol");
        printf("\n");
    }

    if (cilindrada == 7 && combustivel == 1)
    {
        printf("-----------------------\n");
        printf("Emissao de CO2 / Km : 1.250g \n");
        printf("-----------------------\n");    
        strcpy(escolha4, "Gasolina");
        printf("\n");
    }

    if (cilindrada == 7 && combustivel == 2)
    {
        printf("-----------------------\n");
        printf("Emissao de CO2 / Km : 0.647g \n");
        printf("-----------------------\n");    
        strcpy(escolha4, "Etanol");
        printf("\n");
    }

    if (cilindrada == 8 && combustivel == 1)
    {
        printf("-----------------------\n");
        printf("Emissao de CO2 / Km : 1.325g \n");
        printf("-----------------------\n");    
        strcpy(escolha4, "Gasolina");
        printf("\n");
    }

    if (cilindrada == 8 && combustivel == 2)
    {
        printf("-----------------------\n");
        printf("Emissao de CO2 / Km : 0.700g \n");
        printf("-----------------------\n");    
        strcpy(escolha4, "Etanol");
        printf("\n");
    }
    
    //Apresentação dos dados que o usuário inseriu sobre seu veículo.
	switch (motor)
	{
        case 1:
            printf("Veiculo: %s \n", escolha1);
            printf("Motor: 1.0 \n");
            printf("Combustivel: %s \n", escolha4);
            break;

        case 2:
            printf("Veiculo: %s \n",escolha1);
            printf("Motor: 1.4 \n");
            printf("Combustivel: %s \n", escolha4);
            break;

        case 3:
            printf("Veiculo: %s \n",escolha1);
            printf("Motor: 1.6 \n");
            printf("Combustivel: %s \n", escolha4);
            break;

        case 4:
            printf("Veiculo: %s \n",escolha1);
            printf("Motor: 2.0 \n");
            printf("Combustivel: %s \n", escolha4);
            break;

        case 5:
            printf("Veiculo: %s \n",escolha1);
            printf("Motor: 2.2 \n");
            printf("Combustivel: %s \n", escolha4);
            break;

        case 6:
            printf("Veiculo: %s \n",escolha1);
            printf("Motor: 2.6 \n");
            printf("Combustivel: %s \n", escolha4);
            break;

        case 7:
            printf("Veiculo: %s \n",escolha1);
            printf("Motor: 2.8 \n");
            printf("Combustivel: %s \n", escolha4);
            break;

        case 8:
            printf("Veiculo: %s \n",escolha1);
            printf("Motor: 3.0 \n");
            printf("Combustivel: %s \n", escolha4);
            break;

        default:

            switch (cilindrada)
            {
                case 1:
                    printf("Veiculo: %s \n",escolha1);
                    printf("Cilindradas: 100 \n");
                    printf("Combustivel: %s \n", escolha4);
                    break;
                
                case 2:
                    printf("Veiculo: %s \n",escolha1);
                    printf("Cilindradas: 125 \n");
                    printf("Combustivel: %s \n", escolha4);
                    break;

                case 3:
                    printf("Veiculo: %s \n",escolha1);
                    printf("Cilindradas: 160 \n");
                    printf("Combustivel: %s \n", escolha4);
                    break; 
                
                case 4:
                    printf("Veiculo: %s \n",escolha1);
                    printf("Cilindradas: 250 \n");
                    printf("Combustivel: %s \n", escolha4);
                    break; 

                case 5:
                    printf("Veiculo: %s \n",escolha1);
                    printf("Cilindradas: 300 \n");
                    printf("Combustivel: %s \n", escolha4);
                    break;

                case 6: 
                    printf("Veiculo: %s \n",escolha1);
                    printf("Cilindradas: 400 \n");
                    printf("Combustivel: %s \n", escolha4);
                    break;

                case 7:
                    printf("Veiculo: %s \n",escolha1);
                    printf("Cilindradas: 500 \n");
                    printf("Combustivel: %s \n", escolha4);
                    break;

                case 8:
                    printf("Veiculo: %s \n",escolha1);
                    printf("Cilindradas: 600 \n");
                    printf("Combustivel: %s \n", escolha4);
                    break;

                default:
                    printf("Houve erro nas Cilindradas.");
                    break;
            }
    }
    printf("\n");
    system("pause");
    return 0;
}