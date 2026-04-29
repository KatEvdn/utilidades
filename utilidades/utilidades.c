////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
//
// ZONA DE IMPORTACIÓN: FICHEROS NECESARIOS A INCLUIR
//
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////

#include "utilidades.h"   // Mi propia colección de subprogramas útiles.



////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
//
// ZONA DE MACROS, CONSTANTES Y VARIABLES GLOBALES: PARA USO GLOBAL.
//
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////

char MSJxERROR[] = "¡VALOR NO VÁLIDO!";
char MSJxPAUSA[] = "Pulse INTRO para continuar... ";

int codigoError; // VARIABLE GLOBAL: Visible por todos los subprogramas.



////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
//
// ZONA DE CÓDIGO: CUERPOS DE LOS SUBPROGRAMAS DECLARADOS ANTES.
//
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////


void esperarINTRO (void)
{
  vaciarBuffer();
}

////////////////////////////////////////////////////////////////////////////////
//
//  FUNCIÓN:
//
//    void esperarINTRO (void);
//
//  USO:
//
//    Programa que produce una espera hasta que se pulse INTRO.
//
//  DETALLES:
//
//    Es un envoltorio de la función vaciarBuffer(), a la cual delega todo el
//    trabajo. Es una manera de crear "sinónimos" de acciones, es decir, de
//    tener disponibles varios nombres para hacer lo mismo.
//
//  PARÁMETROS DE ENTRADA:
//
//    Ninguno
//
//  VALOR DE SALIDA:
//
//    No devuelve ningún valor.
//
//  FUNCIONES DE LAS QUE DEPENDE:
//
//    vaciarBuffer()
//
//      Se delega toda la carga de trabajo a esta función.
//
////////////////////////////////////////////////////////////////////////////////


void descartarEntrada (void)
{
  vaciarBuffer();
}

////////////////////////////////////////////////////////////////////////////////
//
//  FUNCIÓN:
//
//    void descartarEntrada (void);
//
//  USO:
//
//    Programa que produce una espera hasta que se pulse INTRO.
//
//  DETALLES:
//
//    Es un envoltorio de la función vaciarBuffer(), a la cual delega todo el
//    trabajo. Es una manera de crear "sinónimos" de acciones, es decir, de
//    tener disponibles varios nombres para hacer lo mismo.
//
//  PARÁMETROS DE ENTRADA:
//
//    Ninguno
//
//  VALOR DE SALIDA:
//
//    No devuelve ningún valor.
//
//  FUNCIONES DE LAS QUE DEPENDE:
//
//    vaciarBuffer()
//
//      Se delega toda la carga de trabajo a esta función.
//
////////////////////////////////////////////////////////////////////////////////

void vaciarBuffer (void)
{
  // ENTER CREADO EN DEFINE = ASCII(10) = 0x0A
  
  // MEDIANTE BUCLE DO-WHILE:
  char letra;
  do
  {
    letra = getchar();
  } while (letra != ENTER);
  
  // MEDIANTE BUBLE WHILE:
  // while (getchar() != '\n')   ; // Bucle vacío
}

////////////////////////////////////////////////////////////////////////////////
//
//  FUNCIÓN:
//
//    void vaciarBuffer (void);
//
//  USO:
//
//    Programa que espera que el usuario pulse teclas a la espera de INTRO.
//
//  DETALLES:
//
//    Se basa en un bucle que va pidiendo letras del buffer de teclado y no
//    termina hasta que detecta que ha encontrado un "INTRO" (0x10). Cualquier
//    otro código ASCII introducido por el usuario se descarta. Se produce ECO
//    de cualquier tecla pulsada.
//
//  PARÁMETROS DE ENTRADA:
//
//    Ninguno
//
//  VALOR DE SALIDA:
//
//    No devuelve ningún valor.
//
//  FUNCIONES DE LAS QUE DEPENDE:
//
//    getchar()
//
//      Es el programa estándar ("prefabricado") que hace la logística de
//      comunicarse con el sistema operativo y con el hardware del teclado.
//
////////////////////////////////////////////////////////////////////////////////


void borrarPantalla (void)
{
  limpiarPantalla();
}

////////////////////////////////////////////////////////////////////////////////
//
//  FUNCIÓN:
//
//    void borrarPantalla (void);
//
//  USO:
//
//    Programa que borra lo que se haya emitido previamente en la pantalla
//    (normalmente usando la función printf()).
//
//  DETALLES:
//
//    Es un envoltorio de la función limpiarPantalla(), a la cual delega todo el
//    trabajo. Es una manera de crear "sinónimos" de acciones, es decir, de
//    tener disponibles varios nombres para hacer lo mismo.
//
//  PARÁMETROS DE ENTRADA:
//
//    Ninguno
//
//  VALOR DE SALIDA:
//
//    No devuelve ningún valor.
//
//  FUNCIONES DE LAS QUE DEPENDE:
//
//    limpiarPantalla()
//
//      Se delega toda la carga de trabajo a esta función.
//
////////////////////////////////////////////////////////////////////////////////


void limpiarPantalla (void)
{
  system(BORRAR);
}

////////////////////////////////////////////////////////////////////////////////
//
//  FUNCIÓN:
//
//    void limpiarPantalla (void);
//
//  USO:
//
//    Programa que borra lo que se haya emitido previamente en la pantalla
//    (normalmente usando la función printf()).
//
//  DETALLES:
//
//    Es un envoltorio de la función system(BORRAR), a la cual delega todo el
//    trabajo. Es una manera de crear "sinónimos" de acciones, es decir, de
//    tener disponibles varios nombres para hacer lo mismo.
//
//  PARÁMETROS DE ENTRADA:
//
//    Ninguno
//
//  VALOR DE SALIDA:
//
//    No devuelve ningún valor.
//
//  FUNCIONES DE LAS QUE DEPENDE:
//
//    system(BORRAR)
//
//      Se delega toda la carga de trabajo a esta función.
//
////////////////////////////////////////////////////////////////////////////////

void bajar (int nlineas)
{
  while(nlineas>0)
  {
    printf("\n");   // No se puede usar "mostrar()" porque crearíamos un bucle de llamadas.
    
    nlineas--;
  }
}

////////////////////////////////////////////////////////////////////////////////
//
//  FUNCIÓN:
//
//    void bajar (int nlineas);
//
//  USO:
//
//    Permite bajar el cursor en la pantalla, tantas líneas como se le indique.
//
//  DETALLES:
//
//    Crea tantas líneas en blanco como se le suministre como dato. No ubica el
//    cursor de texto en ninguna coordenada concreta, sino que genera contenido
//    en blanco en la pantalla, desplazando el punto donde se escribirá texto en
//    acciones posteriores. Utiliza para ello un bucle en cuyo interior se llama
//    a printf() con el código ASCII de salto de línea '\n' ó 10.
//
//  PARÁMETROS DE ENTRADA:
//
//    nlineas
//
//      Variable entera que recibirá del exterior el número de líneas en blanco
//      que se va a desplazar el cursor hacia abajo.
//
//  VALOR DE SALIDA:
//
//    No devuelve ningún valor.
//
//  FUNCIONES DE LAS QUE DEPENDE:
//
//    printf()
//
//      Es el programa estándar ("prefabricado") que hace la logística de
//      emitir por pantalla.
//
////////////////////////////////////////////////////////////////////////////////


void abajo (int nfils)
{
  bajar(nfils);
}

////////////////////////////////////////////////////////////////////////////////
//
//  FUNCIÓN:
//
//    void abajo (int nfils);
//
//  USO:
//
//    Permite bajar el cursor en la pantalla, tantas líneas como se le indique.
//
//  DETALLES:
//
//    Es un envoltorio de la función bajar(nfils), a la cual delega todo el
//    trabajo. Es una manera de crear "sinónimos" de acciones, es decir, de
//    tener disponibles varios nombres para hacer lo mismo.
//
//  PARÁMETROS DE ENTRADA:
//
//    nfils
//
//      Variable entera que recibirá del exterior el número de líneas en blanco
//      que se va a desplazar el cursor hacia abajo.
//
//  VALOR DE SALIDA:
//
//    No devuelve ningún valor.
//
//  FUNCIONES DE LAS QUE DEPENDE:
//
//    bajar(nfils)
//
//      Se delega toda la carga de trabajo a esta función.
//
////////////////////////////////////////////////////////////////////////////////


void saltar (int nfils)
{
  bajar(nfils);
}

////////////////////////////////////////////////////////////////////////////////
//
//  FUNCIÓN:
//
//    void saltar (int nfils);
//
//  USO:
//
//    Permite bajar el cursor en la pantalla, tantas líneas como se le indique.
//
//  DETALLES:
//
//    Es un envoltorio de la función bajar(nfils), a la cual delega todo el
//    trabajo. Es una manera de crear "sinónimos" de acciones, es decir, de
//    tener disponibles varios nombres para hacer lo mismo.
//
//  PARÁMETROS DE ENTRADA:
//
//    nfils
//
//      Variable entera que recibirá del exterior el número de líneas en blanco
//      que se va a desplazar el cursor hacia abajo.
//
//  VALOR DE SALIDA:
//
//    No devuelve ningún valor.
//
//  FUNCIONES DE LAS QUE DEPENDE:
//
//    bajar(nfils)
//
//      Se delega toda la carga de trabajo a esta función.
//
////////////////////////////////////////////////////////////////////////////////


