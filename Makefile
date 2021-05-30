CXX  = g++

pointers_and_references_ex: pointers_and_references_ex.c
	$(CXX) -o $@ $<

clean:
	rm -rf pointers_and_references_ex
	rm -f *~
	rm -f 
