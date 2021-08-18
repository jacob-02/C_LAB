a.out:Question3.o Question3_uniqueElement.o
	gcc Question3.o Question3_uniqueElement.o

Question3.o: Question3.c
	gcc -c Question3.c

Question3_uniqueElement.o: Question3_uniqueElement.c
	gcc -c Question3_uniqueElement.c