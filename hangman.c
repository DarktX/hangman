#include <stdio.h>
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<stdbool.h>
#include<ctype.h>
int main() {

        
        int numOfFails=0;
        char array[10];
        char changedArray[10];
        char letter;
        int num = 0;
        char stringArray[10][11]={"absolutyzm","bezchmurny","arcybiskup","budowniczy","diagnostyk","dysfunkcja","strachliwy","zielarstwo","socrealizm","abaddpxoxx"};
    //losowy seed
        int seed = time(NULL);
        srand(seed);
        bool flag = false;
    //Wpisuje do tablicy - losowanie wyrazu
        printf("TABLICA - POKAZYWANA TYLKO DO CELOW TESTOWYCH: ");
    	num = rand() % 10;
        for(int i=0;i<10;i++)
        {
           
            
            array[i]=stringArray[num][i];
            printf("%c",array[i]);
        }
        printf("\n\n");
        
    //Przygotowanie changedArray
        for(int i=0;i<10;i++)
        {
            changedArray[i]='*';
        }
		printf("-----------------------------------------------------\n");
		printf("WITAJ W GRZE WISIELEC - WYLOSOWANO 10 LITEROWE HASLO\n");
		printf("-----------------------------------------------------\n");
    //Wpisanie znaku i sprawdzenie tablicy
        while((numOfFails<7)&&!((changedArray[0]!='*')&&(changedArray[1]!='*')&&(changedArray[2]!='*')&&(changedArray[3]!='*')&&(changedArray[4]!='*')&&
			(changedArray[5]!='*')&&(changedArray[6]!='*')&&(changedArray[7]!='*')&&(changedArray[8]!='*')&&(changedArray[9]!='*')))
        {
            
            printf("Podaj litere: ");
        //sprawdzanie czy wprowadzana jest liczba
            do
	    {
		scanf(" %c",&letter);
                if(!(isalpha(letter))){printf("To nie jest dopuszczalny znak!!\n");printf("Podaj litere: ");}
            }
            while(!(isalpha(letter)));
            
            
            for(int i=0;i<10;i++)
            {
                if(letter==array[i])
                {
                    flag=true;
                    changedArray[i]=letter;
                }
                
            }
            
            if(flag==true)
            {
                
                flag=false;
            }
            else
            {
                numOfFails++;
            //rysowanie wisielca
                switch (numOfFails) {
                    case 1:
                        printf("  |  \n");
                        printf("__|__\n");
                        printf("6 szans\n");
                        break;
                    case 2:
                        printf("  |  \n");
                        printf("  |  \n");
                        printf("  |  \n");
                        printf("__|__\n");
                        printf("5 szans\n");
                        break;
                    case 3:
                        printf("  __ \n");
                        printf("  |/ \n");
                        printf("  |  \n");
                        printf("  |  \n");
                        printf("  |  \n");
                        printf("  |  \n");
                        printf("  |  \n");
                        printf("__|__\n");
                        printf("4 szanse\n");
                        break;
                    case 4:
                        printf("  ______ \n");
                        printf("  |/ \n");
                        printf("  |  \n");
                        printf("  |  \n");
                        printf("  |  \n");
                        printf("  |  \n");
                        printf("  |  \n");
                        printf("__|__\n");
                        printf("3 szanse\n");
                        break;
                    case 5:
                        printf("  _______ \n");
                        printf("  |/   |  \n");
                        printf("  |  \n");
                        printf("  |  \n");
                        printf("  |  \n");
                        printf("  |  \n");
                        printf("  |  \n");
                        printf("__|__\n");
                        printf("2 szanse\n");
                        break;
                    case 6:
                        printf("  _______ \n");
                        printf("  |/   |  \n");
                        printf("  |   (_) \n");
                        printf("  |  \n");
                        printf("  |  \n");
                        printf("  |  \n");
                        printf("  |  \n");
                        printf("__|__\n");
                        printf("1 szansa\n");
                        break;
                    case 7:
                        printf("  _______ \n");
                        printf("  |/   |  \n");
                        printf("  |   (_) \n");
                        printf("  |   \\|/ \n");
                        printf("  |    |\n");
                        printf("  |   /|\\  \n");
                        printf("  |       \n");
                        printf("__|__     \n");
                        break;
                    default:
                        break;
                }
                
            }
            
            for(int i=0;i<10;i++)
            {
                printf("%c ",changedArray[i]);
            }
            printf("\n\n");
            
        }
    if(numOfFails==7)
    {
		printf("-------------------------------\n");
	 	printf("Przegrana, hasło to ");
    	for(int i=0;i<10;i++)
        {
            printf("%c",array[i]);
        }
    	printf("\n");
	 	printf("-------------------------------\n");
            
    }
    else
	{
		printf("-------------\n");
 		printf("Zwyciestwo!!\n");
		printf("-------------\n");
	}
}
    

