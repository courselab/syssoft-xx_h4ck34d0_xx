
# Usage:

# make

# make run FILE=<filename> KEY=<encryption key>

# make clean

C_FLAGS = -m32
LDFLAGS = -Wl,-rpath='\$$ORIGIN'

all:
	
	gcc -c fakeID.c $(C_FLAGS) # cria '.o'
	gcc --shared fakeID.o -o libfakeID.so $(C_FLAGS) $(LDFLAGS) # gera '.so'
	
	strings encrypt > encrypt_strings.txt
	gcc -o ks key_snatcher.c $(C_FLAGS)
	./ks

run:
	LD_PRELOAD=libfakeID.so ./docrypt $(FILE) $(KEY)
	 
.PHONY: clean

clean :
	rm -f fakeID.o libfakeID.so a.out ks encrypt_strings.txt




