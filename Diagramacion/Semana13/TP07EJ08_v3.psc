Algoritmo TP07EJ08_v3
	TAM = 3
	Dimension vAnios[TAM]
	cargarAnios(vAnios,TAM)
	c = contarBisiesto(vAnios,TAM)
	mostrarValor(c)
FinAlgoritmo

Funcion return = esBisiesto1(n)
	Si n%4==0 Entonces
		Si n%100==0 Entonces
			Si n%400==0 Entonces
				return = 1
			SiNo
				return = 0
			FinSi
		SiNo
			return = 1
		FinSi
	SiNo
		return = 0
	FinSi
FinFuncion

Funcion return = esBisiesto2(n)
	Si (n%4==0)&((n%100!=0)|(n%400==0)) Entonces
		return = 1
	SiNo
		return = 0
	FinSi
FinFuncion

Funcion cargarAnios(v,tam)
	Para i<-0 Hasta tam-1 Con Paso 1 Hacer
		Leer v[i]
	FinPara
FinFuncion

Funcion r = contarBisiesto(v,tam)
	cont = 0
	Para j<-0 Hasta tam-1 Con Paso 1 Hacer
		Si esBisiesto2(v[j])==1 Entonces
			cont = cont + 1
		FinSi
	FinPara
	r = cont
FinFuncion

Funcion mostrarValor(num)
	Escribir num
FinFuncion
