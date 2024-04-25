Algoritmo tp2_ej18
	Leer consumo
	Si consumo <= 100 Entonces
		// $10
		precioFinal = consumo*10
	SiNo
		Si consumo <= 200 Entonces
			precioFinal = (100*10)+(consumo-100)*12
			// $10 los 1ros 100
		SiNo
			// $10 los 1ros 100
			// $12 los 2dos 100
			// $15 el excente de 200
			precioFinal = (100*10)+(100*12)+(consumo-200)*15
		FinSi
	FinSi
	Escribir precioFinal
FinAlgoritmo
