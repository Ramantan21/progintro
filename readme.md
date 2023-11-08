bandit0:  ls -l , cat readme
bandit1: ls -l , cat ./-
bandit2: ls -l , "spaces in this filename"
bandit3: ls -l , cd inhere ,ls -l -a , cat .hidden
bandit4: cd inhere , ls -l , cat ./-file00 
bandit5: cd inhere, ls -l , find . *.* , du -s ./ , ls -lhR ,cd maybehere06 , cat ./-file2 , find . -type f -readable -size 1033c ! -executable 
bandit6:  find . -user bandit7 -group bandit6,  find . -size 33c -user bandit7 -group bandit6,find . -user bandit7 -group bandit6 | grep bandit7,  cd ./var/lib/dpkg/info
bandit7: grep millionth data.txt
bandit8: sort data.txt | uniq -u
bandit9: strings data.txt, strings data.txt | grep ===
bandit10: cat data.txt , base64 -d data.txt
