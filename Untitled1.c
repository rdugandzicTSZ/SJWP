#include <stdio.h>
int main(){
int n, i;
printf("Unesi prirodan broj n: ");
scanf("%d", &n);
int polje[n];
int polje2[n];
printf("Unesi eliemente polja n: ");
for(i=0;i<n;i++){
	scanf("%d", &polje[i]);
}
printf("Uneseno polje: ");
for(i=0;i<n;i++){
	printf("%d ", polje[i]);
}
printf("\n");
printf("Polje podjeljeno sa n: ");
for(i=0;i<n;i++){
	polje2[i]=polje[i]/n;
}
for(i=0;i<n;i++){
	printf("%d ", polje2[i]);
}

return 0;
