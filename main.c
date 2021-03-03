#include <stdio.h>
#include <string.h>

int main(int argc, char * argv[]){
	int ch;
	int stack=0;
	while(1){
		ch = fgetc(stdin);
		if(ch==EOF)
			break;
		switch(ch){
			case '{':
				stack++;
				fputc(ch, stdout);
				fputc('\n', stdout);
				for(int i = 0; i<stack; i++)
					fputc(9, stdout);
				break;
			case '}':
				stack--;
				fputc('\n', stdout);
				for(int i = 0; i<stack; i++)
					fputc(9, stdout);
				fputc(ch, stdout);
				break;
			case '[':
				stack++;
				fputc(ch, stdout);
				fputc('\n', stdout);
				for(int i = 0; i<stack; i++)
					fputc(9, stdout);
				break;
			case ']':
				stack--;
				fputc('\n', stdout);
				for(int i = 0; i<stack; i++)
					fputc(9, stdout);
				fputc(ch, stdout);
				fputc('\n', stdout);
				for(int i = 0; i<stack; i++)
					fputc(9, stdout);
				break;
			case ',':
				fputc(ch, stdout);
				fputc('\n', stdout);
				for(int i = 0; i<stack; i++)
					fputc(9, stdout);
				break;
			default :
				fputc(ch, stdout);
		}
	}
	fputc('\n', stdout);
	return 0;
}
