Algoritmo TP6EJ15
	Dimension vec1[5]
	Para m<-0 Hasta 4 Con Paso 1 Hacer
		Leer vec1[m]
	FinPara
	Dimension vec2[9]
	x = 0
	Para z<-0 Hasta 8 Con Paso 1 Hacer
		Si z%2==0 Entonces
			vec2[z] = vec1[x]
			x = x+1
		SiNo
			vec2[z] = (vec1[x]+vec1[x-1])/2
		FinSi
	FinPara
	Para r<-0 Hasta 8 Con Paso 1 Hacer
		Escribir vec2[r]
	FinPara
FinAlgoritmo
