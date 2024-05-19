CFLAGE = -Wall -g
.PNONY: all
all:test.bin hello.bin
	@echo "succeed!"

test.bin:test.c 
	$(CC) $(CFLAGE) $^ -o $@

hello.bin:hello.c
	$(CC) $(CFLAGE) $^ -o $@

clean:
	$(RM) *.bin
