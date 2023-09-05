include ../base.mk 

TARGETS := install clean distclean

.PHONY: $(TARGETS)

$(TARGETS):
	$(MAKE) -C ./stdinout $@
	$(MAKE) -C ./main $@