void desplazarFils (int nfils)
{
  bajar(nfils);
}

////////////////////////////////////////////////////////////////////////////////
//
//  FUNCIÓN:
//
//    void desplazarFils (int nfils);
//
//  USO:
//
//    Permite bajar el cursor en la pantalla, tantas líneas como se le indique.
//
//  DETALLES:
//
//    Es un envoltorio de la función bajar(nfils), a la cual delega todo el
//    trabajo. Es una manera de crear "sinónimos" de acciones, es decir, de
//    tener disponibles varios nombres para hacer lo mismo.
//
//  PARÁMETROS DE ENTRADA:
//
//    nfils
//
//      Variable entera que recibirá del exterior el número de líneas en blanco
//      que se va a desplazar el cursor hacia abajo.
//
//  VALOR DE SALIDA:
//
//    No devuelve ningún valor.
//
//  FUNCIONES DE LAS QUE DEPENDE:
//
//    bajar(nfils)
//
//      Se delega toda la carga de trabajo a esta función.
//
////////////////////////////////////////////////////////////////////////////////


void desplazarV (int nfils)
{
  bajar(nfils);
}

////////////////////////////////////////////////////////////////////////////////
//
//  FUNCIÓN:
//
//    void desplazarV (int nfils);
//
//  USO:
//
//    Permite bajar el cursor en la pantalla, tantas líneas como se le indique.
//
//  DETALLES:
//
//    Es un envoltorio de la función bajar(nfils), a la cual delega todo el
//    trabajo. Es una manera de crear "sinónimos" de acciones, es decir, de
//    tener disponibles varios nombres para hacer lo mismo.
//
//  PARÁMETROS DE ENTRADA:
//
//    nfils
//
//      Variable entera que recibirá del exterior el número de líneas en blanco
//      que se va a desplazar el cursor hacia abajo.
//
//  VALOR DE SALIDA:
//
//    No devuelve ningún valor.
//
//  FUNCIONES DE LAS QUE DEPENDE:
//
//    bajar(nfils)
//
//      Se delega toda la carga de trabajo a esta función.
//
////////////////////////////////////////////////////////////////////////////////


void desplazarY (int nfils)
{
  bajar(nfils);
}

////////////////////////////////////////////////////////////////////////////////
//
//  FUNCIÓN:
//
//    void desplazarY (int nfils);
//
//  USO:
//
//    Permite bajar el cursor en la pantalla, tantas líneas como se le indique.
//
//  DETALLES:
//
//    Es un envoltorio de la función bajar(nfils), a la cual delega todo el
//    trabajo. Es una manera de crear "sinónimos" de acciones, es decir, de
//    tener disponibles varios nombres para hacer lo mismo.
//
//  PARÁMETROS DE ENTRADA:
//
//    nfils
//
//      Variable entera que recibirá del exterior el número de líneas en blanco
//      que se va a desplazar el cursor hacia abajo.
//
//  VALOR DE SALIDA:
//
//    No devuelve ningún valor.
//
//  FUNCIONES DE LAS QUE DEPENDE:
//
//    bajar(nfils)
//
//      Se delega toda la carga de trabajo a esta función.
//
////////////////////////////////////////////////////////////////////////////////


void indentar (int ncolumnas)
{
  for(int i=0; i<ncolumnas; i++)
  {
    printf(" ");   // No se puede usar "mostrar()" porque crearíamos un bucle de llamadas.
  }
}

////////////////////////////////////////////////////////////////////////////////
//
//  FUNCIÓN:
//
//    void indentar (int ncolumnas);
//
//  USO:
//
//    Permite avanzar el cursor en la pantalla, tantos espacios como se le indique.
//
//  DETALLES:
//
//    Crea tantos espacios como se le suministre como dato. No ubica el
//    cursor de texto en ninguna coordenada concreta, sino que genera contenido
//    en blanco en la pantalla, desplazando el punto donde se escribirá texto en
//    acciones posteriores. Utiliza para ello un bucle en cuyo interior se llama
//    a printf() con el código ASCII de espacio ' ' ó 32 hasta que se completen 
//    tantas vueltas como sean necesarias hasta llegar al número de espacios suministrado.
//
//  PARÁMETROS DE ENTRADA:
//
//    ncolumnas
//
//      Variable entera que recibirá del exterior el número de espacios
//      que se va a desplazar el cursor en el sentido de la tabulación.
//
//  VALOR DE SALIDA:
//
//    No devuelve ningún valor.
//
//  FUNCIONES DE LAS QUE DEPENDE:
//
//    printf()
//
//      Es el programa estándar ("prefabricado") que hace la logística de
//      emitir por pantalla.
//
////////////////////////////////////////////////////////////////////////////////


void derecha (int ncols)
{
  indentar(ncols);
}

////////////////////////////////////////////////////////////////////////////////
//
//  FUNCIÓN:
//
//    void derecha (int ncols);
//
//  USO:
//
//    Permite avanzar el cursor en la pantalla, tantos espacios como se le indique.
//
//  DETALLES:
//
//    Es un envoltorio de la función indentar(ncols), a la cual delega todo el
//    trabajo. Es una manera de crear "sinónimos" de acciones, es decir, de
//    tener disponibles varios nombres para hacer lo mismo.
//
//  PARÁMETROS DE ENTRADA:
//
//    ncols
//
//      Variable entera que recibirá del exterior el número de espacios
//      que se va a desplazar el cursor en el sentido de la tabulación.
//
//  VALOR DE SALIDA:
//
//    No devuelve ningún valor.
//
//  FUNCIONES DE LAS QUE DEPENDE:
//
//    indentar(ncols)
//
//      Se delega toda la carga de trabajo a esta función.
//
////////////////////////////////////////////////////////////////////////////////


void tabular (int ncols)
{
  indentar(ncols);
}

////////////////////////////////////////////////////////////////////////////////
//
//  FUNCIÓN:
//
//    void tabular (int ncols);
//
//  USO:
//
//    Permite avanzar el cursor en la pantalla, tantos espacios como se le indique.
//
//  DETALLES:
//
//    Es un envoltorio de la función indentar(ncols), a la cual delega todo el
//    trabajo. Es una manera de crear "sinónimos" de acciones, es decir, de
//    tener disponibles varios nombres para hacer lo mismo.
//
//  PARÁMETROS DE ENTRADA:
//
//    ncols
//
//      Variable entera que recibirá del exterior el número de espacios
//      que se va a desplazar el cursor en el sentido de la tabulación.
//
//  VALOR DE SALIDA:
//
//    No devuelve ningún valor.
//
//  FUNCIONES DE LAS QUE DEPENDE:
//
//    indentar(ncols)
//
//      Se delega toda la carga de trabajo a esta función.
//
////////////////////////////////////////////////////////////////////////////////


void desplazarCols (int ncols)
{
  indentar(ncols);
}

////////////////////////////////////////////////////////////////////////////////
//
//  FUNCIÓN:
//
//    void desplazarCols (int ncols);
//
//  USO:
//
//    Permite avanzar el cursor en la pantalla, tantos espacios como se le indique.
//
//  DETALLES:
//
//    Es un envoltorio de la función indentar(ncols), a la cual delega todo el
//    trabajo. Es una manera de crear "sinónimos" de acciones, es decir, de
//    tener disponibles varios nombres para hacer lo mismo.
//
//  PARÁMETROS DE ENTRADA:
//
//    ncols
//
//      Variable entera que recibirá del exterior el número de espacios
//      que se va a desplazar el cursor en el sentido de la tabulación.
//
//  VALOR DE SALIDA:
//
//    No devuelve ningún valor.
//
//  FUNCIONES DE LAS QUE DEPENDE:
//
//    indentar(ncols)
//
//      Se delega toda la carga de trabajo a esta función.
//
////////////////////////////////////////////////////////////////////////////////


void desplazarX (int ncols)
{
  indentar(ncols);
}

////////////////////////////////////////////////////////////////////////////////
//
//  FUNCIÓN:
//
//    void desplazarX (int ncols);
//
//  USO:
//
//    Permite avanzar el cursor en la pantalla, tantos espacios como se le indique.
//
//  DETALLES:
//
//    Es un envoltorio de la función indentar(ncols), a la cual delega todo el
//    trabajo. Es una manera de crear "sinónimos" de acciones, es decir, de
//    tener disponibles varios nombres para hacer lo mismo.
//
//  PARÁMETROS DE ENTRADA:
//
//    ncols
//
//      Variable entera que recibirá del exterior el número de espacios
//      que se va a desplazar el cursor en el sentido de la tabulación.
//
//  VALOR DE SALIDA:
//
//    No devuelve ningún valor.
//
//  FUNCIONES DE LAS QUE DEPENDE:
//
//    indentar(ncols)
//
//      Se delega toda la carga de trabajo a esta función.
//
////////////////////////////////////////////////////////////////////////////////


