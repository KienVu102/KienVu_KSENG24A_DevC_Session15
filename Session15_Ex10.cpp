#include <stdio.h>
#include <string.h>
//CountCharacter=CC1, checkCharacter=CC2, CountCheckCharacter=CCC, 
void CC1(char str[], int length){
	char CC2[length];
	int CCC[length], indexCheck = 0, indexCount = 0;
	for(int i = 0; i < length; i++){
		int found = 0;
		for(int j = 0; j < indexCheck; j++){
			if(str[i] == CC2[j]){
				found = 1;
				break;
			}
		}
		if(found == 0){
			CC2[indexCheck++] = str[i];
			int count = 0;
			for(int k = 0; k < length; k++){
				if(str[i] == str[k]){
					count++;
				}
			}
			CCC[indexCount++] = count;
		}
	}
	for(int i = 0; i < indexCheck; i++){
		printf("Ki tu '%c' xuat hien %d lan\n", CC2[i], CCC[i]);
	}
}
int main(){
	char str[] = "cbdabd";
	int length = strlen(str);
	CC1(str, length);
	return 0;
}
