init:
	-mkdir compiled 1> /dev/null 2> /dev/null > /dev/null

# ########### SWAPPING - C ########### #
gen_swapping_c: swapping/swap.c
	gcc -o compiled/swapping_c swapping/swap.c

run_swapping:
	compiled/swapping_c

clean:
	rm -rf compiled