void desplazarH (int ncols)
{
  indentar(ncols);
}

////////////////////////////////////////////////////////////////////////////////
//
//  FUNCIÓN:
//
//    void desplazarH (int ncols);
//
//  USO:
//
//    Permite avanzar el cursor en la pantalla, tantos espacios como se le indique.
//
//  DETALLES:
//
//    Es un envoltorio de la función indentar(ncols), a la cual delega todo el
//    trabajo. Es una manera de crear "sinónimos" de acciones, es decir, de
//    tener disponibles varios nombres para hacer lo mismo.
//
//  PARÁMETROS DE ENTRADA:
//
//    ncols
//
//      Variable entera que recibirá del exterior el número de espacios
//      que se va a desplazar el cursor en el sentido de la tabulación.
//
//  VALOR DE SALIDA:
//
//    No devuelve ningún valor.
//
//  FUNCIONES DE LAS QUE DEPENDE:
//
//    indentar(ncols)
//
//      Se delega toda la carga de trabajo a esta función.
//
////////////////////////////////////////////////////////////////////////////////

void posicionar (int nfils, int ncols)
{
  bajar(nfils);
  tabular(ncols);
}
////////////////////////////////////////////////////////////////////////////////
//
//  FUNCIÓN:
//
//    void posicionar (int nfils, int ncols);
//
//  USO:
//
//    Permite avanzar el cursor en la pantalla, tantos espacios como se le indique y 
//    bajar el cursor en la pantalla, tantas líneas como se le indique.
//
//  DETALLES:
//
//    Es un envoltorio de las funciones bajar(nfils) y tabular(ncols), a las cuales delega todo el
//    trabajo. Es una forma de combinar desplazamiento vertical y horizontal en una sola función.
//
//  PARÁMETROS DE ENTRADA:
//
//    ncols
//
//      Variable entera que recibirá del exterior el número de espacios
//      que se va a desplazar el cursor en el sentido de la tabulación.
//
//    nfils
//
//      Variable entera que recibirá del exterior el número de líneas en blanco
//      que se va a desplazar el cursor hacia abajo.
//
//  VALOR DE SALIDA:
//
//    No devuelve ningún valor.
//
//  FUNCIONES DE LAS QUE DEPENDE:
//
//    bajar(nfils)
//    tabular(ncols)
//
//      Se delega toda la carga de trabajo a estas funciones.
//
////////////////////////////////////////////////////////////////////////////////


void desplazar (int nfils, int ncols)
{
  posicionar(nfils, ncols);
}

////////////////////////////////////////////////////////////////////////////////
//
//  FUNCIÓN:
//
//    void desplazar (int nfils, int ncols);
//
//  USO:
//
//    Permite avanzar el cursor en la pantalla, tantos espacios como se le indique y 
//    bajar el cursor en la pantalla, tantas líneas como se le indique.
//
//  DETALLES:
//
//    Es un envoltorio de la función posicionar (nfils, ncols), a la cual delega todo el
//    trabajo. Es una forma de combinar desplazamiento vertical y horizontal en una sola función.
//
//  PARÁMETROS DE ENTRADA:
//
//    ncols
//
//      Variable entera que recibirá del exterior el número de espacios
//      que se va a desplazar el cursor en el sentido de la tabulación.
//
//    nfils
//
//      Variable entera que recibirá del exterior el número de líneas en blanco
//      que se va a desplazar el cursor hacia abajo.
//
//  VALOR DE SALIDA:
//
//    No devuelve ningún valor.
//
//  FUNCIONES DE LAS QUE DEPENDE:
//
//    posicionar (nfils, ncols);
//
//      Se delega toda la carga de trabajo a esta función.
//
////////////////////////////////////////////////////////////////////////////////


void desplazarXY (int nfils, int ncols)
{
  posicionar(nfils, ncols);
}

////////////////////////////////////////////////////////////////////////////////
//
//  FUNCIÓN:
//
//    void desplazarXY (int nfils, int ncols);
//
//  USO:
//
//    Permite avanzar el cursor en la pantalla, tantos espacios como se le indique y 
//    bajar el cursor en la pantalla, tantas líneas como se le indique.
//
//  DETALLES:
//
//    Es un envoltorio de la función posicionar (nfils, ncols), a la cual delega todo el
//    trabajo. Es una forma de combinar desplazamiento vertical y horizontal en una sola función.
//
//  PARÁMETROS DE ENTRADA:
//
//    ncols
//
//      Variable entera que recibirá del exterior el número de espacios
//      que se va a desplazar el cursor en el sentido de la tabulación.
//
//    nfils
//
//      Variable entera que recibirá del exterior el número de líneas en blanco
//      que se va a desplazar el cursor hacia abajo.
//
//  VALOR DE SALIDA:
//
//    No devuelve ningún valor.
//
//  FUNCIONES DE LAS QUE DEPENDE:
//
//    posicionar (nfils, ncols);
//
//      Se delega toda la carga de trabajo a esta función.
//
////////////////////////////////////////////////////////////////////////////////

void retardoSegundos (int segundosmax)
{
  // POSIBILIDAD: Poner en función de la que usa milisegundos.
  
  // AJUSTAR CEROS DE LOS BUCLES PARA APROXIMAR EL PERIODO.

  for(int nseg=0; nseg < segundosmax ; nseg++)
  {
    for(int i=0; i<100; i++)
      for(int j=0; j<1000; j++)
        for(int k=0; k<1000; k++);
  }
}

////////////////////////////////////////////////////////////////////////////////
//
//  FUNCIÓN:
//
//    void retardoSegundos (int segundosmax);
//
//  USO:
//
//    Permite gastar un tiempo, que luego puede usarse para retardar alguna acción.
//
//  DETALLES:
//
//    Crea tres bucles anidados que deben gastar tanto tiempo en la 
//    realización de los ciclos de reloj del procesador como sea necesario 
//    para llegar a un segundo, de tal forma que 
//    la función tenga sentido. El bucle inicial ejecuta estos 
//    bucles funcionales tantas veces como segundos (Ajustando los valores
//    para conseguir el tiempo de duración deseado para cada tipo de procesador
//    en el que se ejecute la función) se hayan solicitado.
//
//  PARÁMETROS DE ENTRADA:
//
//    segundosmax
//     
//      Variable entera que define el número de segundos durante el que se
//      ejecutará la función.
//
//  VALOR DE SALIDA:
//
//    No devuelve ningún valor.
//
//  FUNCIONES DE LAS QUE DEPENDE:
//
//    bucles for(,,,)
//
////////////////////////////////////////////////////////////////////////////////


void retardoMilisegundos (int milisegundosmax)
{
  int i, j;
  
  // AJUSTAR CEROS DE LOS BUCLES PARA APROXIMAR EL PERIODO.

  for (int nmiliseg=0; nmiliseg<milisegundosmax ; nmiliseg++)
    for (i=0; i<100; i++)
      for (j=0; j<1000; j++);
}

////////////////////////////////////////////////////////////////////////////////
//
//  FUNCIÓN:
//
//    void retardoMilisegundos (int milisegundosmax);
//
//  USO:
//
//    Permite gastar un tiempo, que luego puede usarse para retardar alguna acción.
//
//  DETALLES:
//
//    Crea tres bucles anidados que deben gastar tanto tiempo en la 
//    realización de los ciclos de reloj del procesador como sea necesario 
//    para llegar a un milisegundo, de tal forma que 
//    la función tenga sentido. El bucle inicial ejecuta estos 
//    bucles funcionales tantas veces como milisegundos (Ajustando los valores
//    para conseguir el tiempo de duración deseado para cada tipo de procesador
//    en el que se ejecute la función) se hayan solicitado.
//
//  PARÁMETROS DE ENTRADA:
//
//    milisegundosmax
//     
//      Variable entera que define el número de milisegundos durante el que se
//      ejecutará la función.
//
//  VALOR DE SALIDA:
//
//    No devuelve ningún valor.
//
//  FUNCIONES DE LAS QUE DEPENDE:
//
//    bucles for(,,,)
//
////////////////////////////////////////////////////////////////////////////////


void retrasoMilisegundos (int milisegundos)
{
  double e = 0;

  clock_t t0 = clock();   // clock_t es un tipo interno equivalente a UINT32.
  
  do
  {
    
    e = 1000*(double)(clock()-t0)/CLOCKS_PER_SEC;

  } while (e<milisegundos);
}

