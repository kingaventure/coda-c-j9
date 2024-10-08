#include <stdlib.h>  
#include <stdio.h>  
#include <string.h> 

#ifndef STRUCT_H  
#define STRUCT_H  
  
struct s_pos { 
  char *name; 
  int strength;
  int intelligence;
  int wisdom;
  int agility;
  int endurance;
};  
  
typedef struct s_pos jeu;  
  
#endif 