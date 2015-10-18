SRCDIR=./src/

all: src

src:
	@echo Making project
	@make -C $(SRCDIR)

.PHONY:src


src-clean:
	@echo Cleaning src
	@make -C $(SRCDIR) clean

.PHONY:src-clean

clean:
	@echo Cleaning all
clean:src-clean test-clean

.PHONY:clean

src-rebuild:
	@echo Rebuilding src
	@make -C $(SRCDIR) rebuild

.PHONY:src-rebuild

rebuild:
	@echo Rebuilding all
rebuild:src-rebuild

.PHONY:rebuild