////////////////////////////////////////////////////////////////////////////////
//
//  FUNCIÓN:
//
//    void retrasoMilisegundos (int milisegundos);
//
//  USO:
//
//    Permite gastar un tiempo, que luego puede usarse para retardar alguna acción.
//
//  DETALLES:
//    Crea una variable double y una clock_t que inicia un "temporizador".
//    Después crea un bucle que convierte el clock_t, que entiende el ordenador,
//    en double para poder dividirlo entre CLOCKS_PER_SEC. Esta operación lo pasa
//    de ciclos por segundo del tiempo total (desde que se inicializó clock() hasta que
//    se mencionó dentro del bucle) a microsegundos y lo multiplica por 1000 
//    para obtener un milisegundo. Mientras los milisegundos que tenga asignados "e"
//    sean menos que los milisegundos pedidos, el bucle se repite y como el "temporizador"
//    no se para, cada vez que pase por clock() da el tiempo que lleva (en este caso
//    haciendo el bucle). Cundo los milisegundos lleguen a los pedidos, el bucle
//    finaliza y la función termina.
//   
//  PARÁMETROS DE ENTRADA:
//
//    milisegundos
//     
//      Variable entera que define el número de milisegundos durante el que se
//      ejecutará la función.
//
//  VALOR DE SALIDA:
//
//    No devuelve ningún valor.
//
//  FUNCIONES DE LAS QUE DEPENDE:
//
//    clock()
//      Función de tipo clock_t que da el tiempo que ha pasado desde
//    que se creó, fuera del bucle en este caso.
//    
//    bucle do {} while
//
////////////////////////////////////////////////////////////////////////////////

void esperarSegundos (int segundos)
{
  #ifdef SO_WINDOWS
    Sleep(segundos*1000);
  #else
    sleep(segundos);
  #endif
}

////////////////////////////////////////////////////////////////////////////////
//
//  FUNCIÓN:
//
//    void esperarSegundos (int segundos);
//
//  USO:
//
//    Permite gastar un tiempo, que luego puede usarse para retardar alguna acción.
//
//  DETALLES:
//    Dependiendo del sistema operativo usa una función u otra, ya que en 
//    Windows, la función trabaja con milisegundos y en Linux en segundos.
//   
//  PARÁMETROS DE ENTRADA:
//
//    segundos
//     
//      Variable entera que define el número de segundos durante el que se
//      pausará el proceso.
//
//  VALOR DE SALIDA:
//
//    No devuelve ningún valor.
//
//  FUNCIONES DE LAS QUE DEPENDE:
//
//    sleep()
//      Función que paraliza el proceso durante tantos segundos como
//      se especifique entre paréntesis.
//
////////////////////////////////////////////////////////////////////////////////


void esperarMilisegundos (int milisegundos)
{
  #ifdef SO_WINDOWS
    Sleep(milisegundos);
  #else
    usleep(milisegundos*1000);   // Alternativa: nanosleep() de "time.h".
  #endif
}
////////////////////////////////////////////////////////////////////////////////
//
//  FUNCIÓN:
//
//    void esperarMilisegundos (int milisegundos);
//
//  USO:
//
//    Permite gastar un tiempo, que luego puede usarse para retardar alguna acción.
//
//  DETALLES:
//    Dependiendo del sistema operativo usa una función u otra, ya que en 
//    Windows, la función trabaja con milisegundos y en Linux, usleep()
//    trabaja con microsegundos.
//   
//  PARÁMETROS DE ENTRADA:
//
//    milisegundos
//     
//      Variable entera que define el número de milisegundos durante el que se
//      pausará el proceso.
//
//  VALOR DE SALIDA:
//
//    No devuelve ningún valor.
//
//  FUNCIONES DE LAS QUE DEPENDE:
//
//    Sleep()
//      Función que paraliza el proceso durante tantos milisegundos como
//      se especifique entre paréntesis.
//
////////////////////////////////////////////////////////////////////////////////


void pausa (void)
{
  pausaEstandar(1, 2);
}
////////////////////////////////////////////////////////////////////////////////
//
//  FUNCIÓN:
//
//    void pausa (void);
//
//  USO:
//
//
//  DETALLES:
//   
//  PARÁMETROS DE ENTRADA:
//
//    Ninguno
//
//  VALOR DE SALIDA:
//
//    No devuelve ningún valor.
//
//  FUNCIONES DE LAS QUE DEPENDE:
//
//    pausaEstandar()
//
////////////////////////////////////////////////////////////////////////////////

void pausaEstandar (int nfils, int ncols)
{
  pausaGenerica(MSJxPAUSA, nfils, ncols, FALSE);
}
////////////////////////////////////////////////////////////////////////////////
//
//  FUNCIÓN:
//
//    void pausaEstandar (int nfils, int ncols);
//
//  USO:
//
//    Presenta algo en pantalla y produce una espera hasta que se pulse INTRO.
//
//  DETALLES:
//    Baja tantas líneas como nfils y tabula tantas veces como ncols.
//    Donde queda el cursor muestra el mensaje de pausa.
//    No salta de línea. Espera hasta que se pulse INTRO para continuar.
//   
//  PARÁMETROS DE ENTRADA:
//
//    ncols
//
//      Variable entera que recibirá del exterior el número de espacios
//      que se va a desplazar el cursor en el sentido de la tabulación.
//
//    nfils
//
//      Variable entera que recibirá del exterior el número de líneas en blanco
//      que se va a desplazar el cursor hacia abajo.
//
//  VALOR DE SALIDA:
//
//    No devuelve ningún valor.
//
//  FUNCIONES DE LAS QUE DEPENDE:
//
//    pausaGenerica()
//
////////////////////////////////////////////////////////////////////////////////


void pausaGenerica (char msjtxt[], int nfils, int ncols, boolean nuevalinea)
{
  mensaje_x_y(msjtxt, nfils, ncols, nuevalinea);

  esperarINTRO();
}
////////////////////////////////////////////////////////////////////////////////
//
//  FUNCIÓN:
//
//    void pausaGenerica (char msjtxt[], int nfils, int ncols, boolean nuevalinea);
//
//  USO:
//
//    Presenta algo en pantalla y produce una espera hasta que se pulse INTRO.
//
//  DETALLES:
//    Baja tantas líneas como nfils y tabula tantas veces como ncols.
//    Donde queda el cursor muestra el mensaje que ha recibido.
//    Además si nuevalinea es TRUE, salta de línea. Espera hasta que se 
//    pulse INTRO para continuar.
//   
//  PARÁMETROS DE ENTRADA:
//
//    msjtxt[]
//
//      Variable tipo char que recibe el texto a mostrar.
//
//    nuevalinea
//
//      Variable de tipo boolean que especifica si se crea una línea en blanco.
//
//    ncols
//
//      Variable entera que recibirá del exterior el número de espacios
//      que se va a desplazar el cursor en el sentido de la tabulación.
//
//    nfils
//
//      Variable entera que recibirá del exterior el número de líneas en blanco
//      que se va a desplazar el cursor hacia abajo.
//
//  VALOR DE SALIDA:
//
//    No devuelve ningún valor.
//
//  FUNCIONES DE LAS QUE DEPENDE:
//
//    mensaje_x_y()
//    esperarINTRO()
//
////////////////////////////////////////////////////////////////////////////////

void texto (char msjtxt[])
{
  puts(msjtxt);
}
////////////////////////////////////////////////////////////////////////////////
//
//  FUNCIÓN:
//
//    void texto (char msjtxt[]);
//
//  USO:
//
//    Presenta un mensaje en pantalla.
//
//  DETALLES:
//   Muestra en pantalla un mensaje que recibe del exterior.
//   
//  PARÁMETROS DE ENTRADA:
//
//    msjtxt[]
//
//      Variable tipo char que recibe el texto a mostrar.
//
//  VALOR DE SALIDA:
//
//    No devuelve ningún valor.
//
//  FUNCIONES DE LAS QUE DEPENDE:
//
//    puts()
//
////////////////////////////////////////////////////////////////////////////////


void separar()
{
  mostrar("\n");
}

////////////////////////////////////////////////////////////////////////////////
//
//  FUNCIÓN:
//
//    void separar();
//
//  USO:
//
//    Presenta predeterminadamente un salto de línea en pantalla.
//    Es como printf("\n");
//
//  DETALLES:
//    Baja una línea (es como pulsar INTRO).
//   
//  PARÁMETROS DE ENTRADA:
//
//    Ninguno
//
//  VALOR DE SALIDA:
//
//    No devuelve ningún valor.
//
//  FUNCIONES DE LAS QUE DEPENDE:
//
//    mostrar()
//
////////////////////////////////////////////////////////////////////////////////

void nuevaLinea (void)
{
  saltar(1);
}
////////////////////////////////////////////////////////////////////////////////
//
//  FUNCIÓN:
//
//    void nuevaLinea (void);
//
//  USO:
//
//    Permite bajar el cursor en la pantalla una línea.
//
//  DETALLES:
//
//    Baja una línea (es como separar()).
//
//  PARÁMETROS DE ENTRADA:
//
//   Ninguno
//
//  VALOR DE SALIDA:
//
//    No devuelve ningún valor.
//
//  FUNCIONES DE LAS QUE DEPENDE:
//
//    saltar()
//
////////////////////////////////////////////////////////////////////////////////

