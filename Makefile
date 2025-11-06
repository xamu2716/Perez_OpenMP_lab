GCC = gcc
FLAGS = -fopenmp -lm

PROGRAMAS = lab01 lab02 lab03 lab04 lab05

lab01:
	$(GCC) $@.c -o $@ $(FLAGS)

lab02:
	$(GCC) $@.c -o $@ $(FLAGS)

lab03:
	$(GCC) $@.c -o $@ $(FLAGS)

lab04:
	$(GCC) $@.c -o $@ $(FLAGS)

lab05:
	$(GCC) $@.c -o $@ $(FLAGS)

clean:
	$(RM) $(PROGRAMAS)
