default:
	bison -vd parse1.y
	flex lexer.l
	gcc -o calc -g parse1.tab.c lex.yy.c
