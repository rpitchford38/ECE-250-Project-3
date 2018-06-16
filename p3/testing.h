new
// insertion test:
// based on 6.02 slides 77-113
// build example tree:
insert 51 1
insert 30 1
insert 69 1
insert 18 1
insert 42 1
insert 63 1
insert 87 1
insert 12 1
insert 24 1
insert 36 1
insert 45 1
insert 57 1
insert 66 1
insert 81 1
insert 93 1
insert 15 1
insert 21 1
insert 27 1
insert 33 1
insert 39 1
insert 48 1
insert 54 1
insert 60 1
insert 75 1
insert 84 1
insert 90 1
insert 96 1
insert 72 1
insert 78 1
size 29
height 5
front 12
back 96
//left-left
insert 73 1
size 30
height 5
front 12
back 96
//left-right
insert 77 1
size 31
height 5
front 12
back 96
//left-left
insert 76 1
size 32
height 5
front 12
back 96
//right-left
insert 80 1
size 33
height 5
front 12
back 96
//right-right
insert 74 1
size 34
height 5
front 12
back 96
//no imbalance
insert 64 1
size 35
height 5
front 12
back 96
//left-left
insert 55 1
size 36
height 5
front 12
back 96
//right-left
insert 70 1
size 37
height 5
front 12
back 96
delete
// end of insertion test
new
// erasure test:
// based on 6.02 slides 115-125
// build example tree:
insert 21 1
insert 8 1
insert 34 1
insert 3 1
insert 16 1
insert 26 1
insert 42 1
insert 2 1
insert 5 1
insert 11 1
insert 18 1
insert 23 1
insert 31 1
insert 37 1
insert 47 1
insert 1 1
insert 4 1
insert 6 1
insert 9 1
insert 13 1
insert 17 1
insert 19 1
insert 22 1
insert 24 1
insert 28 1
insert 33 1
insert 35 1
insert 40 1
insert 45 1
insert 52 1
insert 7 1
insert 10 1
insert 12 1
insert 14 1
insert 20 1
insert 25 1
insert 27 1
insert 30 1
insert 32 1
insert 36 1
insert 38 1
insert 41 1
insert 43 1
insert 46 1
insert 49 1
insert 53 1
insert 15 1
insert 29 1
insert 39 1
insert 44 1
insert 48 1
insert 51 1
insert 54 1
insert 50 1
size 54
height 7
front 1
back 54
//right-right, right-left, right-right
erase 1 1
size 53
height 6
front 2
back 54
summary
delete
exit