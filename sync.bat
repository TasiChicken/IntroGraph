@echo off

set /p MESSAGE="Commit Message: "

for /r "%cd%\cpps" %%f in (*.exe) do del "%%f"

git add .
git commit -m "%MESSAGE%"

git pull origin main
git push origin main