void mostrar (char msjtxt[])
{
  mostrar_x_y (msjtxt, 0, 0);
}
////////////////////////////////////////////////////////////////////////////////
//
//  FUNCIÓN:
//
//    void mostrar (char msjtxt[]);
//
//  USO:
//
//    Presenta un mensaje en pantalla.
//
//  DETALLES:
//    No baja líneas y no tabula. Sólo muestra el mensaje que ha recibido.
//   
//  PARÁMETROS DE ENTRADA:
//
//    msjtxt[]
//
//  VALOR DE SALIDA:
//
//    No devuelve ningún valor.
//
//  FUNCIONES DE LAS QUE DEPENDE:
//
//    mostrar_x_y ()
//
////////////////////////////////////////////////////////////////////////////////


void mostrar_x_y (char msjtxt[], int nfils, int ncols)
{
  mensaje_x_y (msjtxt, nfils, ncols, FALSE);
}
////////////////////////////////////////////////////////////////////////////////
//
//  FUNCIÓN:
//
//    void mostrar_x_y (char msjtxt[], int nfils, int ncols);
//
//  USO:
//
//    Presenta un mensaje con saltos de línea o tabulaciones al gusto en pantalla.
//
//  DETALLES:
//    Baja tantas líneas como nfils y tabula tantas veces como ncols.
//    Donde queda el cursor muestra el mensaje que ha recibido.
//    Además como nuevalinea es FALSE, no salta de línea.
//   
//  PARÁMETROS DE ENTRADA:
//
//    msjtxt[], nfils, ncols
//
//  VALOR DE SALIDA:
//
//    No devuelve ningún valor.
//
//  FUNCIONES DE LAS QUE DEPENDE:
//
//    mensaje_x_y ()
//
////////////////////////////////////////////////////////////////////////////////


void escribir (char msjtxt[])
{
  escribir_x_y (msjtxt, 0, 0);
}
////////////////////////////////////////////////////////////////////////////////
//
//  FUNCIÓN:
//
//    void escribir (char msjtxt[]);
//
//  USO:
//
//    Presenta un mensaje en pantalla.
//
//  DETALLES:
//    No baja líneas y no tabula. Sólo muestra el mensaje que ha recibido.
//   
//  PARÁMETROS DE ENTRADA:
//
//    msjtxt[]
//
//  VALOR DE SALIDA:
//
//    No devuelve ningún valor.
//
//  FUNCIONES DE LAS QUE DEPENDE:
//
//    escribir_x_y ()
//
////////////////////////////////////////////////////////////////////////////////


void escribir_x_y (char msjtxt[], int nfils, int ncols)
{
  mensaje_x_y (msjtxt, nfils, ncols, FALSE);
}
////////////////////////////////////////////////////////////////////////////////
//
//  FUNCIÓN:
//
//    void escribir_x_y (char msjtxt[], int nfils, int ncols);
//
//  USO:
//
//    Presenta un mensaje con saltos de línea o tabulaciones al gusto en pantalla.
//
//  DETALLES:
//    Baja tantas líneas como nfils y tabula tantas veces como ncols.
//    Donde queda el cursor muestra el mensaje que ha recibido.
//    Además como nuevalinea es FALSE, no salta de línea.
//   
//  PARÁMETROS DE ENTRADA:
//
//    msjtxt[], nfils, ncols
//
//  VALOR DE SALIDA:
//
//    No devuelve ningún valor.
//
//  FUNCIONES DE LAS QUE DEPENDE:
//
//    mensaje_x_y ()
//
////////////////////////////////////////////////////////////////////////////////


void imprimir (char msjtxt[])
{
  imprimir_x_y (msjtxt, 0, 0);
}

////////////////////////////////////////////////////////////////////////////////
//
//  FUNCIÓN:
//
//    void imprimir (char msjtxt[]);
//
//  USO:
//
//    Presenta un mensaje en pantalla.
//
//  DETALLES:
//    No baja líneas y no tabula. Sólo muestra el mensaje que ha recibido.
//   
//  PARÁMETROS DE ENTRADA:
//
//    msjtxt[]
//
//  VALOR DE SALIDA:
//
//    No devuelve ningún valor.
//
//  FUNCIONES DE LAS QUE DEPENDE:
//
//    imprimir_x_y ()
//
////////////////////////////////////////////////////////////////////////////////

void imprimir_x_y (char msjtxt[], int nfils, int ncols)
{
  mensaje_x_y (msjtxt, nfils, ncols, FALSE);
}

////////////////////////////////////////////////////////////////////////////////
//
//  FUNCIÓN:
//
//    void imprimir_x_y (char msjtxt[], int nfils, int ncols);
//
//  USO:
//
//    Presenta un mensaje con saltos de línea o tabulaciones al gusto en pantalla.
//
//  DETALLES:
//    Baja tantas líneas como nfils y tabula tantas veces como ncols.
//    Donde queda el cursor muestra el mensaje que ha recibido.
//    Además como nuevalinea es FALSE, no salta de línea.
//   
//  PARÁMETROS DE ENTRADA:
//
//    msjtxt[], nfils, ncols
//
//  VALOR DE SALIDA:
//
//    No devuelve ningún valor.
//
//  FUNCIONES DE LAS QUE DEPENDE:
//
//    mensaje_x_y ()
//
////////////////////////////////////////////////////////////////////////////////


void mensaje (char msjtxt[], int nfils, int ncols)
{
  mensaje_x_y (msjtxt, nfils, ncols, FALSE);
}

////////////////////////////////////////////////////////////////////////////////
//
//  FUNCIÓN:
//
//    void mensaje (char msjtxt[], int nfils, int ncols);
//
//  USO:
//
//    Presenta un mensaje con saltos de línea o tabulaciones al gusto en pantalla.
//
//  DETALLES:
//    Baja tantas líneas como nfils y tabula tantas veces como ncols.
//    Donde queda el cursor muestra el mensaje que ha recibido.
//    Además como nuevalinea es FALSE, no salta de línea.
//   
//  PARÁMETROS DE ENTRADA:
//
//    msjtxt[], nfils, ncols
//
//  VALOR DE SALIDA:
//
//    No devuelve ningún valor.
//
//  FUNCIONES DE LAS QUE DEPENDE:
//
//    mensaje_x_y ()
//
////////////////////////////////////////////////////////////////////////////////


void actual();
void mensaje_x_y (char msjtxt[], int nfils, int ncols, boolean nuevalinea)
{
  saltar(nfils);
  tabular(ncols);
  printf("%s", msjtxt);
  
  if (nuevalinea)   printf("\n");   // ALTERNATIVA: if (nuevalinea)   putchar(ENTER);
}

////////////////////////////////////////////////////////////////////////////////
//
//  FUNCIÓN:
//
//    void mensaje_x_y (char msjtxt[], int nfils, int ncols, boolean nuevalinea);
//
//  USO:
//
//    Presenta algo en pantalla.
//
//  DETALLES:
//    Baja tantas líneas como nfils y tabula tantas veces como ncols.
//    Donde queda el cursor muestra el mensaje que ha recibido.
//    Además si nuevalinea es TRUE, salta de línea.
//   
//  PARÁMETROS DE ENTRADA:
//
//    msjtxt[], nfils, ncols, nuevalinea
//
//  VALOR DE SALIDA:
//
//    No devuelve ningún valor.
//
//  FUNCIONES DE LAS QUE DEPENDE:
//
//    saltar()
//    tabular()
//    printf()
//
////////////////////////////////////////////////////////////////////////////////

void iniciaAleatorizador (void)
{
  srand(time(NULL));
}
////////////////////////////////////////////////////////////////////////////////
//
//  FUNCIÓN:
//
//    void iniciaAleatorizador (void);
//
//  USO:
//
//    Genera un número aleatorio.
//
//  DETALLES:
//    time(NULL) da la cantidad de segundos que han pasado desde el 1 de enero de 1970.
//    srand() da un número aleatorio usando time(NULL) cmomo semilla para que lo de dentro (semilla)
//    siempre sea distinto y no genere la misma sucesión siempre.
//   
//  PARÁMETROS DE ENTRADA:
//
//    Ninguno
//
//  VALOR DE SALIDA:
//
//    No devuelve ningún valor.
//
//  FUNCIONES DE LAS QUE DEPENDE:
//
//    srand()
//    time(NULL)
//
////////////////////////////////////////////////////////////////////////////////

int generaAleatorioEntero (int limite)
{
  // Generará un número entre 0 y limite - 1, nunca llega a limite.
  return (rand() % limite);
  //TAMBIÉN PUEDE SER:
  // int num;
  //num= rand()%limite; Se hace la división y se coge el resto,
  //					que si el límite es 100 será entre 0 y 99.
  //return num;
}
////////////////////////////////////////////////////////////////////////////////
//
//  FUNCIÓN:
//
//    void generaAleatorioEntero (int limite);
//
//  USO:
//
//    Genera un número aleatorio.
//
//  DETALLES:
//    Se devuelve el resultado del resto de la división de un número aleatorio
//    entre el límite, de tal forma que el resultado nunca será el límite,
//    sino que estará entre 0 y limite-1.
//   
//  PARÁMETROS DE ENTRADA:
//
//    limite
//
//  VALOR DE SALIDA:
//
//    Resto de la división de un número aleatorio entre el límite
//
//  FUNCIONES DE LAS QUE DEPENDE:
//
//    Ninguna
//
////////////////////////////////////////////////////////////////////////////////

