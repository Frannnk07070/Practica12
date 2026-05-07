 #include<stdio.h>
int main() 
{
  FILE *archivo;
  char caracteres[50];
  archivo = fopen("gets.txt", "r");
  
  if (archivo != NULL) 
  {
    printf("El archivo se abrió correctamente."); 
    printf("\nContenido del archivo:\n");
    while (feof(archivo) == 0)
    {
      fgets (caracteres, 50, archivo);
      printf("%s", caracteres); 
    }
    fclose(archivo); 
  }
  
  return 0; 
}
