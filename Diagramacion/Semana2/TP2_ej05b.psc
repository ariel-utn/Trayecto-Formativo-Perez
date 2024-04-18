Algoritmo TP2_ej05b
	Leer venta
	// Calcular importe final
	Si venta<100 Entonces
		pf = venta*0.95
	SiNo
		Si venta>500 Entonces
			pf = venta*0.85
		SiNo
			pf = venta*0.90
		FinSi
	FinSi
	Escribir "Precio final: ", pf
FinAlgoritmo
