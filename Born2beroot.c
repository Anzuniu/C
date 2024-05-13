Su
apt install sudo
//Reiniciamos la máquina 
sudo reboot
//Verificamos la correcta instalación de sudo
sudo -V
sudo -V > file.txt
nano file.txt
sudo adduser antalvar
sudo addgroup user42
//Comprobams que se haya creado correctamente el grupo
getent group user42
//Añadimos el usuario al grupo
sudo adduser antalvar user42
sudo adduser antalvar sudo
//Checkeamos que se haya introducido correctamente
getent group user42
getent group sudo
//--------------------------------------
//Instalación y configuración SSH
sudo apt update
sudo apt install openssh-server
Y
//Comprobamos la correcta instalación
sudo service ssh status
nano /etc/ssh/sshd_config
//Debemos estar en el usuario root, si no lo estamos debemos poner "su"
//Si no queremos entrar al usuario root podemos arrancar con permisos de admin
//Para ello deberíamos poner "sudo nano /etc/ssh/sshd_config"
#Port 22 -> /*Modificamos a*/ -> Port 4242
#PermitRootLogin prohibit-password -> /*Modificamos a */ -> PermitRootLogin no
//Guardamos y salimos
nano /etc/ssh/sshd_config
#Port 22 -> Port 4242
//Salimos
sudo service ssh restart
sudo service ssh status
//------------------------------
//Instalación y configuración de UFW
sudo apt install ufw
y
sudo ufw enable
sudo ufw allow 4242
sufo ufw status
//------------------------------
//Configuración contraseña fuerte para sudo
touch /etc/sudoers.d/sudo_config
mkdir /var/log/sudo
nano /etc/sudoers.d/sudo_config
//Introducimos los siguientes comandos para cumplir los requisitos del subject
Defaults  passwd_tries=3
Defaults  badpass_message="Incorrect password"
Defaults  logfile="/var/log/sudo/sudo_config"
Defaults  log_input, log_output
Defaults  iolog_dir="/var/log/sudo"
Defaults  requiretty
Defaults  secure_path="/usr/local/sbin:/usr/local/bin:/usr/sbin:/usr/bin:/sbin:/bin:/snap/bin"
//------------------------------
//Configuración de política de contraseñas fuerte
nano /etc/login.defs
PASS_MAX_DAYS 99999 -> PASS_MAX_DAYS 30
PASS_MIN_DAYS 0 -> PASS_MIN_DAYS 2
PASS_WARN_AGE 7
//Instalamos los siguientes paquetes
sudo apt install libpam-pwquality
y
nano /etc/pam.d/common-password
//Después de "retry=3" añadimos los siguientes comandos
minlen=10 ucredit=-1 dcredit=-1 lcredit=-1 maxrepeat=3 reject_username difok=7 enforce_for_root
//---------------------------------
//Cerramos la máquina, abrimos VirtualBox y damos a configuración
//Red -> Avanzadas -> Reenvío de puertas
//Arriba derecha icono añadir reglas de envío
//Añadimos el puerto "4242" al anfitrión y al invitado.
//Abrimos el terminal del ordenador real y ponemos:
ssh antalvar@localhost -p 4242
//------------------------------------------------------------
//
//	   		SCRIPT
//
//------------------------------------------------------------
//Para poder ver la estructura del SO y su versión de kernel
uname -a
//Para mostrar el número de núcleos físicos. Si hay u procesador marcará 0
grep "physical id" /proc/cpuinfo | wc -l
//Núcleos virtuales
grep processor /proc/cpuinfo | wc -l
//Para mostrar la memoria ram usaremos "free"
free --mega
//Filtramos la búsqueda con awk a lo que nos interesa en este caso la tercera palabra de la primera fila
free --mega | awk `$1 == "Mem:" {print $3}'
//Memoria total
free --mega | awk '$1 == "Mem:" {print $2}'
free --mega | awk '$1 == "Mem:" {printf("(%.2f%%)\n", $3/$2*100)}'

//Memoria del disco
df -m | grep "/dev/" | grep -v "/boot" | awk '{memory_use += $3} END {print memory_use}'

df -m | grep "/dev/" | grep -v "/boot" | awk '{use += $3} {total += $2} END {printf("(%d%%)\n"), use/total*100}'

//Porcenaje uso CPU
vmstat 1 4 | tail -1 | awk '{print %15}'

//Para ver la fecha y hora de nuestro último reinicio haremos uso del comando "who" con el flag "-b"
who -b | awk '$1 == "system" {print $3 " " $4}'
//Checkeamos si LVM está activo o no
if [ $(lsblk | grep "lvm" | wc -l) -gt 0 ]; then echo yes; else echo no; fi
//Conexiones TCP
ss -ta | grep ESTAB | wc -l
//Número de usuarios
users | wc -w
//Dirección IP y MAC
ip link | grep "link/ether" | awk '{print $2}'
//Número de comandos ejecutados con sudo
journalctl _COMM=sudo | grep COMMAND | wc -l

//------------------------------------------------------------
//
//		CRONTAB
//
//-----------------------------------------------------------
sudo crontab -u root -e
*/10 * * * * sh /ruta del script

//------------------------------------------------------
//
//
//		SIGNATURE.TXT
//
//-------------------------------------------------------
//Cerramos la máquina virtual
//nos ubicamos en la ruta donde tengamos el ".vdi" de nuestra máquina virtual
shasum Born2beroot.vdi
//shasum es un comando que permite identificar la integridad de un fichero mediante la suma de comprobación del hash SHA-1 de un archivo

