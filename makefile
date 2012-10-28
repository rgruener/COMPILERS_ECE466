default:
	bison -vd parser.y
	flex lex.l
	gcc -o calc -g parser.tab.c lex.yy.c
