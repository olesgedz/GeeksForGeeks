#include <stdio.h>
#include <stdlib.h>

void ft_print_matrix()
{

}

int ft_strlen()
{

}
int ft_get_allocete_memory()
char** ft_save_matrix(int size, char** argv)
{
  char** matrix;

  if(!(matrix = (char**)malloc(sizeof(char*) * size + 1))) //get some memory, +1 for \0
   return; // if wasnt able to save, return


  return (matrix)
}

int main(int argc, char **argv)
{
  ft_save_matrix(argc - 1, argv);
  return(0);
}
