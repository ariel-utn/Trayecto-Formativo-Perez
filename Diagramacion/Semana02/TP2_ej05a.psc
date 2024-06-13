Algoritmo TP2_ej05a
	Leer venta
	// Calcular importe final
	Si venta<100 Entonces
		d = venta*5/100
	FinSi
	Si (venta>=100)&&(venta<=500) Entonces
		d = venta*10/100
	FinSi
	Si venta>500 Entonces
		d = venta*15/100
	FinSi
	pf = venta-d
	Escribir 'Precio final: ',pf
FinAlgoritmo
