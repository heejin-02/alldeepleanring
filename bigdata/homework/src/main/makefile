include ../../base.mk 

SRCS = main.c
OBJS = $(SRCS:.c=.o)

EXE  = stdinout
LINK = $(CC) $(CFLAGS) -o $(EXE) $(OBJS) -L $(LIBDIR) $(ALLACV)

.PHONY: install clean distclean

install:
	$(MAKE) -C ./ $(OBJS)
	$(LINK)
	$(MKDIR) $(BINDIR)
	$(MV) $(EXE) $(BINDIR)
clean:
	$(RM) $(OBJS)
distclean: clean
	$(RM) -f $(BINDIR)/$(EXE)

main.o: main.c
	$(CC) $(CFLAGS) -I  $(INCDIR) -c $< -o $@
