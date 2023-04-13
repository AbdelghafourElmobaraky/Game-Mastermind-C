#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<windows.h>
	char name[20],choice,name1[20],v, clique;;
	int hidden_Num1[5], comb1[5] , T[5],bien , mal ,joker=0 , attempt=0, n=5,p,j,i,y,c;	
	
void BASES(void);//UNE FONCTION AFFICHE LES BASES DU JEU//	

void BIENVENUE(void);// FONCTION AFFICHER LA BIENVENUE//

void NOME_JOUEUR(void);// UNE FONCTION AFFICHE LE NOM DU PREMIER JOUEUR ET LE NOM DU DEUXEME JOUEUR//

void TAB_JOUEUR1NIV1(void);// UNE FONCTION AFFICHE LE PREMIER CODE JOUEUR DANS NIVEAUX 1 //

void TAB_JOUEUR1NIV2(void);// UNE FONCTION AFFICHE LE PREMIER CODE JOUEUR DANS NIVEAUX 2 //

void JOUEUR_FORME1(void);// VOIR LE MOT JOUEUR1 //

void JOUEUR_FORME2(void);// VOIR LE MOT JOUEUR1 //

void JOKER(void);// FONCTION DU JOKER POUR AIDER //

void COMPTEUR(int attempt);// UNE FNCTION AFFICHE LE NOMBRE DE TENTATIVES //
	
void NIVEAU1(void);// UNE FONCTION NECESSITE LE PEMIERE NIVEAU //

void SCORE(void);//UNE FONCTION QUI MONTRE LE DEGRE DE JEU//

void NIVEAU2(void);// UNE FONCTION NECESSITE LE DEUXIEME NIVEAU //

int main()
{

 BIENVENUE(); 
 BASES();
 NOME_JOUEUR();
//SELECTION DE NIVEAU//
    printf("\n\n%s OU %s CHOISIR VOTRE NIVEAU [1 OU 2] : ",name,name1);
    scanf("%d",&c);	
    system("cls");

// Le debut //
 JOUEUR_FORME1();
 
switch(c){ 
 case 1 :{
 TAB_JOUEUR1NIV1();
 JOUEUR_FORME2();
 NIVEAU1();
 SCORE();
 printf("\nVEULLEZ VOUS REJOUER (OUI='O'/NON='n') :");
 scanf("%s",&v);
 if(v=='o'){system("cls");return main();}
 if(v=='n'){printf("MERCI .");}
 
   break;}
   case 2 : {	 
  TAB_JOUEUR1NIV2();	
  JOUEUR_FORME2();
  NIVEAU2();
  SCORE();
  printf("\nVEULLEZ VOUS REJOUER (OUI='O'/NON='n') :");
  scanf("%s",&v);
  if(v=='o'){system("cls");return main();}
  if(v=='n'){printf("MERCI .");}
	break;}
}

 getch();	  
}


void BIENVENUE(void)
{
system("color f");
 printf("           \n\n\n\n\n\n\n\n\n\n\n                                     -------------------------\n");
 printf("                                    |  *   *    *    *     *  |\n");
 printf("                                    |                         |\n");
 printf("                                    | WELCOME TO MASTER MIND  |\n");
 printf("                                    |                         |\n");
 printf("                                    |      'Abdelghafou'      |\n");
 printf("                                    |                         |\n");
 printf("                                    |                         |\n");
 printf("                                    | *    *    *    *     *  |\n");
 printf("                                     -------------------------\n\n\n\n");
 printf("CLIQUEZ SUR N'IMPORTE QUEL BOUTON POUR LIRE LES REGLE...",clique);
 clique=getch();
 system("cls");
	
}

void NOME_JOUEUR(void)
{
	system("color 0c");
    FILE *point= fopen("naruto.save","w");
	 printf("\n\n\nJOUEUR 1 :Veullez entrer votre pseudo ci-dessous : ");   
	  scanf("%s",&name); 
	  	 printf("\nJOUEUR 2 :Veullez entrer votre pseudo ci-dessous : ");   
	  scanf("%s",&name1); 
	  printf("\nBONJOUR %s , %s\n",name,name1);
	  printf("APRES CHOISI LE NIVEAUX\n");
	  printf("%s ENTRERA UN CODE DE 5 CHIFFRE\n",name);
	  printf("%s DEVERA ESSAYER DE LE TROUVER\n",name1);
	  printf("CLIQUEZ SUR N'IMPORTE QUEL BOUTON POUR CONTINUE...",clique);
	  clique=getch();
	  system("cls"); 
	  if(name == NULL){
	  	exit(1);
	  }
	  else{
	  	fputs("JOUEUR 1 : ",point);
	    fputs(name,point);
	  	fputs("\nJOUEUR 2 : ",point);
	  	fprintf(point,name1);
	  	fclose(point);
	  }
}