int obtenerEntero (void)
{
  int valor;
  
  scanf("%d", &valor);
  vaciarBuffer();

  return valor;
}

////////////////////////////////////////////////////////////////////////////////
//
//  FUNCIÓN:
//
//    int obtenerEntero (void);
//
//  USO:
//
//    Sustitución mejorada de scanf() que impide que queden letras almacenadas
//    en el buffer de teclado para posteriores operaciones de entrada de datos.
//
//  DETALLES:
//
//    La función scanf() no retira el código ASCII de la letra INTRO del buffer
//    de teclado ni posibles letras después de un texto que se pueda convertir
//    en una cantidad. Nos ayudamos de otra función creada en esta librería,
//    vaciarBuffer() para ello. No muestra ningún mensaje por pantalla.
//
//  PARÁMETROS DE ENTRADA:
//
//    Ninguno.
//
//  VALOR DE SALIDA:
//
//    Devuelve al exterior el valor entero que a su vez ha recibido en la
//    variable "valor" de la función scanf(), mediante paso por referencia.
//
//  FUNCIONES DE LAS QUE DEPENDE:
//
//    scanf()
//
//      Es el programa estándar ("prefabricado") que hace la logística de
//      leer caracteres del teclado y convertirlos en la cantidad entera.
//
////////////////////////////////////////////////////////////////////////////////

char obtenerCaracterASCII(void)
{
  return obtenerLetra();
}

////////////////////////////////////////////////////////////////////////////////
//
//  FUNCIÓN:
//
//    char obtenerCaracterASCII (void);
//
//  USO:
//
//    Devolver la comprobación de si el código de un caracter está entre los primeros 128 ASCII.
//
//  DETALLES:
//
//    Obtiene la letra con getchar y luego comprueba si su código ASCII 
//    está entre los primeros 128. Si es así, devuelve la misma letra. 
//    Si no, devuelve la letra nula.
//
//  PARÁMETROS DE ENTRADA:
//
//    Ninguno
//
//  VALOR DE SALIDA:
//
//    obtenerLetra()
//
//  FUNCIONES DE LAS QUE DEPENDE:
//
//    obtenerLetra()
//
////////////////////////////////////////////////////////////////////////////////

char obtenerLetra (void)   // Sólo ASCII VÁLIDO.
{
  char letra, valida;
  
  letra = getchar();
  
  if (letra < 128)
    valida = letra; // Devolveremos la letra
  else
    valida = '\0';  // Devolveremos la letra nula.
  
  // VACIAMOS POSIBLES CÓDIGOS EN EL BUFFER.
  //   Se incluye el INTRO EXTRA y una posible escritura de múltiples letras.
  if (letra != ENTER)   vaciarBuffer();

  return valida;
}
//depende de getchar y vaciarBuffer
////////////////////////////////////////////////////////////////////////////////
//
//  FUNCIÓN:
//
//    char obtenerLetra (void);
//
//  USO:
//
//    Comprobar si el código de un caracter está entre los primeros 128 ASCII.
//
//  DETALLES:
//
//    Obtiene la letra con getchar y luego comprueba si su código ASCII 
//    está entre los primeros 128. Si es así, devuelve la misma letra. 
//    Si no, devuelve la letra nula.
//
//  PARÁMETROS DE ENTRADA:
//
//    Ninguna
//
//  VALOR DE SALIDA:
//
//    valida (la letra dada si era de las permitidas o la nula si no lo era)
//
//  FUNCIONES DE LAS QUE DEPENDE:
//
//    getchar()
//    vaciarBuffer()
//
////////////////////////////////////////////////////////////////////////////////

int pedirEntero (char msjtxt[], int ncols)
{
  mensaje(msjtxt, 0, ncols);
  mostrar(": ");
  
  return obtenerEntero();
}

////////////////////////////////////////////////////////////////////////////////
//
//  FUNCIÓN:
//
//    int pedirEntero (char msjtxt[], int ncols);
//
//  USO:
//
//    Muestra un mensaje en pantalla para pedir un dato entero al usuario. El
//    mensaje es configurable y desplazable un número de caracteres desde la
//    izquierda de la pantalla.
//
//  DETALLES:
//
//    Es como un printf() más un scanf(), mejorados. Puede desplazarse el texto
//    recibido mediante un segundo dato entero. También impide problemas del
//    buffer de teclado con scanf(). Para ello, delega el emitir el mensaje por
//    pantalla a las funciones msj() y mostrar(), y la toma del dato entero a la
//    función obtenerEntero().
//
//  PARÁMETROS DE ENTRADA:
//
//    msjtxt
//
//      Variable de tipo vector de caracteres donde se recibirá el texto que se
//      debe mostrar, que debe ser una cadena terminada en '\0'.
//
//    ncols
//
//      Variable entera donde se recibirá del exterior el número de espacios en
//      blanco a añadir antes del mensaje.
//
//  VALOR DE SALIDA:
//
//    Devuelve al programa donde se invoque, un valor entero que a su vez esta
//    función ha recibido desde la función obtenerEntero().
//
//  FUNCIONES DE LAS QUE DEPENDE:
//
//    msj()
//
//      Se encarga efectivamente de mostrar el mensaje.
//
//    mostrar()
//
//      Usada para añadir en pantalla un texto adicional después del mensaje.
//
//    obtenerEntero()
//
//      Es la función que se encarga en la práctica de obtener la cantidad.
//
////////////////////////////////////////////////////////////////////////////////



int pedirEnteroPositivo (char msjtxt[], int ncols, boolean mostrarerror)
{
int num;
  
  do
  {
    mensaje(msjtxt, 0, ncols);
    mostrar(": ");
    num = obtenerEntero();
    
    if (mostrarerror)
    {
      if (num < 0)
      {
        nuevaLinea();
        mensaje_x_y(MSJxERROR, 0, ncols+2, TRUE);
        nuevaLinea();
      }
    }
    
  } while (num < 0);
  
  return num;
}

////////////////////////////////////////////////////////////////////////////////
//
//  FUNCIÓN:
//
//   int pedirEnteroPositivo (char msjtxt[], int ncols, boolean mostrarerror);
//
//  USO:
//
//    Muestra un mensaje en pantalla para pedir un dato entero positivo al usuario. El
//    mensaje es configurable, desplazable un número de caracteres desde la
//    izquierda de la pantalla y puede mostrar un mensaje de error.
//
//  DETALLES:
//
//    Es como un printf() más un scanf(), mejorados. Puede desplazarse el texto
//    recibido mediante un segundo dato entero. También impide problemas del
//    buffer de teclado con scanf(). Para ello, delega el emitir el mensaje por
//    pantalla a las funciones msj() y mostrar(), y la toma del dato entero a la
//    función obtenerEntero(). Si se muestra error, se muestra una línea en blanco,
//    un mensaje de error y una línea en blanco.
//
//  PARÁMETROS DE ENTRADA:
//
//    msjtxt
//
//      Variable de tipo vector de caracteres donde se recibirá el texto que se
//      debe mostrar, que debe ser una cadena terminada en '\0'.
//
//    ncols
//
//      Variable entera donde se recibirá del exterior el número de espacios en
//      blanco a añadir antes del mensaje.
//
//  VALOR DE SALIDA:
//
//    Devuelve al programa donde se invoque, un valor entero que a su vez esta
//    función ha recibido desde la función obtenerEntero().
//
//  FUNCIONES DE LAS QUE DEPENDE:
//
//    msj()
//
//      Se encarga efectivamente de mostrar el mensaje.
//
//    mostrar()
//
//      Usada para añadir en pantalla un texto adicional después del mensaje.
//
//    obtenerEntero()
//
//      Es la función que se encarga en la práctica de obtener la cantidad.
//
////////////////////////////////////////////////////////////////////////////////

