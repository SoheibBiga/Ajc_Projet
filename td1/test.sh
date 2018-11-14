#!/bin/bash

function die {
  echo "ERROR: $@"
  exit 1
}

[[ "$#" = 1 ]] || die "Usage: $0 mon_archive.tar"

files=$(tar tf "$1") || die "$1 is not a valid tar archive?"

echo "$files" | egrep "^rendu.txt\$" > /dev/null || die "'rendu.txt' not found!!!"
tar xf "$1" rendu.txt
grep NumeroEtudiant: rendu.txt || die "'NumeroEtudiant:' not found"

for i in 2.cc 3.2.cc 3.3.cc 3.6.cc; do
  echo "$files" | egrep "^$i\$" > /dev/null && echo "Found $i" || echo "NOT FOUND: $i"
done
echo "--------"
