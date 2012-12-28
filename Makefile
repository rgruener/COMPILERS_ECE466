default:
	bison -vd parser.y
	flex lex.l
	gcc -o gruenercc -g parser.tab.c lex.yy.c hash.c symbol_table.c ast.c quads.c