int pedirEnteroIntervalo (char msjtxt[], int ncols, boolean mostrarerror, int min, int max)
{
  int num;
  
  do
  {
    mensaje(msjtxt, 0, ncols);
    printf(" [%d,%d]: ", min, max);
    
    num = obtenerEntero();
    
    if (mostrarerror)
    {
      if (num < min || num > max)
      {
        nuevaLinea();
        mensaje_x_y(MSJxERROR, 0, ncols+2, TRUE);
        nuevaLinea();
      }
    }
    
  } while (num < min || num > max);
  
  return num;
}
////////////////////////////////////////////////////////////////////////////////
//
//  FUNCIÓN:
//
//   int pedirEnteroIntervalo (char msjtxt[], int ncols, boolean mostrarerror, int min, int max);
//
//  USO:
//
//    Muestra un mensaje en pantalla para pedir un dato entero dentro de un intervalo al usuario. El
//    mensaje es configurable, desplazable un número de caracteres desde la
//    izquierda de la pantalla y puede mostrar un mensaje de error, que se desplazará dos espacios más a la derecha.
//
//  DETALLES:
//
//    Es como un printf() más un scanf(), mejorados. Puede desplazarse el texto
//    recibido mediante un segundo dato entero. También impide problemas del
//    buffer de teclado con scanf(). Para ello, delega el emitir el mensaje por
//    pantalla a las funciones msj() y mostrar(), y la toma del dato entero a la
//    función obtenerEntero(). Si se muestra error, se muestra una línea en blanco,
//    un mensaje de error y una línea en blanco. Esto se repite hasta que el usuario
//    introduzca un número dentro del intervalo pedido.
//
//  PARÁMETROS DE ENTRADA:
//    msjtxt
//
//      Variable de tipo vector de caracteres donde se recibirá el texto que se
//      debe mostrar, que debe ser una cadena terminada en '\0'.
//
//    ncols
//
//      Variable entera donde se recibirá del exterior el número de espacios en
//      blanco a añadir antes del mensaje.
//
//  VALOR DE SALIDA:
//
//    Devuelve al programa donde se invoque, un valor entero que a su vez esta
//    función ha recibido desde la función obtenerEntero().
//
//  FUNCIONES DE LAS QUE DEPENDE:
//
//    msj()
//
//      Se encarga efectivamente de mostrar el mensaje.
//
//    mostrar()
//
//      Usada para añadir en pantalla un texto adicional después del mensaje.
//
//    obtenerEntero()
//
//      Es la función que se encarga en la práctica de obtener la cantidad.
//
////////////////////////////////////////////////////////////////////////////////

char pedirLetra (char msjtxt[], int ncols, boolean mostrarerror, char letra)
{
  char pedida;
  
  letra = toupper(letra);
  
  do
  {
    mensaje(msjtxt, 0, ncols);
    mostrar(": ");
    
    pedida = obtenerLetra();
    pedida = toupper(pedida);   // Convertimos a mayúsculas para simplificar casos.
    
    if (mostrarerror)
    {
      if (letra != pedida)
      {
        nuevaLinea();
        mensaje_x_y(MSJxERROR, 0, ncols+2, TRUE);
        nuevaLinea();
      }
    }
    
  } while (letra != pedida);
  
  return pedida;
}
////////////////////////////////////////////////////////////////////////////////
//
//  FUNCIÓN:
///
//   char pedirLetra (char msjtxt[], int ncols, boolean mostrarerror, char letra);
//
//  USO:
//
//    Pide una letra y la devuelve para que otros programas puedan usarla.
//
//  DETALLES:
//
//    La letra se pasa a mayúscula. Aparece el mensaje con la tabulación 
//    pedida y dos puntos y se recibe la letra. Si se muestra error 
//    aparece una línea en blanco, el mensaje de error y otra línea en blanco.
//    Se devuelve la letra.
//
//  PARÁMETROS DE ENTRADA:
//
//    msjtxt[], ncols, mostrarerror, letra
//
//  VALOR DE SALIDA:
//
//    pedida
//
//  FUNCIONES DE LAS QUE DEPENDE:
//
//    mensaje()
//    mostrar()
//    obtenerLetra()
//    toupper()
//    mensaje_x_y()
//    nuevaLinea()
//
////////////////////////////////////////////////////////////////////////////////

int pedirConfirmacion (char msjtxt[], int ncols, boolean mostrarerror)
{
  char letra;
  
  do
  {
    mensaje(msjtxt, 0, ncols);
    printf(" [%c/%c]: ", SI, NO);
    
    letra = obtenerLetra();
    letra = toupper(letra);   // Convertimos a mayúsculas para simplificar casos.
    
    if (mostrarerror)
    {
      if (letra != SI && letra != NO)
      {
        nuevaLinea();
        mensaje_x_y(MSJxERROR, 0, ncols+2, TRUE);
        nuevaLinea();
      }
    }
    
  } while (letra != SI && letra != NO);
  
  return letra;
}
////////////////////////////////////////////////////////////////////////////////
//
//  FUNCIÓN:
//
//   char pedirConfirmacion (char msjtxt[], int ncols, boolean mostrarerror);
//
//  USO:
//
//   Se pide confirmación de algo y se devuelve la letra en cuestión (en 
//   este caso S si se confirma o N si no.
//
//  DETALLES:
//
//    La letra se pasa a mayúscula. Aparece el mensaje con la tabulación 
//    pedida y dos puntos y se recibe la letra. Si la letra no se ajusta a lo pedido se muestra error 
//    se muestra error yaparece una línea en blanco, el mensaje de error y otra línea en blanco.
//    Esto continúa hasta que se da una de las letras permitidas, que se devuelve.
//
//  PARÁMETROS DE ENTRADA:
//
//    msjtxt[], ncols, mostrarerror
//
//  VALOR DE SALIDA:
//
//    letra
//
//  FUNCIONES DE LAS QUE DEPENDE:
//
//    mensaje()
//    printf()
//    obtenerLetra()
//    toupper()
//    mensaje_x_y()
//    nuevaLinea()
//
////////////////////////////////////////////////////////////////////////////////


boolean validarLetraUnica (char original, char dada, boolean sensibleamayusculas)
{
  if (!sensibleamayusculas)
  {
    original = toupper(original);
      dada   = toupper(dada);
  }
  
  return (original == dada);//para devolver true o false según si son iguales o no
}
////////////////////////////////////////////////////////////////////////////////
//
//  FUNCIÓN:
//
//   boolean validarLetraUnica (char original, char dada, boolean sensibleamayusculas);
//
//  USO:
//
//   Se devuelve true o false según si la letra original es igual a la dada o no.
//
//  DETALLES:
//
//    Si sensibleamayusculas es TRUE, tanto la original como la dada
//    se pasan a mayúsculas; si es FALSE, no. Después de esto se devuelve 
//    True o FAlse en función de si la letra original es igual a la dada o no.
//
//  PARÁMETROS DE ENTRADA:
//
//    original, dada, sensibleamayusculas
//
//  VALOR DE SALIDA:
//
//    true/false
//
//  FUNCIONES DE LAS QUE DEPENDE:
//
//    toupper()
//
////////////////////////////////////////////////////////////////////////////////


boolean validarLetraConjunto (char letra, char seleccion[], boolean sensibleamayusculas)
{
  boolean resultado = FALSE;
  int largo = strlen(seleccion);
  
  for(int i = 0; i < largo ; i++)
  {
    if (validarLetraUnica(letra, seleccion[i], sensibleamayusculas))
    {
      resultado = TRUE;
      break;
    }
  }
  
  return resultado;
}

////////////////////////////////////////////////////////////////////////////////
//
//  FUNCIÓN:
//
//   boolean validarLetraConjunto (char letra, char seleccion[], boolean sensibleamayusculas);
//
//  USO:
//
//   Se devuelve true o false según si la letra es igual a la selección o no.
//
//  DETALLES:
//
//    SE da resultado como false pero se comprueba si la letra es igual a la selección o no.
//    Si son iguales se devuelve false, pero si no lo son, resultado cambia a true, sale del bucle y
//    se devuelve.
//
//  PARÁMETROS DE ENTRADA:
//
//    letra, selección, sensibleamayusculas
//
//  VALOR DE SALIDA:
//
//    false o true
//
//  FUNCIONES DE LAS QUE DEPENDE:
//
//    validarLetraUnica()
//
////////////////////////////////////////////////////////////////////////////////

char *cadenaOpcionesDisponibles (char entrada[])//datos ent: teclas válidas para pedir que se devuelven más bonitos. 
//L: Recibe una cadena y devuelve la cadena mejorada.
{
  if (entrada == NULL) return NULL;   // Si no dan nada, petas máximus ...
  
  char *textoinicial, *textofinal;
  
  textoinicial = entrada;
  
  int largoinicial, largofinal;
  
  largoinicial = strlen(textoinicial);

  if (largoinicial == 0)
  {
    // Nos dan cadena vacía, así que generamos vacía. Pero consideramos el '\0'.
    largofinal = 1;
    textofinal = (char *) malloc(1*sizeof(char));
    textofinal[0] = '\0';
  }
  else
  {
    // CASO 1: "A" -> "A" => largo 2 = 1 (letra) + 1 ('\0')
    // CASO 2: "ABC" -> "A/B/C" => largo 6 = 3 (letras) + 2 (sepadores) +1 ('\0'); 
    largofinal = 2 * largoinicial;
    textofinal = (char *) malloc(largofinal*sizeof(char));
    
    if (textofinal != NULL)
    {
      int j = 0;
      for (int i = 0; i < largoinicial; i++, j++)
      {
        textofinal[j] = textoinicial[i];
        j++;
        textofinal[j] = '/';
      }
      
      // Sustituimos la última '/' por un ' 0'.
      j--;
      textofinal[j] = '\0';
    }
  }

  return textofinal;
}

