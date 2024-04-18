Algoritmo tp2_ej13a
	Leer n1,n2, n3
	Si n1 > n2 Entonces
		MAX = n1
		MIN = n2
	SiNo
		MAX = n2
		MIN = n1
	FinSi
	Si n3 > MAX Entonces
		MED = MAX
		MAX = n3
	SiNo
		Si n3 < MIN Entonces
			MED = MIN
			MIN = n3
		SiNo
			MED = n3
		FinSi
	FinSi
	Escribir "MIN: ", min
	Escribir "MED: ", med
	Escribir "MAX: ", max
FinAlgoritmo
