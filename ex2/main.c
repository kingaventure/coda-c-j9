 #include "struct.h"  

  int force;
  int cerveau;
  int sagesse;
  int agilité;
  int robuste;
  
void fill_struct(jeu * perso)
{
    printf("Choisissez votre force \n");
    scanf("%d", &force);
    printf("Choisissez votre inteligence \n");
    scanf("%d", &cerveau);
    printf("Choisissez votre sagesse \n");
    scanf("%d", &sagesse);
    printf("Choisissez votre agilité \n");
    scanf("%d", &agilité);
    printf("Choisissez votre endurance \n");
    scanf("%d", &robuste);

    perso->strength = force;
    perso->intelligence = cerveau;
    perso->wisdom = sagesse;
    perso->agility = agilité;
    perso->endurance = robuste;
}

int main()  
{  
    jeu perso;
    fill_struct(&perso);
    printf("Votre force est : %d \nVotre intelligence : %d \nVotre sagesse : %d \nVotre agilité : %d \nVotre endurance : %d \n", perso.strength, perso.intelligence, perso.wisdom, perso.agility, perso.endurance);  
    exit(0);  
}