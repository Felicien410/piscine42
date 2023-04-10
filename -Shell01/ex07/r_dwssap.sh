#/bin/sh

FT_LIGNE1=7
FT_LIGNE2=15

cat /etc/passwd | sed -n '/^#/!p' | sed -n 'p;n' | rev | cut -d ':' -f 7 | sort -r | sed -n -e "$FT_LINE1","$FT_LINE2"p"" | xargs | sed -e 's/ /, /g' |sed 's/$/./'
