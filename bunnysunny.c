$ git add one.c
Git commit –m “create one.c”
git add two.c
git commit -m "create two.c"
git log
git status
$ git branch b1
git branch b2
git branch
Git checkout b1
Git status
$ echo " in branch b1 hello world " >> lab3.c
$ echo " in branch b1 branching world " >> lab4.c
git add lab3.c
git add lab4.c
git commit -m " lab3 for b1"
git checkout b2
git branch
echo " in branch b2 hello world" >> lab5.c
echo " in branch b2 branching world" >> lab6.c
git add lab5.c
git add lab6.c
git commit -m " lab5 and lab 6 in branch b2"
git checkout master
git diff main..b1
git merge b1
.
git branch –merged
git branch -d b1
git branch -d b2
$ git status
git merge b2
git branch –-merged
git branch -d b2 
