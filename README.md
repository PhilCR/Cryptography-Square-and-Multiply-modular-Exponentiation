# ExtendedEuclidianAlgorithm
*for _Criptography_'s class*

##Authors:
	* Jonathan André Gangi
	* Philippe Cesar Ramos


As seen on section 7.4 of **Understanding Criptography**:

	####Square-and-Multiply for Modular Exponentiation#### 

	**Input:**  base element x, Exponent H, Modulus n
	**Output:** Y = xˆH mod n 
	**Initialization:** r = x 

	**Algorithm:**
	```
		FORi=t−1DOWNTO0

			r = rˆ2 mod n 
			
			IF hi = 1
				r = r * x mod n 

		RETURN (r)
	```

**Input:** three integers X, k, N, being 2 <= X, k, N < 2ˆ32.
**Output:** one integers Y, as result from its exponentiation

To compile: `gcc SMA.c -o SMA`
