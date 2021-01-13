PREFIX = /gazizkv/local/bin
TARGET = solver

.PHONY: all clean install uninstall

solver: fread.c
	gcc -o $(TARGET) fread.c
clean:
	rm -rf solver *.o *~ a.out
install:
	install $(TARGET) $(PREFIX)
uninstall:
	rm -rf $(PREFIX)/$(TARGET)
