<div align="center">
  <img src="../../../.assets/born2beroot.png">
  <p align="center">
	  <a href="#about">About</a> •
    <a href="#instalación">Instalación</a>
  </p>
</div>

## About

Este documento es n ejercicio de administración de sistemas.

Este proyecto busca introducirte al maravilloso mundo de la virtualización.

Crearás tu primera máquina en VirtualBox (o UTM si no puedes utilizar VirtualBox) bajo instrucciones específicas. Por lo tanto, al final del proyecto, serás capaz de configurar tu propio sistema operativo utilizando reglas estrictas.

[Click aquí](./es.subject.pdf) para ver el `PDF` del proyecto.

  ## Instalación

  1 - Abrimos VirtualBox y pinchamos en `Nueva`
  
  <div align="center"><img src="./imgs/1.png"></div>

  2 - Introducimos el nombre de nuestra máquina virtual, la ruta de instalaciOn y la imagen ISO del Sistema Operativo a instalar. En mi caso estoy instalando `Debian 12.5`.
  
  <div align="center"><img src="./imgs/2.png"></div>
  <div align="center"><img src="./imgs/3.png"></div>

  3 - Asignamos la cantidad de RAM para la mAquina.
  
  <div align="center"><img src="./imgs/4.png"></div>

  4 - Creamos un disco virtual ahora.
  
  <div align="center"><img src="./imgs/5.png"></div>
  
  5 - Establecemos la memoria que queramos, en este caso yo he usado `30,80 GB` ya que quiero hacer el bonus. En caso de que no queramos hacerlo podemos usar la cantidad recomendada de `12 GB`.
  
  <div align="center"><img src="./imgs/6.png"></div>

  6 - Comprobamos en el resumen que hemos elegido todo correctamente y presionamos `Terminar`.
  
  <div align="center"><img src="./imgs/7.png"></div>

  7 - Volvemos a la pantalla de inicio de Oracle y presionamos en `ConfiguraciOn`.
  
  <div align="center"><img src="./imgs/8.png"></div>
  
  8 - Ahora pincharemos en `Almacenamiento`.
  
  <div align="center"><img src="./imgs/9.png"></div>

  9 - Elegimos el controlador: IDE y presionando el enoticono 💿 se nos despliegan varias opciones. Yo he seleccionado `debian-12.5.0` porque es el sistema que estamos instalando.
  
  <div align="center"><img src="./imgs/10.png"></div>

  10 - Una vez realizado esto podemos hacer click en `Iniciar`.
  
  <div align="center"><img src="./imgs/11.png"></div>

  11 - Se nos abrirá el menú de instalación de `debian` y elegiremos `Install`.
  
  <div align="center"><img src="./imgs/12.png"></div>

  12 - Escogemos un idioma.
  
  <div align="center"><img src="./imgs/13.png"></div>

  13 - Escogemos un pais.
  
  <div align="center"><img src="./imgs/14.png"></div>
  <div align="center"><img src="./imgs/15.png"></div>
  <div align="center"><img src="./imgs/16.png"></div>

  14 - Seleccionamos `United States`.
  
  <div align="center"><img src="./imgs/17.png"></div>

  15 - Yo elegiré `American English` como idioma de teclado, pero puedes escoger el que quieras.
  
  <div align="center"><img src="./imgs/18.png"></div>

  16 - Para el `Host Name` debemos escribir tu login seguido de 42.

  <div align="center"><img src="./imgs/20.png"></div>

  17 - El subject no menciona nada sobre el `Domain name`, así que lo dejamos vacío.
  
  <div align="center"><img src="./imgs/21.png"></div>

  18 - Ahora debemos introducir una contraseña, la usaremos más adelante así que apúntatela o acuerdate porque si no tendrás que comenzar de nuevo.
    
  <div align="center"><img src="./imgs/22.png"></div>

  <div align="center"><img src="./imgs/23.png"></div>

  19 - Elegiremos un nombre de usuario. Llamaré a este usuario con mi login.
    
  <div align="center"><img src="./imgs/24.png"></div>
  <div align="center"><img src="./imgs/25.png"></div>
  
  20 - Elegiremos la contraseña para nuestro nuevo usuario. Apúntala o acuerdate, que te hará falta.
  
  <div align="center"><img src="./imgs/26.png"></div>

  21 - Elegimos una zona horaria para configurar el reloj.
  
  <div align="center"><img src="./imgs/27.png"></div>

  22 - Escogeremos la opción de `Manual` porque queremos realizar el bonus, de lo contrario podemos darle a `Guied - use entire disk and set up encrypted LVM`, que nos facilita la creación de la partición cifrada. Yo voy a crearla manualmente.
  
  <div align="center"><img src="./imgs/28.png"></div>

  23 - Seleccionamos el disco en el que vamos a hacer la partición.
  
  <div align="center"><img src="./imgs/29.png"></div>

  24 - Para realizar la partición debemos seleccionar `Separate /home partition`.
  
  <div align="center"><img src="./imgs/30.png"></div>

  25 - Seleccionamos `Yes` para escribir los cambios en los discos y configurar el LVM.
  
  <div align="center"><img src="./imgs/31.png"></div>

  26 - Cancelamos, no nos hace falta borrar los datos del disco.
  
  <div align="center"><img src="./imgs/32.png"></div>

  27 - Ponemos una contraseña para la encriptación. Vuelve a apuntarte esto que es importante.
  
  <div align="center"><img src="./imgs/33.png"></div>
  <div align="center"><img src="./imgs/34.png"></div>

  28 - Debemos introducir la cantidad de volumen que usaremos para la partición, en mi caso `30,80GB`.
  
  <div align="center"><img src="./imgs/35.png"></div>

  29 - Para terminar la partición presionamos `Finish partitioning and write changes to disk`.
  
  <div align="center"><img src="./imgs/36.png"></div>

  30 - `Yes` a escribir los cambios en los discos.  
  
  <div align="center"><img src="./imgs/37.png"></div>

  31 - `No` puesto que no queremos paquetes adicionales.
  
  <div align="center"><img src="./imgs/38.png"></div>

  32 - Escogemos nuestro país.
  
  <div align="center"><img src="./imgs/39.png"></div>

  33 - Seleccionamos `deb.debian.org`.
  
  <div align="center"><img src="./imgs/40.png"></div>

  34 - Lo dejamos vacío y `Continue`.
  
  <div align="center"><img src="./imgs/41.png"></div>

  35 - Le damos a `No`, no nos interesan que vean nuestras estadísticas.
  
  <div align="center"><img src="./imgs/42.png"></div>

  36 - Desmarcamos todas las opciones.
  
  <div align="center"><img src="./imgs/43.png"></div>

  37 - Seleccionamos `Yes` para instalar GRUB boot.

  <div align="center"><img src="./imgs/44.png"></div>

  38 - Escogemos el dispositivo para la instalación del cargador de arranque. `/dev/sda (ata_VBOX_HARDDISK)`.
  
  <div align="center"><img src="./imgs/45.png"></div>

  39 - `Continue` y finalizamos la instalación.
    
  <div align="center"><img src="./imgs/46.png"></div>
  
  
  
 
