SOURCES=$(shell find $(SRCDIR) -name "*.cpp")
OBJECTS=$(SOURCES:$(SRCDIR)%.cpp=$(OUTDIR)%.o)

all:$(RESULT)

$(RESULT):$(OBJECTS) $(LDEPS)
ifeq ($(OUTTYPE),lib)
	@echo Packaging library
	@ar rcs $(RESULT) $(OBJECTS)
else
	@echo Linking executable
	@$(CC) $(LFLAGS) $(OBJECTS) $(LIBS) -o $(RESULT)
endif

$(OUTDIR)%.o:$(SRCDIR)%.cpp
	@echo Compiling $@ from $<
	@mkdir -p $(dir $@)
	@$(CC) -c $(CFLAGS) $< -o $@
	@$(CC) -MM -c $(CFLAGS) $< > $(OUTDIR)$*.d
	@mv -f $(OUTDIR)$*.d $(OUTDIR)$*.d.tmp
	@sed -e 's|.*:|$(OUTDIR)$*.o:|' < $(OUTDIR)$*.d.tmp > $(OUTDIR)$*.d
		@sed -e 's/.*://' -e 's/\\$$//' < $(OUTDIR)$*.d.tmp | fmt -1 | \
			sed -e 's/^ *//' -e 's/$$/:/' >> $(OUTDIR)$*.d
		@rm -f $(OUTDIR)$*.d.tmp

clean:
	@echo Cleaning $(RESULT)
	@rm $(OUTDIR) -rf
	@rm $(RESULT) -f

rebuild:clean $(RESULT)

