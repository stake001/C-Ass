TARGET=dayA
CSRC=$(TARGET).c
COBJ=$(CSRC:.C=.O)

CC=gcc
CFLAGS=
LDFLAGS=

$(TARGET):$(COBJ)
	$(CC) -o $(TARGET) $(LDFLAGS) $(COBJ)
$(COBJ):$(CSRC)
	$(CC) -c $(CFLAGS) $(CSRC)
run:
	./$(TARGET)
clean:
	rm $(COBJ) $(TARGET)
.phony: run clean	
