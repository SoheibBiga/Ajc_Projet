#!/bin/bash

function die {
  echo -e "ERROR: $@"
 exit 1
}

function check_files {
  local i
  for i in $@; do
    [[ -f "$i" ]] || die "File not found: '$i'"
  done
}

function check_eq {
  [[ "$1" = "$2" ]] || die "Expected: '$1'\nand got instead: '$2'"
}

[[ "$#" = 1 ]] && [[ -f "$1" ]] && tar tf "$1" > /dev/null 2>&1 || die "Usage: $0 archive.tar"

TMP=tmp
mkdir $TMP
cd $TMP

TD="$1"
[[ "${TD:0:1}" != "/" ]] && TD="../$TD"
tar xf "$TD" --wildcards *.cc *.h *.txt Makefile

# Args: $1 = command to execute
#       $2 = partial credit keyword (eg. "PASSED")
#       $3 = score table: 3 characters per score. Eg. "  0  0  2  2  4" to support scores 0..4.
#            The score will be taken from the table, at an index that corresponds to
#            the number of keywords ($2) found in the command output.
function grade {
  [[ "$#" = 3 ]] || die "Example usage: grade command keyword 'score table'"
  local OUT="$($1)"
  echo "$OUT" 1>&2
  local PASSED=$(echo "$OUT" | grep -c "$2")
  ((i=3*PASSED))
  echo ${3:i:3}
}

# Notation sur 100.
sexpl=0
[[ -f "1.2.txt" ]] && ((sexpl = sexpl + 2))
[[ -f "2.6.txt" ]] && ((sexpl = sexpl + 3))
tar xf ../1.tar.xz
s11=$(grade ./1.1.sh "PASSED" "  0  1  2  9")
s12=$(grade ./1.2.sh "PASSED" "  0  1  2  6")
tar xf ../2.tar.xz
s21=$(grade "timeout 3 ./2.1.sh" "PASSED" "  0 10")
s22=$(grade "timeout 3 ./2.2.sh" "PASSED" "  0 10")
s24=$(grade "timeout 3 ./2.4.sh" "PASSED" "  0  6 12")
s25=$(grade "timeout 3 ./2.5.sh" "PASSED" "  0  8 16")
s26=$(grade "timeout 4 ./2.6.sh" "PASSED" "  0  1  2  2  2  4  4  4  4  8  8 14 14 14 14 14 24 24 24 24 24 32")  # 1, 2, 5, 9, 11, 16, 21
tar xf ../3.tar.xz
s31=$(grade "timeout 3 ./3.1.sh" "PASSED" "  0  1  8")
s32=$(grade "timeout 3 ./3.2.sh" "PASSED" "  0  1  1  1  1  9  9  9 12 25")
s33=$(grade "timeout 3 ./3.3.sh" "PASSED" "  0  0  8")
cd ..
rm -rf $TMP
echo "1.1: $s11 / 9" 1>&2
echo "1.2: $s12 / 6" 1>&2
echo "2.1: $s21 / 10" 1>&2
echo "2.2: $s22 / 10" 1>&2
echo "2.4: $s24 / 12" 1>&2
echo "2.5: $s25 / 16" 1>&2
echo "2.6: $s26 / 32" 1>&2
echo "3.1: $s31 / 8" 1>&2
echo "3.2: $s32 / 25" 1>&2
echo "3.3: $s33 / 8" 1>&2
echo "Total sur 20: "$(echo "($s11+$s12+$s21+$s22+$s24+$s25+$s26+$sexpl+$s31+$s32+$s33)*20/141" | bc -l) 1>&2
echo "$s11 $s12 $s21 $s22 $s24 $s25 $s26 $sexpl $s31 $s32 $s33"
