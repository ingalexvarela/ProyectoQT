# Configuración del Makefile para Windows
.PHONY: default

default: generate_docs run  open_exe open_index

generate_docs:
	@echo "Generando documentación con Doxygen..."
	@doxygen Doxyfile > nul 2>&1

run:
	if exist Compilado rmdir /s /q Compilado
	if not exist Compilado mkdir Compilado
	cd Proyecto_TourismCompass && \
	copy /Y TourismCompass.exe ..\Compilado\TourismCompass.exe && \
	cd ..\Compilado && \
	windeployqt TourismCompass.exe

open_exe:
	@start "" "Compilado\TourismCompass.exe"

open_index:
	@start "" "docs/html/index.html"
	