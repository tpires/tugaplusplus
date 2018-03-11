@echo off
if not exist %1 goto filenotfound

if not exist bin\tugapp.exe goto compnotfound

if exist %2.exe del %2.exe

bin\tugapp < %1

gcc -o %2 result.c

if exist result.c del result.c

if exist %2.exe echo Ficheiro %2.exe compilado com sucesso.
if not exist %2.exe echo Erro durante a compilacao.

goto end

:filenotfound
echo Ficheiro %1 nao foi encontrado.
goto end

:compnotfound
echo Compilador tugapp nao foi encontrado.
goto end

:end