all:
	$(CC) $(CFLAGS) $(LDFLAGS) main.c -o test-logger

install:
	install -d $(DESTDIR)/usr/bin
	install -m 0755 test-logger $(DESTDIR)/usr/bin/
