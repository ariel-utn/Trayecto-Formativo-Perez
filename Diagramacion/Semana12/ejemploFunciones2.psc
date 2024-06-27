Algoritmo ejemploFunciones2
	// DECLARAR UN VECTOR
	tam = 5
	Dimension vNumeros[tam]
	// CARGAR VECTOR
	cargarVector(vNumeros,tam)
	// SUMAR VECTOR
	suma = sumarVector(vNumeros,tam)
	// MOSTRAR NUMERO
	mostrarNumero(suma)
FinAlgoritmo

Funcion cargarVector(v,tam)
	Para j<-0 Hasta tam-1 Con Paso 1 Hacer
		Leer v[j]
	FinPara
FinFuncion

Funcion r = sumarVector(v,t)
	acu = 0
	Para x<-0 Hasta t-1 Con Paso 1 Hacer
		acu = acu+v[x]
	FinPara
	r = acu
FinFuncion

Funcion mostrarNumero(n)
	Escribir n
FinFuncion
