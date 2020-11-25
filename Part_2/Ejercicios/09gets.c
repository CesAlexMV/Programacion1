El uso de gets es peligroso porque la función no conoce el tamaño del array que le vas a pasar, simplemente va leyendo datos de la entrada hasta que llega al final. 
Esto da problemas si el usuario teclea más caracteres de lo que puede almacenar el array declarado, pudiendo provocar que otras variables se vean afectadas al ser
sobreescritas o,como poco, que la aplicación se comporte de manera inesperada.