////////////////////////////////////////////////////////////////////////////////
//
//  FUNCIÓN:
//
//   char *cadenaOpcionesDisponibles (char entrada[]);
//
//  USO:
//
//    Recibe una cadena y devuelve los caracteres de la cadena separados
//    por barras.
//
//  DETALLES:
//
//    Recibe una cadena. Si esta no tiene nada, se devuelve NULL. Si está vacía
//    se considera que tiene un espacio, por tanto se reserva uno y se
//    rellena con el caracter de fin de cadena. Si contiene caracteres, 
//    se reserva con la función malloc() el doble de espacios que caracteres
//    había en la cadena. Posteriormente, tras comprobar que se ha reservado
//    algo de espacio, se copia cada caracter en la nueva cadena añadiendo
//    una barra después para separarlo del siguiente. La última barra se
//    sustituye por el caracter de fin de cadena. Finalmente se devuelve
//    esta última cadena.
//
//  PARÁMETROS DE ENTRADA:
//
//    entrada[]
//
//  VALOR DE SALIDA:
//
//    textofinal
//
//  FUNCIONES DE LAS QUE DEPENDE:
//
//    strlen() (Determinar la longitud de la cadena entre paréntesis contando sus caracteres)
//    malloc() (Reserva espacios en la memoria para tantos caracteres como se indique)
//    bucles if y for
//
////////////////////////////////////////////////////////////////////////////////

char pedirLetraSeleccion (char msjtxt[], int ncols, boolean mostrarerror, char seleccion[], boolean sensibleamayusculas)
{
  // HACER: Evitar que falle con «seleccion» a valor NULL.
  
  // Usar «cadenaOpcionesDisponibles()» implica luego liberar memoria con «free()».
  //pide una letra de entre un conjunto que tú le des en un texto. est.bas=dowhile
  char *editada = cadenaOpcionesDisponibles(seleccion);
  
  char letra;
  
  boolean validada;
  
  do
  {
    mensaje(msjtxt, 0, ncols);
    mostrar(" [");
    printf("%s", editada);
    mostrar("]: ");
    
    letra = obtenerLetra();

    validada = validarLetraConjunto(letra, seleccion, sensibleamayusculas);
    //L: este hace el trabajo duro
    
    if (mostrarerror)
    {
      if (!validada)
      {
        nuevaLinea();
        mensaje_x_y(MSJxERROR, 0, ncols+2, TRUE);
        nuevaLinea();
      }
    }
  } while (!validada);
  
  // Liberamos la memoria para cadena modificada.
  free(editada);//de librería estándar
  
  // Si no era sensible a mayúsculas, siempre la devolvemos mayúscula.
  if (!sensibleamayusculas)   letra = toupper(letra);
  
  return letra;
}

////////////////////////////////////////////////////////////////////////////////
//
//  FUNCIÓN:
//
//    char pedirLetraSeleccion (char msjtxt[], int ncols, boolean mostrarerror, char seleccion[], boolean sensibleamayusculas)
//
//  USO:
//    
//    Recibe un mensaje de petición y una selección de caracteres.
//    Devuelve la letra seleccionada cuando sea válida.
//
//  DETALLES:
//
//    Se recibe un mensaje, el número de espacios a la derecha que se quiere 
//    mostrar y la selección. Además se asigna true o false tanto a si se quiere
//    mostrar un mensaje de error en caso de que la letra no sea válida como a
//    si se quiere que sea sensible a las mayúsculas.
//    Se escribe el mensaje con la separación deseada y se muestra la selección
//    entre corchetes y con los caracteres separados unos de otros por barras.
//    A continuación se pide una letra al usuario y se comprueba si está dentro
//    de la selección. En este momento, si la letra no esa válida, se muestra 
//    el mensaje de error entre dos líneas en blanco si la opción del mensaje 
//    estaba seleccionada. Esto se repite hasta que la letra que se introduzca
//    se reconozca como válida. Si se ha escogido así, se pasa la letra a
//    mayúscula. Por último, se devuelve la letra que se introdujo.
//
//  PARÁMETROS DE ENTRADA:
//
//    msjtxt[], ncols, mostrarerror, seleccion[], sensibleamayusculas
//
//  VALOR DE SALIDA:
//
//    letra
//
//  FUNCIONES DE LAS QUE DEPENDE:
//    mensaje()
//    mostrar()
//    printf()
//    obtenerLetra()
//    toupper()
//    mensaje_x_y()
//    nuevaLinea()
//    validarLetraConjunto()
////////////////////////////////////////////////////////////////////////////////

#ifdef SO_WINDOWS//sólo comentar una. devuelve una tecla

#include <conio.h>

char obtenerTeclaInteractiva(void)
{
  int caracter = _getch();   // En Windows, getch() ya es bloqueante por defecto.

  if (caracter == 0 || caracter == 224)
  {
    // Tecla especial, depende de un segundo código. Lo leemos.
    caracter = _getch();
    
    switch(caracter)
    {
      case 72: caracter = TECLA_ARRIBA;    break;   // Flecha Arriba
      case 80: caracter = TECLA_ABAJO;     break;   // Flecha Abajo
      case 75: caracter = TECLA_IZQUIERDA; break;   // Flecha Izquierda
      case 77: caracter = TECLA_DERECHA;   break;   // Flecha Derecha
      default: caracter = TECLA_NULA;               // Tecla nula.
    }
    else
    {
      // Normalización de teclas conflictivas no estándar.
      switch(caracter)
      {
        case 13: caracter = TECLA_ENTER;
        case 8:  caracter = TECLA_RETROCESO;
      }
    }
    
    return (char)caracter;
}

#else

#include <termios.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>

int obtenerTeclaInteractiva(void) // debería char (depende de muchas funciones de librerías internas)
{
  struct termios terminaloriginal, terminalnueva;
  int caracter;

  // 1. Obtenemos la configuración actual de la terminal.
  tcgetattr(STDIN_FILENO, &terminaloriginal);
  terminalnueva = terminaloriginal;

  // 2. Desactivamos el modo canónico (espera de INTRO) y el ECO (ver la tecla al pulsar).
  terminalnueva.c_lflag &= ~(ICANON | ECHO); // Quitamos espera de INTRO y eco
  tcsetattr(STDIN_FILENO, TCSANOW, &terminalnueva);
  
  // 3. El programa se detiene aquí hasta recibir un carácter.
  // Las flechas envían una secuencia de escape: 27 (ESC), 91 ('['), y una letra.
  caracter = getchar();
  
  if (caracter == ESCAPE)
  {
    // Cambiamos a NO BLOQUEANTE un instante para ver si hay bytes extra
    int flags = fcntl(STDIN_FILENO, F_GETFL, 0);
    fcntl(STDIN_FILENO, F_SETFL, flags | O_NONBLOCK);
    
    // Pedimos a ver si hay otro caracter.
    int siguiente = getchar();
    
    // ¿Es '[' (91)?
    if (siguiente == '[')
    {
      // Lo desechamos simplemente no usando "siguiente".

      // Pedimos el tercer código de caracter generado.
      caracter = getchar();
      
      while ((siguiente = getchar()) != EOF && siguiente != -1);

      switch(caracter)
      {
        case 'A': caracter = TECLA_ARRIBA;    break;   // Flecha Arriba
        case 'B': caracter = TECLA_ABAJO;     break;   // Flecha Abajo
        case 'D': caracter = TECLA_IZQUIERDA; break;   // Flecha Izquierda
        case 'C': caracter = TECLA_DERECHA;   break;   // Flecha Derecha
        default:  caracter = TECLA_NULA;      break;
      }
    }
    else
    {
      if (siguiente == EOF || siguiente == -1)
      {
        // Era sólo la tecla ESCAPE.
        caracter = TECLA_ESCAPE;
      }
      else
      {
        // Era una secuencia no contemplada.
        caracter = TECLA_NULA;
      }
    }

    // Restauramos el modo BLOQUEANTE de la terminal.
    fcntl(STDIN_FILENO, F_SETFL, flags);
  }

  // 4. Restauramos la configuración original antes de salir.
  tcsetattr(STDIN_FILENO, TCSANOW, &terminaloriginal);
  
  return caracter;
}

#endif

////////////////////////////////////////////////////////////////////////////////
//  En WINDOWS:
//
//  FUNCIÓN:
//
//   char obtenerTeclaInteractiva(void);
//
//  USO:
//
//   Según la tecla que se pulse se ejecuta la acción  asignada.
//
//  DETALLES:
//
//    Recibe el código ASCII correspondiente según la tecla que
//    se haya recibido con getchar y realiza la acción correspondiente 
//    según su caso dentro del switch, ya sea de desplazamiento,
//    intro o retroceso. Devuelve el caracter pulsado.
//
//  PARÁMETROS DE ENTRADA:
//
//    Ninguno
//
//  VALOR DE SALIDA:
//
//    character
//
//  FUNCIONES DE LAS QUE DEPENDE:
//
//    getch()
//    bucles if y switch
//
////////////////////////////////////////////////////////////////////////////////
