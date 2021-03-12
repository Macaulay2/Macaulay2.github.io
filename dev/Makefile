include ../Makefile.include
build:; $(MAKE) -C projects
index: build; `pwd`/../Scripts/index-new-html -s -t `pwd`/../Style/trailer.html
