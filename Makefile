.PHONY: clean All

All:
	@echo "----------Building project:[ Navio - Debug ]----------"
	@cd "Navio" && "$(MAKE)" -f  "Navio.mk"
clean:
	@echo "----------Cleaning project:[ Navio - Debug ]----------"
	@cd "Navio" && "$(MAKE)" -f  "Navio.mk" clean
