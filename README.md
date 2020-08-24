# Biblioteca de aplicaciones en C

**Introducción**

Esta biblioteca de aplicaciones C te puede servir para guiarte y aprender el lenguaje incluso si tienes una materia en la universidad seguro te servirá, sin embargo no esta permitido copiar y pegar y lo que pretende esta biblioteca es que analices y en función a esto puedas desarrollar tus aplicaciones por lo que me doy a la tarea de hechizar esta biblioteca y **si usas el copiar y pegar solo para entregar tu jamás serás bueno para programar**. 
<form action="https://www.paypal.com/cgi-bin/webscr" method="post" target="_top">
<input type="hidden" name="cmd" value="_s-xclick" />
<input type="hidden" name="hosted_button_id" value="8CJHCFZUQG9PL" />
<input type="image" src="https://www.paypalobjects.com/es_XC/MX/i/btn/btn_donateCC_LG.gif" border="0" name="submit" title="PayPal - The safer, easier way to pay online!" alt="Donar con el botón PayPal" />
<img alt="" border="0" src="https://www.paypal.com/es_MX/i/scr/pixel.gif" width="1" height="1" />
</form>

**Operaciones Básicas** (AREAS.C)
En el presente documento observaremos los pasos que se utilizaron para desarrollar un programa el cual ingresaremos los datos necesarios para calcular el área de un cuadrad, triangulo y rectángulo, para esto utilizaremos 2 variables en común que es la base y la altura que es un común en los cálculos de las 3 figuras, iniciaremos desde la creación del Pseudocodigo, en lo siguiente programaremos utilizando el lenguaje C y al final compilaremos el ejecutable y en cada paso comprobaremos su correcto funcionamiento.

**Funciones Matemáticas** (OPER.C)
En el presente documento estaremos realizando operaciones matemáticas como la
potencia, raíz cuadrada, valores absolutos, funciones trigonométricas y logarítmicas a
través de un programa en lenguaje C utilizando la librería math, el cual al final
imprimirá el resultado en valores flotantes.

**Condicionales** (ELCOMETA.C)
Para esta actividad se decidió hacer el ejercicio con el cual usaremos los
condicionales, este consiste en obtener el precio de venta en función a la clave y el
costo de la materia prima se realizara una serie de cálculos para obtener el precio de
venta de este, para esto; contaremos con 6 claves del 1 al 6 el costo de producción
será igual a la materia prima más la mano de obra más los gastos de fabricación y el
Precio de venta será igual a el costo de producción más el 45 % de costo de
producción para esto es importante considerar lo siguiente: El costo de la mano de
obra se obtiene de la siguiente forma: para los productos con clave 3 o 4 se carga 75 %
del costo de la materia prima; para los que tienen clave 1 y 5 se carga 80%, y para los
que tienen clave 2 o 6, 85 % y para calcular el gasto de fabricación se considera que si
el artículo que se va a producir tiene claves 2 o 5, este gasto representa 30 % sobre el
costo de la materia prima; si las claves son 3 o 6, representa 35 %; si las claves son 1 o
4, representa 28 %. La materia prima tiene el mismo costo para cualquier clave.

**Condiciones anidadas** (NAUSA.C)
Para esta actividad se decidió hacer el ejercicio A con el cual usaremos los
condicionales anidadas, este consiste en obtener el precio final por n número de
hamburguesas esto considerando lo siguiente de una tienda de hamburguesas
llamada el “El náufrago satisfecho” considerando que ofrece hamburguesas sencillas a
$20.00, dobles a $25.00 y triples a $28.00 la empresa permite el pago con tarjeta y en
caso de realizar el pago con tarjeta se adicionara un cinco por ciento más a total, con
esto pretendemos utilizar las condiciones anidadas, adicional de manejar de forma
correcta el uso de las cadenas y las variables tipo String .

**Sentencia switch** (CALC.C)
En esta actividad se pretende aprender la sentencias de selección que en este caso
se refiere a la sentencia switch, en este caso elegimos el ejercicio A el cual consistirá
en capturar un número a y un número B en y definiremos diferentes selecciones que en
este caso serán cuatro podremos seleccionar del uno al cuatro al elegir el primero
sumaras los dos números, en caso del segundo se restaran los dos números, el tercero
se multiplicaran los dos números y al elegir el cuatro los números se dividirán.

