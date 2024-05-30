Algoritmo TP5EJ19
	// NIVEL 1 - LOTE
	// PTO A
	bandMin = 0
	// PTO B
	q1 = 0; q2 = 0
	Leer suc, dia, cant, imp, pago
	Mientras suc != 0 Hacer
		// NIVEL 2 - GRUPO
		// PTO A
		acuCajas = 0
		// PTO C
		acu1 = 0; acu2 = 0; acu3 = 0
		// PTO D
		contVenta = 0
		ant = suc
		Mientras suc==ant Hacer
			// NIVEL 3 -REGISTROS
			contVenta = contVenta+1
			Si contVenta==1 Entonces
				min1 = imp
				dia1 = dia
				min2 = imp
				dia2 = dia
			SiNo
				Si imp < min1 Entonces
					min2 = min1
					dia2 = dia1
					min1 = imp
					dia1 = dia
				SiNo
					Si (imp < min2) || (contVenta==2) Entonces
						min2 = imp
						dia2 = dia
					FinSi
				FinSi
			FinSi
			// PTO A
			acuCajas = acuCajas+cant
			// PTO B
			Si dia >15 Entonces
				q2 = q2+cant
			SiNo
				q1 = q1+cant
			FinSi
			// PTO C
			Segun pago Hacer
				1:
					acu1 = acu1+imp
				2:
					acu2 = acu2+imp
				3:
					acu3 = acu3+imp
			FinSegun
			Leer suc, dia, cant, imp, pago
		FinMientras
		Escribir "---- INFO: ",ant, " ----"
		Escribir "Cant.Cajas: ", acuCajas
		// NIVEL 2 - GRUPO
		// PTO A
		Si acuCajas > 10 Entonces
			Si bandMin==0 Entonces
				minCant = acuCajas
				minSuc = ant
				bandMin = 1
			SiNo
				Si acuCajas < minCant Entonces
					minCant = acuCajas
					minSuc = ant
				FinSi
			FinSi
		FinSi
		// PTO C
		total = acu1+acu2+acu3
		porc1 = (acu1*100)/total
		porc2 = (acu2*100)/total
		porc3 = (acu3*100)/total
		Escribir "PTO C) Debito: ", porc1,"%"
		Escribir "PTO C) Credito: ", porc2,"%"
		Escribir "PTO C) Contado: ", porc3,"%"
		// PTO D
		Escribir "PTO D) 1ra Venta ind. de menor imp. ", min1, " en el dia: ", dia1
		Escribir "PTO D) 2da Venta ind. de menor imp. ", min2, " en el dia: ", dia2
	FinMientras
	// NIVEL 1 - LOTE
	// PTO A
	Escribir "PTO A) Sucursal: ", minSuc, " con ", minCant, " cajas "
	// PTO B
	Si q1>q2 Entonces
		Escribir "Quincena 1"
	SiNo
		Escribir "Quincena 2"
	FinSi
FinAlgoritmo
