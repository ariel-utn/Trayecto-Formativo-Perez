Algoritmo TP5EJ16
	acu1 = 0; acu2 = 0; acu3 = 0
	sum1 = 0; sum2 = 0; sum3 = 0
	Leer nroArt, unidVend, impVta
	Mientras nroArt <> 0 Hacer
		Si nroArt==1 Entonces
			acu1 = acu1+impVta
			sum1 = sum1+unidVend
		SiNo
			Si nroArt==2 Entonces
				acu2 = acu2+impVta
				sum2 = sum2+unidVend
			SiNo
				acu3 = acu3+impVta
				sum3 = sum3+unidVend
			FinSi
		FinSi
		Leer nroArt, unidVend, impVta
	FinMientras
	Escribir "Art 1 $: ", acu1
	Escribir "Art 2 $: ", acu2
	Escribir "Art 3 $: ", acu3
	Escribir "------"
	Si sum1>sum2 & sum1>sum3 Entonces
		Escribir "Art 1 cantidad: ", sum1
	SiNo
		Si sum2>sum3 Entonces
			Escribir "Art 2 cantidad: ", sum2
		SiNo
			Escribir "Art 3 cantidad: ", sum3
		FinSi
	FinSi
FinAlgoritmo
