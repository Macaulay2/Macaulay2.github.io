include ../Makefile.include
index:index.css
	../Scripts/index-new-html -t trailer.html
index.css: index.css.sh
	if [ -f $@ ] ; then mv -f $@ $@.bak ; fi
	./$<>$@
	chmod a-w $@
