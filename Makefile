gruenercc: parser.tab.o lex.yy.o hash.o symbol_table.o ast.o quads.o
	gcc -o gruenercc parser.tab.o lex.yy.o hash.o symbol_table.o ast.o quads.o

parser.tab.o: parser.y tokens.h
	bison -vd parser.y
	gcc -c parser.tab.c

lex.yy.o: lex.l tokens.h
	flex lex.l
	gcc -c lex.yy.c

hash.o: hash.c hash.h
	gcc -c hash.c

symbol_table.o: symbol_table.c symbol_table.h
	gcc -c symbol_table.c

ast.o: ast.c ast.h
	gcc -c ast.c

quads.o: quads.c quads.h
	gcc -c quads.c

default:
	bison -vd parser.y
	flex lex.l
	gcc -o gruenercc -g parser.tab.c lex.yy.c hash.c symbol_table.c ast.c quads.c

clean:
	rm *.o parser.tab.* lex.yy.* parser.output