**Uso de For** (TIENDA.C)
En esta actividad queremos aprender a utilizar la estructura de repetición “for”, para esto realizaremos un programa contemplando lo siguiente: si su precio es mayor o igual a $200 se le aplica un descuento de 15%, y si su precio es mayor a $100 pero menor a $200, el descuento es de 12%; de lo contrario, sólo se le aplica 10%, al final acumularemos el total a pagar contemplando el descuento de cada artículo para estos fines crearemos 4 artículos del A hasta el D cada uno costara $51, $101, $151, $201 respectivamente, utilizaremos una sentencia “switch” para asignar la cantidad a pagar y la sentencias “if” para hacer el descuento correspondiente al final la cantidad con el descuento se guardara en un acumulador esto lo repetirá por un máximo de 5 veces debido a que tenemos un máximo de 5 opciones en caso de elegir terminar o elegir una opción no valida, finalizara el acumulado y mostrara el total a pagar.

**Uso de Decrementos para Acercarnos al Numero de Euler**  (EULER.C)
En esta práctica vamos a trabajar los decrementos de forma que podamos utilizarlo para acercarnos lo más posible al número de Euler para esto vamos a utilizar la instrucción while lo que haremos es repetir una fórmula “n” número de veces esto para acercarnos lo más posible al exponente de la constante de Euler y esto lo lograremos que en cada repetición disminuyamos el valor de n menos uno hasta que la condición de la repetición nos dé n=0, en este momento terminara la repetición y mostrara el resultado esperado.

**Acumuladores mas Solo while** (ART.C)
Para esta práctica vamos desarrollar un programa que reciba como entrada los artículos vendidos por el vendedor en el transcurso de una semana para esto principalmente utilizaremos el repetidor while más un acumulador para sumar el costo y multiplicarlo por la cantidad vendida, esta variable que acumulara le llamaremos carrito, nos apoyaremos de una sentencia switch ya que realizaremos un menú con el que seleccionaremos los productos que se sumaran, de igual forma nos apoyaremos de la sentencia if para cuando decidamos no seleccionar algo de forma correcta y evitar los errores lo más posible, en cada repetición solicitaremos el número de producto y la cantidad de productos vendidos, lo multiplicaremos y los sumaremos a nuestra variable carrito, estas repeticiones se terminaran hasta que nuestras repeticiones cumplan el número que le indicamos o cuando presionemos cero, al final nuestro programa indicara la suma de todas las ventas ingresadas.

**Uso de while y do while** (COMI.C)
De igual forma que en nuestra actividad anterior vamos a utilizar un switch un if esto
solo para hacer más interactivo nuestro programa, a fin de aprender a usar mas
repetidores utilizaremos el do while este es un repetidor de diferente funcionalidad y
primero lo que hará será hacer la instrucción y al ultimo evaluar, en este caso
trabajaremos en un evaluador de pagos para los empleados ellos ganaran a la semana
200 pesos mas el 9% de lo que ha vendido y para esto contaremos 4 artículos, el
articulo 1 vale 239.99, el articulo 2 129.75, el articulo 3 99.95 y el articulo 4 350.89, en
cada iteración se podrá seleccionar el articulo vendido por el vendedor y se pedirá el
numero de ventas, esto para hacer una multiplicación y sumarlo al un cumulador para
al final sumar el 9% de nuestra venta total más 200$ enviándonos el total a pagar al
vendedor.

**Criba de Eratóstenes con Vectores** (CRIBA.C)
En esta actividad estaremos desarrollaremos un programa que obtenga el funcionamiento de la criba de Eratóstenes; este es un procedimiento para determinar los números primos hasta un determinado número, en este caso será hasta el 200, para esto utilizaremos un arreglo y utilizaremos el repetidor while y for para poder manipular nuestro arreglo y condicionaremos con if para modificar el arreglo e indicar lo que deseamos se muestre, primero declararemos como entero nuestros incrementadores (a,i,oc,x) y nuestro arreglo(cont[]) con una dimensión de 200, después llenaremos nuestro arreglo con un for del 2 al 200 indicándole que en cada dimensión será igual a cada incremento una vez que dimos el valor a nuestro arreglo, imprimiremos una leyenda para indicar que mostraremos lo números primo, usaremos un for de 2 a 200 y dentro de este escribiremos un un incrementador para que cada repetición empiece nuestro while con el número que queremos sacar el primo después agregaremos un repetidor while que se ejecute hasta el 200 dentro de este nuestro incrementado será igual a el incrementador mas uno y con un cálculo de residuo vamos a evaluar si es primo al numero actual y con un if evaluaremos si tiene residuo o no para poder sobre escribir nuestra dimensión con cero, y al final de cada iteración del for escribiremos solo las dimensiones que no fueron sobre escritas.

**Suma de Vectores** (VECTO.C)
En esta actividad vamos a desarrollar un programa combinando los vectores y utilizando for para hacer la suma de 2 vectores, primero declararemos la dimensión de nuestros vectores enseguida se pedirá que se la iteración máxima del de nuestros tres ciclos for que vamos a utilizar, el primero va a ser para solicitar los valores del vector A el segundo será para solicitar el vector B estos dos se encargaran de almacenar nuestros valores capturados en el ciclo for vamos a encargarnos de que en cada iteración se realice la suma y se imprima y también hacer la resta e imprimir el dato con esto lo que intentamos hacer es demostrar que al capturar los vectores lo podemos manipular los vectores para sumar, restar o hacer cualquier operación.