void TAB_JOUEUR1NIV1(void)
{
	system("color A");

  puts("ENTRER UN CODE DE 5 CHIFFRE POSITFS ET DISTINCTS  :");
	for(i=0;i<n;i++){printf("  casier %d : ",i);scanf("%d",&hidden_Num1[i]);
	if( hidden_Num1[i]<0 || hidden_Num1[i]>9){return TAB_JOUEUR1NIV1();}}
	for(i=0;i<n;i++){for(j=i+1;j<n;j++){if(hidden_Num1[i]==hidden_Num1[j]){ return TAB_JOUEUR1NIV1();}
	}
	}
	
	system("cls");
    
}

void JOUEUR_FORME1(void)
{
printf("\t\t\t\t\t %c%c%c%c%c%c%c%c%c%c\n",201,205,205,205,205,205,205,205,205,187);
printf("\t\t\t\t\t %cJOUEUR 1%c\n",186,186,186);
printf("\t\t\t\t\t %c%c%c%c%c%c%c%c%c%c\n",200,205,205,205,205,205,205,205,205,188); 
}

void COMPTEUR(int attempt)
{
printf("\t ------\n");
	printf("\t| %d/20 |\n",attempt);
	printf("\t ------\n");
}

void NIVEAU1(void)
{
		while(attempt<=19 && bien!=5 ){	
       	bien=0; mal=0;
printf("\n");
	attempt=attempt+1;
	COMPTEUR(attempt);
	system("color 0A");
	ERRUR4:
	ERRUR3:
	 puts("ENTRER UN CODE DE 5 CHIFFRE POSITFS ET DISTINCTS  :");	 
	for(j=0;j<5;j++){printf("casier %d : ",j);scanf("%d",&comb1[j]);}
	for(i=0;i<5;i++){for(j=i+1;j<5;j++){
	

	            if( comb1[i]==comb1[j] ){bien=0; mal=0; goto ERRUR3;}
	        	if( comb1[i]<0 || comb1[i]>9 ){bien=0; mal=0; goto ERRUR3;}	}}
	
		for(i=0;i<5;i++){
	        for(j=0;j<5;j++){
	        	
	        	if(i==j && hidden_Num1[i]==comb1[j]){bien=bien+1;}
	        	else if(i!=j && hidden_Num1[i]==comb1[j]){mal=mal+1;}
			}}
	
	    printf("VERT  : %d\nROUGE : %d\n",bien,mal);
				
	//joker
	   JOKER();	
	   
     }
}

void JOKER(void)
 { 
	   while(attempt>=10 && attempt<17 && joker==0 && bien!=5){	
	   choice=getch();
			   if(choice=='Y'|| choice=='y' ){  printf("\nCHOISIR LA POSITION [0,1,2,3,4]: ");
         		scanf("%d",&p);
         		attempt=attempt+3;
         		
         		if(p==0 || p==1 || p==2 || p==3 || p==4){
				 for(i=0;i<5;i++){
         	    	if(i==p){printf("tab[%d]=%d\n",p,hidden_Num1[i]);}}         	    	
				    	printf("VOUS AVEZ PERDU 3 TENTATIVES . LE NOMBERE DE TENTAIVES EST %d/20\n",attempt);
					} joker=1;
puts(" \n");
         	     }
				else if(choice=='N' || choice=='n'){
					bien=0;mal=0;
				printf("\n");
				break; 
					   } }
					   	
 }
void SCORE(){
	FILE *pointS= fopen("naruto.save","a");
	int var=10;
		if(bien==5)
	   {    printf("BRAVO %s ^o^\n",name1);
			if(1<=attempt && attempt<=2){printf("VOTRE SCORE : 10*\n");var--;}
			if(3<=attempt && attempt<=4){printf("VOTRE SCORE : 9*\n");var-=2;}
			if(5<=attempt && attempt<=6){printf("VOTRE SCORE : 8*\n");var-=3;}
			if(7<=attempt && attempt<=8){printf("VOTRE SCORE : 7*\n");var-=4;}
			if(9<=attempt && attempt<=10){printf("VOTRE SCORE : 6*\n");var-=5;}
			if(11<=attempt && attempt<=12){printf("VOTRE SCORE : 5*\n");var-=6;}
			if(13<=attempt && attempt<=14){printf("VOTRE SCORE : 4*\n");var-=27;}
			if(15<=attempt && attempt<=16){printf("VOTRE SCORE : 3*\n");var-=28;}
			if(17<=attempt && attempt<=18){printf("VOTRE SCORE : 2*\n");var-=9;}
			if(19<=attempt && attempt<=20){printf("VOTRE SCORE : 1*\n");var-=10;}
		
		}
		if(pointS == NULL){
			exit(1);
		}
			else{
				fputs(" ",pointS);
				fprintf(pointS,"\n\n==>JOUEUR 2 : votre score %d * ",var);
				fclose(pointS);
			}
		if(bien!=5 && attempt==20){printf("FIN DU JEU . BONNE CHANCE ENCORE %s \n",name1);
	}
	
}

