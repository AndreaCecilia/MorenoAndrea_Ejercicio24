gaussian.png: metropolis.py metropolis.dat
	python metropolis.py
metropolis.dat : metropolis.x
	./metropolis.x > metropolis.dat
metropolis.x : metropolis.cpp
	c++ metropolis.cpp -o metropolis.x
clean :
	rm -r metropolis.x metropolis.dat walk.png
	