**Sumar Solo los Números dentro de cadenas** (CADE.C)
Para esta práctica vamos a desarrollar un programa que simule un reporte este; reporte en cada línea va a tener una cantidad, al final de cada iteración vamos a leer la cadena y vamos a realizar la suma del resultado, para esto utilizaremos adicional nuestra librería string.h de igual forma utilizaremos nuestros siempre funcionales repetidores while y for y como ya hemos visto en cada programa el condicional if ,ahora lo más importante a resaltar es el algoritmo que vamos a utilizar, en este caso lo que vamos hacer es que por cada iteración for vamos a capturar una cadena la cual leeremos su longitud con la función strlen() para determinar el fin y el inicio de la cadena por lo que la leeremos del ultimo carácter al carácter inicial, todo esto con nuestro repetidor while, en cada repetición de este buscaremos los números del cero al nueve, en caso de que encontremos un carácter numérico lo multiplicaremos por nuestra variable pot y lo sumaremos a un acumulador, enseguida multiplicaremos nuestra variable pot por 10, este movimiento es el interesante debido a que este hará que se pueda sumar nuestro segundo carácter como una decena, nuestro tercer carácter como centena y así sucesivamente, esto lo hacemos por que de momento no usaremos un conversor de cadena a flotante y aunque así sea el algoritmo trabajaría diferente, al final al dejar de detectar un carácter numérico nuestra variable pot se reiniciara esto para que en caso de encontrar otro carácter numérico inicie nuevamente con el proceso, es importante mencionar que se programo el programa para dejar de capturar al momento que escribimos la letra “x”, al final de todo se imprimirá el valor de nuestro acumulado que es el que ha estado sumando en cada iteración.

**Suma de Tablas con Arreglos Bidimensionales** (BIDM.C)
En esta actividad la mayoría del código a utilizar es para realizar la tabla pero considero que vale la pena para poner en práctica todo lo antes aprendido, adicional es importante mencionar que hay mejores forma de realizarlo pero en este caso lo vamos a aplicar de esta forma a fin de aprender la como utilizar nuestros arreglos bidimensionales y aunque no pareciera tan relevante veremos cómo se realizó la tabla ya que gracias a este proceso también se pudo llenar nuestro arreglo bidimensional el select solo fue utilizado para armar la tabla pero lo importante es el uso de los dos for anidados ya que gracias a estos fue posible llenar nuestro arreglo bidimensional un for empezaba llenando nuestro subíndice fila y otro for llenaba nuestro subíndice columna y mientras hacíamos esto estábamos imprimiendo los valores aleatorios generados en la pantalla.
Una vez impresos nuestros valores esto para comprobar que será correcto nuestro resultado final, procederemos a dar valor a una serie de variables esto para poder usar un while para sumar nuestras dimensiones este se repetirá hasta recorrer el valor de las filas por las columnas multiplicadas y cada vez que recorra una columna reiniciara el valor de fila para sumar en uno el valor columna al mismo tiempo imprimirá el valor de la suma de cada columna y se reiniciara solo para acumular el resultado de la segunda columna así hasta terminar de recorrer nuestro arreglo bidimensional, importante mencionar que en cada iteración estará sumando en un total el valor de cada subíndice para así poder imprimirlo al final.

**Uso de Módulos en C ** (MODU.C)
En esta última actividad vamos a aprender a trabajar modularmente, nos adentraremos a la forma de cómo hacer un módulo y poder reutilizar el código si así lo deseamos y aunque la práctica no se especifica sí solo será necesario evaluar 3 valores vamos a aplicar un vector para que si así lo consideremos necesario podamos realizar la practica con hasta cien valores, primero utilizaremos nuestro for esto para capturar nuestros valores en una lista de vectores el cual solo será posible detener al ingresar el número cero más una variable determinar el número de elementos que evaluaremos dentro de nuestro modulo, una vez que tengamos nuestros variables llenas los ingresaremos a un módulo los parámetros lista tomaran los valores de vectores que capturamos y elementos el número de elementos que capturamos, de esta forma en un for y con un if dentro que evalué el nuestra variable de lista sea mayor a una variable inicializada en cero de esta forma en cada iteración que encuentre un valor de la lista con un valor mayor a nuestro valor máximo este se sobrescribirá para el final regresar el valor máximo, de esta forma nuestro modulo nos servirá para regresarnos el valor máximo de los valores que nosotros ingresemos.

