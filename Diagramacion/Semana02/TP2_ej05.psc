Algoritmo TP2_ej05a
	Leer venta
	// Calcular importe final
	Si venta < 100 Entonces
		Escribir "5%"
	FinSi
	Si (venta >= 100) && (venta <= 500) Entonces
		Escribir "10%"
	FinSi
	Si venta > 500 Entonces
		Escribir "15%"
	FinSi
FinAlgoritmo
