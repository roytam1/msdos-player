echo off

rem rmdir /s /q binary
mkdir binary

chcp 65001

setlocal

if exist "%ProgramFiles%\Microsoft Visual Studio\18\Professional\MSBuild\Current\Bin" goto is_Professional
if exist "%ProgramFiles%\Microsoft Visual Studio\18\Enterprise\MSBuild\Current\Bin" goto is_Enterprise
if exist "%ProgramFiles%\Microsoft Visual Studio\18\BuildTools\MSBuild\Current\Bin" goto is_BuildTools

set path="%ProgramFiles%\Microsoft Visual Studio\18\Community\MSBuild\Current\Bin";%PATH%
goto start
:is_Professional
set path="%ProgramFiles%\Microsoft Visual Studio\18\Professional\MSBuild\Current\Bin";%PATH%
goto start
:is_Enterprise
set path="%ProgramFiles%\Microsoft Visual Studio\18\Enterprise\MSBuild\Current\Bin";%PATH%
goto start
:is_BuildTools
set path="%ProgramFiles%\Microsoft Visual Studio\18\BuildTools\MSBuild\Current\Bin";%PATH%

:start
rmdir /s /q Release
rmdir /s /q x64

msbuild.exe msdos.vcxproj /t:clean;rebuild /p:Configuration=Release_i86;Platform="Win32"
mkdir binary\i86_x86
copy Release\msdos.exe binary\i86_x86\.

rmdir /s /q Release
rmdir /s /q x64

msbuild.exe msdos.vcxproj /t:clean;rebuild /p:Configuration=Release_i86;Platform="x64"
mkdir binary\i86_x64
copy Release\msdos.exe binary\i86_x64\.

rmdir /s /q Release
rmdir /s /q x64

msbuild.exe msdos.vcxproj /t:clean;rebuild /p:Configuration=Release_v30;Platform="Win32"
mkdir binary\v30_x86
copy Release\msdos.exe binary\v30_x86\.

rmdir /s /q Release
rmdir /s /q x64

msbuild.exe msdos.vcxproj /t:clean;rebuild /p:Configuration=Release_v30;Platform="x64"
mkdir binary\v30_x64
copy Release\msdos.exe binary\v30_x64\.

rmdir /s /q Release
rmdir /s /q x64

msbuild.exe msdos.vcxproj /t:clean;rebuild /p:Configuration=Release_i286;Platform="Win32"
mkdir binary\i286_x86
copy Release\msdos.exe binary\i286_x86\.

rmdir /s /q Release
rmdir /s /q x64

msbuild.exe msdos.vcxproj /t:clean;rebuild /p:Configuration=Release_i286;Platform="x64"
mkdir binary\i286_x64
copy Release\msdos.exe binary\i286_x64\.

rmdir /s /q Release
rmdir /s /q x64

msbuild.exe msdos.vcxproj /t:clean;rebuild /p:Configuration=Release_i386;Platform="Win32"
mkdir binary\i386_x86
copy Release\msdos.exe binary\i386_x86\.

rmdir /s /q Release
rmdir /s /q x64

msbuild.exe msdos.vcxproj /t:clean;rebuild /p:Configuration=Release_i386;Platform="x64"
mkdir binary\i386_x64
copy Release\msdos.exe binary\i386_x64\.

rmdir /s /q Release
rmdir /s /q x64

msbuild.exe msdos.vcxproj /t:clean;rebuild /p:Configuration=Release_i486;Platform="Win32"
mkdir binary\i486_x86
copy Release\msdos.exe binary\i486_x86\.

rmdir /s /q Release
rmdir /s /q x64

msbuild.exe msdos.vcxproj /t:clean;rebuild /p:Configuration=Release_i486;Platform="x64"
mkdir binary\i486_x64
copy Release\msdos.exe binary\i486_x64\.

rmdir /s /q Release
rmdir /s /q x64

msbuild.exe msdos.vcxproj /t:clean;rebuild /p:Configuration=Release_pentium4;Platform="Win32"
mkdir binary\pentium4_x86
copy Release\msdos.exe binary\pentium4_x86\.

rmdir /s /q Release
rmdir /s /q x64

msbuild.exe msdos.vcxproj /t:clean;rebuild /p:Configuration=Release_pentium4;Platform="x64"
mkdir binary\pentium4_x64
copy Release\msdos.exe binary\pentium4_x64\.

rmdir /s /q Release
rmdir /s /q x64

msbuild.exe msdos_np21.vcxproj /t:clean;rebuild /p:Configuration=Release;Platform="Win32"
mkdir binary\ia32_x86
copy Release\msdos.exe binary\ia32_x86\.

rmdir /s /q Release
rmdir /s /q x64

msbuild.exe msdos_np21.vcxproj /t:clean;rebuild /p:Configuration=Release;Platform="x64"
mkdir binary\ia32_x64
copy Release\msdos.exe binary\ia32_x64\.

msbuild.exe ntvdm.vcxproj /t:clean;rebuild /p:Configuration=Release;Platform="Win32"
copy Release\ntvdm.exe binary\i386_x86\.
copy Release\ntvdm.exe binary\i486_x86\.
copy Release\ntvdm.exe binary\pentium4_x86\.
copy Release\ntvdm.exe binary\ia32_x86\.

endlocal

rmdir /s /q Release
rmdir /s /q x64

pause
echo on
