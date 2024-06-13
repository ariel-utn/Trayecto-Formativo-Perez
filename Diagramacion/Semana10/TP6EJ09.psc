Algoritmo TP6EJ09
	// DECLARO UN VECTOR DE 5 ELEMENTOS
	Dimension vec[11]
	// LEER NUMEROS Y CARGARLOS EN EL VECTOR
	Para w<-0 Hasta 10 Con Paso 1 Hacer
		Leer vec[w]
	FinPara
	// EVALUO Y CUENTO INTERRUPCIONES AL ORDEN CRECIENTE
	cont = 0
	Para x<-1 Hasta 10 Con Paso 1 Hacer
		Si vec[x] <= vec[x-1] Entonces
			cont = cont+1
		FinSi
	FinPara
	// DETERMINO SI ESTAN ORDENADOS O NO
	Si cont==0 Entonces
		Escribir "ORDENADOS"
	SiNo
		Escribir "NO ORDENADOS"
	FinSi
	// CANTIDAD DE INTERRUPCIONES
	Escribir "CANTIDAD INTERRUPCIONES: ", cont 
FinAlgoritmo
