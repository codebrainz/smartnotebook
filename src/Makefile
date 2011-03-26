all: test

test: test.o manager.o notebook.o tab.o
	gcc `pkg-config --libs gtk+-2.0` -o $@ $^

test.o: test.c
	gcc -c -g -Wall `pkg-config --cflags gtk+-2.0` -o $@ $<

manager.o: manager.c
	gcc -c -g -Wall `pkg-config --cflags gtk+-2.0` -o $@ $<

notebook.o: notebook.c
	gcc -c -g -Wall `pkg-config --cflags gtk+-2.0` -o $@ $<

tab.o: tab.c
	gcc -c -g -Wall `pkg-config --cflags gtk+-2.0` -o $@ $<

test.c: test.vala manager.vala notebook.vala tab.vala
	valac --pkg gtk+-2.0 -CH smart-notebook.h \
		test.vala manager.vala notebook.vala tab.vala

clean:
	rm -f *.c *.h *.o test
