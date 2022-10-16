
<h1> Caso de estudio para A9. Herencia entre clases</h1>
<h2> Employment report </h2>
<h3> Descripción</h3>

Una empresa de exportación de servicios de software tiene un padrón de empleados compuesto por dos tipos fundamentales de trabajadores, adscritos a nómina y contratista. De cada empleado se conoce su nombre, cliente para el que trabaja, su salario neto en pesos mexicanos y la tarifa mensual por sus servicios en dólares americanos. De los de nómina además, el departamento al que pertenece. Al estar en auditoría, la empresa necesita exportar un reporte con el listado de empleados con sus salarios brutos y los impuestos que se generan por empleado en pesos mexicanos y el margen de ganancia que se tiene por los servicios de cada uno en dólares americanos.

<h4> Tenga en cuenta que: </h4>

* Para todos los empleados, el salario bruto es igual al salario_neto + el 10% en concepto de beneficios + MXN $1,200.00 en bonos de asistencia y puntualidad. Un empleado en nómina, se le incrementa el 15% del salario bruto por concepto de impuestos de contratación, mientras que a un contratista, sólo el 5%.
* El margen de ganancia es la diferencia entre la tarifa y el costo del empleado, expresado en USD. El costo de un empleado se calcula sumando salario bruto + costo_unitario_empleado. 
* El costo_unitario_empleado es un valor anual constante que para el 2022 se estimó en MXN $6,450.00.
Se toma a la fecha el cambio de moneda 20 MXN = 1 USD.
* Un empleado por nómina contribuye con un 23% de impuestos bajo el Régimen de Asalariado, mientras que un contratista tributa con un 5% bajo el Régimen de Confianza.

<h3> Orientación </h3>
1. Identifique las fórmulas correspondientes a los valores de:
  * Salario bruto
  * Impuesto
  * Margen de ganancia
para cada entidad descrita.

2. Elabore un reporte en Excel que complete con los valores anteriores la siguiente muestra:

| First and Last Name	| Client	| Clasification	| Department	| Rate	| Net Salary |	Brut Salary	| Taxes |	Revenue
| --- | --- | --- | --- | --- | --- | --- | --- | --- |
| Juan Gomez	| Google	| Payroll	| Production | $7,800.00 |	 $78,000.00 |	 |  |  | 
| Ana Perez	| Amazon	| Contractor	| NA	|  v$8,695.00 	|  $80,000.00 	|	 |  |  | 
| Manuel Molina	| Google	| Payroll| 	Design	|  $7,800.00 	|  $95,000.00 	 |	 |  |  | 
| Rosario Valdez	| Nebraska	| Contractor	| NA	|  $8,695.00 | 	 $85,000.00 	|	 |  |  | 
| Alberto Fonseca	| Aspiration |	Payroll| 	Testing	|  $9,995.00 |  $105,000.00 |	 |  |  | 

3. Identifique y especifique las clases presentes en el problema.
4. Programe la solución del ejercicio empleando la POO y la relación de herencia entre clases.
