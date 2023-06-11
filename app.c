#include <stdio.h>

int main(){
	int umur;
	char nama[60];
	char ice[20];
	printf("Mari Belajar Algoritma dengan Bahasa C \n");
	printf("========================================\n\n");
	printf("Masukkan nama anda[13..52] : ");
	scanf("%s",nama);
	fflush(stdin);
	printf("Masukkan umur anda : ");
	scanf("%d",&umur);
	fflush(stdin);
	
	printf("\nBelajar algoritma itu menyenangkan seperti makan es krim \n");
	printf("Rasa Es Krim yang disukai : ");
	scanf("%s",ice);
  printf("================================================================\n\n");
	printf("%s berumur %d tahun menyukai es krim rasa %s\n\n",nama,umur,ice);
	printf("    .-\"`'\"-.\n");
  printf("   /        \\\n");
  printf("   |        |\n");
  printf("   /'---'--`\\\n");
  printf("  |          |\n");
  printf("  \\.--.---.-./\n");
  printf("  (_.--._.-._)\n");
  printf("    \\=-=-=-/\n");
  printf("     \\=-=-/\n");
  printf("      \\=-/\n");
  printf("       \\/\n");
	printf("\n");
  printf("SELAMAT BELAJAR ALGORITMA !\n\n");
	
  fflush(stdin);
	getchar();
	return 0;
}
