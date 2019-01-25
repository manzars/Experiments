%{
	#include<stdio.h>
	int lines=0, words=0, s_letters=0, c_letters=0, spl_char=0, total=0;
%}

%%

\n { lines++; words++; }
[\t ' '] words++;
[A-Z] c_letters++;
[a-z] s_letters++;
[0-9] num++;
. spl_char++;

%%

main(void){
	yyin = fopen('myfile.txt','r');
	yylex();
	total = s_letters + c_letters + num + spl_char;
	printf("THis file contains....");
	printf("\n\t%d lines", lines);
	printf("\n\t%d words", words);
	printf("\n\t%d small letter", s_letters);
	printf("\n\t%d capital letters", c_letters);
	printf("\n\t%d digits", num);
	printf("\n\t%d Special Characters", spl_char);
	printf("\n\tIn total %d Characters. \n", total);
}

int yywrap(){
	return(1);
}