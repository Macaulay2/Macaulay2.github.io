index:
	../Scripts/index-new-html -t ../Style/trailer.html
	for i in * ;										\
	do if [ -d "$$i" ] ;									\
	   then ( cd "$$i";									\
		  `pwd`/../../Scripts/index-new-html -t `pwd`/../../Style/trailer.html ;	\
		);										\
	   fi ;											\
	done
index-local:
	../Scripts/index-new-html -l -t ../Style/trailer.html
