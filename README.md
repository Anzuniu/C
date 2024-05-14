<img src="/assets/antalvar_white.png" alt="Imagen clara sobre fondo oscuro" class="dark-theme">
<img src="antalvar_black.png" alt="Imagen oscura sobre fondo claro" class="light-theme">

img.light-theme { display: none; }
@media (prefers-color-scheme: dark) {
    img.light-theme { display: none; }
    img.dark-theme { display: inline; }
}
@media (prefers-color-scheme: light) {
    img.dark-theme { display: none; }
    img.light-theme { display: inline; }
}