void JOUEUR_FORME2(void)
{
printf("\t\t\t\t\t %c%c%c%c%c%c%c%c%c%c\n",201,205,205,205,205,205,205,205,205,187);
printf("\t\t\t\t\t %cJOUEUR 2%c\n",186,186,186);
printf("\t\t\t\t\t %c%c%c%c%c%c%c%c%c%c\n",200,205,205,205,205,205,205,205,205,188); 
}


void NIVEAU2(void)
   {
    
    system ("color A");
 
while(attempt<=19 && bien!=5){
  bien=0;
  mal=0;
  attempt++;
  COMPTEUR(attempt);
  ERRUR5:
  puts("JOUEUR 2 : VEULLEZ ENTRER VOTRE PSEUDO CI-DESSOUS : ");
  for(j=0;j<5;j++)
  {printf("casier %d : ",j);scanf("%d",&comb1[j]);if(comb1[j]<0 || comb1[j]>9){bien=0; mal=0; goto ERRUR5;}}

  for (i=0;i<5;i++){T[i]=hidden_Num1[i];}

    for (i=0;i<5;i++){
	if( T[i]==comb1[i]){
      bien++;   T[i]='-2';   comb1[i]='-4';}} 
	  
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
                if (T[i]==comb1[j] && i!=j){
                        mal++; T[i]='-4'; comb1[j]='-3';
                }
        }
   }
     printf("VERT : %d\nROUGE : %d\n",bien,mal);
    JOKER();
    puts("\n");
  }
}

void TAB_JOUEUR1NIV2(void)
{
	system("color A");
    puts("ENTRER UN CODE DE 5 CHIFFRE POSITFS ET DISTINCTS  :");
	for(i=0;i<n;i++){printf("  casier %d : ",i);scanf("%d",&hidden_Num1[i]);
	if( hidden_Num1[i]<0 || hidden_Num1[i]>9){return TAB_JOUEUR1NIV2();}
	}
	system("cls");
}

void BASES(void){
	system("color 6");
 printf("\t\t\t\t\t %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",201,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,187);
 printf("\t\t\t\t\t %c REGLES DE JEU %c\n",186,186,186);
 printf("\t\t\t\t\t %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n\n\n\n",200,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,188);
 printf("CE JEU AMUSANT , VOUS AVEZ BESOIN DE DUEX JOUEURS , LR PRINCIPE DE JEU EST COMME SUIT :\n\n");
 printf("%c LE PREMIER JOUEUR  : Entrez le code secret de 5 chiffres.\n",201);
 printf("%c LE DEUXIEME JOUEUR : Essaiede trouver le code secret selon deux niveaux.\n\n",200);
 printf("%c NIVEAUX 1 : (Dbutant) tout les chiffres du code sont distincts pour les deux joueurs.\n",201);
 printf("%c NIVEAUX 2 : (Expert) les chiffres peuvent se repeter .\n\n",200);
 printf("Le deuxieme joueur a le droit de tenter de trouver le code secret pour les deux niveaux\n\n");
 printf("REMARQUE :\n");
 printf("%c VERT  : Nomber de nombers corrects dans la position corrects.\n",201);
 printf("%c ROUGE : Nomber de nombers corrects dans la mauvaise position.\n\n",200);
 printf("Apr%cs avoir acc%cd%c a la tentative 10 recoit une question que vous souhaitez utiliser JOKER .\n\n",138,138,138);
 printf("CLIQUEZ SUR N'IMPORTE QUEL BOUTON POUR CONTINUE POUR SUIVRE LA LECTURE (JOKER)...",clique);
	  clique=getch();
 system("cls");
 printf("\t\t\t\t\t %c%c%c%c%c%c%c%c%c\n",201,205,205,205,205,205,205,205,187);
 printf("\t\t\t\t\t %c JOKER %c\n",186,186,186);
 printf("\t\t\t\t\t %c%c%c%c%c%c%c%c%c\n\n\n",200,205,205,205,205,205,205,205,188);
 printf("Loreque vous acc%cdez a la tentative 10 , vous n'apparaitrez pas une quetion(vous souhaitrez utiliser JOKER)\n",138); 
 printf("Mais seulements appuyez zur (y ou Y) si vous souhaitez utiliser, il vous sera demande de choisir l'endroit ou \n ");
 printf("vous voulez du code secret , puis vous verrez le nomber et le lieu.\n");
 printf("OU si vous ne voulez pas utiliser JOKER cliquez sur (n ou N). \n");
 printf("Ce processus est repete tentetive 10 et 17.\n\n");

 printf("REMARQUE : JOKER etre utilise une fois et lors de l'tilisation de 3 tentatives.\n");
 printf("\t\t\t\t\t\t\tMERCI\n");
 printf("CLIQUEZ SUR N'IMPORTE QUEL BOUTON POUR CONTINUE...",clique);
 clique=getch();
system("cls");

}