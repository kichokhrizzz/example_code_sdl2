# Tutorial de Configuración de SDL2 con Dev-C++

## 1. Descargar SDL2
1. Navega a la [página de descargas de SDL](https://www.libsdl.org/).
2. Busca la sección "SDL Release".
3. Descarga la versión de desarrollo adecuada para tu sistema operativo. Para Windows con MinGW, selecciona "SDL-devel-2.0.x-mingw.tar.gz".

## 2. Extraer el Contenido del Archivo Descargado
1. Utiliza una herramienta de descompresión como 7-Zip o WinRAR para extraer el contenido del archivo `SDL-devel-2.0.x-mingw.tar.gz`.
2. Asegúrate de recordar la ubicación donde se extraen los archivos.

## 3. Configurar Dev-C++
1. Abre Dev-C++.
2. Ve a `Tools` -> `Compiler Options`.
3. Dirígete a la pestaña `Directories` y selecciona `C++ includes`.
4. Agrega la carpeta `include/SDL2` que se encuentra dentro del directorio donde extrajiste los archivos.
5. En la misma pestaña `Directories`, selecciona `Libraries`.
6. Agrega la carpeta `lib` del directorio extraído.

## 4. Crear un Nuevo Proyecto en Dev-C++
1. Ve a `File` -> `New` -> `Project`.
2. Selecciona un tipo de proyecto adecuado (por ejemplo, "Console Application") y dale un nombre a tu proyecto.
3. Guarda el proyecto en una ubicación conveniente.

## 5. Configurar Opciones del Proyecto
1. Ve a `Project` -> `Project Options`.
2. Selecciona la pestaña `Parameters`.
3. En la sección `Linker`, agrega las siguientes líneas:
    ```bash
    -lmingw32
    -lSDL2main
    -lSDL2
    ```
4. Asegúrate de aplicar y guardar los cambios.

## 6. Copiar el Archivo DLL
1. Ve a la carpeta `bin` dentro del directorio donde extrajiste los archivos de SDL.
2. Copia el archivo `SDL2.dll`.
3. Pega el archivo `SDL2.dll` en la carpeta raíz de tu proyecto (donde se encuentra tu archivo `.dev`).

## 7. Escribir y Compilar el Código
1. Crea un nuevo archivo fuente (`.cpp`) en tu proyecto.
2. Escribe o copia tu código fuente SDL.
3. Compila y ejecuta tu proyecto.
