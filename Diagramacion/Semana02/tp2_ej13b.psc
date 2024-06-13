Algoritmo tp2_ej13b
	Leer n
	MAX = n; MED = n; MIN = n
	Leer n
	Si n>max Entonces
		med = max
		max = n
	SiNo
		Si n<min Entonces
			med = min
			min = n
		SiNo
			med = n
		FinSi
	FinSi
	Leer n
	Si n>max Entonces
		med = max
		max = n
	SiNo
		Si n<min Entonces
			med = min
			min = n
		SiNo
			med = n
		FinSi
	FinSi
	Escribir 'MIN: ',min
	Escribir 'MED: ',med
	Escribir 'MAX: ',max
FinAlgoritmo
