##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Debug
ProjectName            :=SistemaHidroviario
ConfigurationName      :=Debug
WorkspacePath          := "C:\Users\FACOMP\git\Navio\SistemaHidroviario"
ProjectPath            := "C:\Users\FACOMP\git\Navio\SistemaHidroviario\SistemaHidroviario"
IntermediateDirectory  :=./Debug
OutDir                 := $(IntermediateDirectory)
CurrentFileName        :=
CurrentFilePath        :=
CurrentFileFullPath    :=
User                   :=FACOMP
Date                   :=28/03/2016
CodeLitePath           :="C:\Program Files\CodeLite"
LinkerName             :=C:/cygwin64/bin/x86_64-pc-cygwin-g++.exe
SharedObjectLinkerName :=C:/cygwin64/bin/x86_64-pc-cygwin-g++.exe -shared -fPIC
ObjectSuffix           :=.o
DependSuffix           :=.o.d
PreprocessSuffix       :=.i
DebugSwitch            :=-g 
IncludeSwitch          :=-I
LibrarySwitch          :=-l
OutputSwitch           :=-o 
LibraryPathSwitch      :=-L
PreprocessorSwitch     :=-D
SourceSwitch           :=-c 
OutputFile             :=$(IntermediateDirectory)/$(ProjectName)
Preprocessors          :=
ObjectSwitch           :=-o 
ArchiveOutputSwitch    := 
PreprocessOnlySwitch   :=-E
ObjectsFileList        :="SistemaHidroviario.txt"
PCHCompileFlags        :=
MakeDirCommand         :=makedir
RcCmpOptions           := 
RcCompilerName         :=windres
LinkOptions            :=  
IncludePath            :=  $(IncludeSwitch). $(IncludeSwitch). 
IncludePCH             := 
RcIncludePath          := 
Libs                   := 
ArLibs                 :=  
LibPath                := $(LibraryPathSwitch). 

##
## Common variables
## AR, CXX, CC, AS, CXXFLAGS and CFLAGS can be overriden using an environment variables
##
AR       := C:/cygwin64/bin/x86_64-pc-cygwin-ar.exe rcu
CXX      := C:/cygwin64/bin/x86_64-pc-cygwin-g++.exe
CC       := C:/cygwin64/bin/x86_64-pc-cygwin-gcc.exe
CXXFLAGS :=  -g -O0 -Wall $(Preprocessors)
CFLAGS   :=  -g -O0 -Wall $(Preprocessors)
ASFLAGS  := 
AS       := C:/cygwin64/bin/x86_64-pc-cygwin-as.exe


##
## User defined environment variables
##
CodeLiteDir:=C:\Program Files\CodeLite
Objects0=$(IntermediateDirectory)/Carga.cpp$(ObjectSuffix) $(IntermediateDirectory)/Data.cpp$(ObjectSuffix) $(IntermediateDirectory)/Embarcacao.cpp$(ObjectSuffix) $(IntermediateDirectory)/main.cpp$(ObjectSuffix) $(IntermediateDirectory)/Passageiro.cpp$(ObjectSuffix) $(IntermediateDirectory)/Porto.cpp$(ObjectSuffix) $(IntermediateDirectory)/Submarino.cpp$(ObjectSuffix) $(IntermediateDirectory)/Tripulante.cpp$(ObjectSuffix) $(IntermediateDirectory)/Veiculo.cpp$(ObjectSuffix) $(IntermediateDirectory)/Navio.cpp$(ObjectSuffix) \
	$(IntermediateDirectory)/Mercadoria.cpp$(ObjectSuffix) $(IntermediateDirectory)/Cruzeiro.cpp$(ObjectSuffix) $(IntermediateDirectory)/Cargueiro.cpp$(ObjectSuffix) $(IntermediateDirectory)/Mercante.cpp$(ObjectSuffix) 



Objects=$(Objects0) 

##
## Main Build Targets 
##
.PHONY: all clean PreBuild PrePreBuild PostBuild MakeIntermediateDirs
all: $(OutputFile)

$(OutputFile): $(IntermediateDirectory)/.d $(Objects) 
	@$(MakeDirCommand) $(@D)
	@echo "" > $(IntermediateDirectory)/.d
	@echo $(Objects0)  > $(ObjectsFileList)
	$(LinkerName) $(OutputSwitch)$(OutputFile) @$(ObjectsFileList) $(LibPath) $(Libs) $(LinkOptions)

MakeIntermediateDirs:
	@$(MakeDirCommand) "./Debug"


$(IntermediateDirectory)/.d:
	@$(MakeDirCommand) "./Debug"

PreBuild:


##
## Objects
##
$(IntermediateDirectory)/Carga.cpp$(ObjectSuffix): Carga.cpp $(IntermediateDirectory)/Carga.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/FACOMP/git/Navio/SistemaHidroviario/SistemaHidroviario/Carga.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Carga.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Carga.cpp$(DependSuffix): Carga.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Carga.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Carga.cpp$(DependSuffix) -MM "Carga.cpp"

$(IntermediateDirectory)/Carga.cpp$(PreprocessSuffix): Carga.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Carga.cpp$(PreprocessSuffix) "Carga.cpp"

$(IntermediateDirectory)/Data.cpp$(ObjectSuffix): Data.cpp $(IntermediateDirectory)/Data.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/FACOMP/git/Navio/SistemaHidroviario/SistemaHidroviario/Data.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Data.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Data.cpp$(DependSuffix): Data.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Data.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Data.cpp$(DependSuffix) -MM "Data.cpp"

$(IntermediateDirectory)/Data.cpp$(PreprocessSuffix): Data.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Data.cpp$(PreprocessSuffix) "Data.cpp"

$(IntermediateDirectory)/Embarcacao.cpp$(ObjectSuffix): Embarcacao.cpp $(IntermediateDirectory)/Embarcacao.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/FACOMP/git/Navio/SistemaHidroviario/SistemaHidroviario/Embarcacao.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Embarcacao.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Embarcacao.cpp$(DependSuffix): Embarcacao.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Embarcacao.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Embarcacao.cpp$(DependSuffix) -MM "Embarcacao.cpp"

$(IntermediateDirectory)/Embarcacao.cpp$(PreprocessSuffix): Embarcacao.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Embarcacao.cpp$(PreprocessSuffix) "Embarcacao.cpp"

$(IntermediateDirectory)/main.cpp$(ObjectSuffix): main.cpp $(IntermediateDirectory)/main.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/FACOMP/git/Navio/SistemaHidroviario/SistemaHidroviario/main.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/main.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/main.cpp$(DependSuffix): main.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/main.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/main.cpp$(DependSuffix) -MM "main.cpp"

$(IntermediateDirectory)/main.cpp$(PreprocessSuffix): main.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/main.cpp$(PreprocessSuffix) "main.cpp"

$(IntermediateDirectory)/Passageiro.cpp$(ObjectSuffix): Passageiro.cpp $(IntermediateDirectory)/Passageiro.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/FACOMP/git/Navio/SistemaHidroviario/SistemaHidroviario/Passageiro.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Passageiro.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Passageiro.cpp$(DependSuffix): Passageiro.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Passageiro.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Passageiro.cpp$(DependSuffix) -MM "Passageiro.cpp"

$(IntermediateDirectory)/Passageiro.cpp$(PreprocessSuffix): Passageiro.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Passageiro.cpp$(PreprocessSuffix) "Passageiro.cpp"

$(IntermediateDirectory)/Porto.cpp$(ObjectSuffix): Porto.cpp $(IntermediateDirectory)/Porto.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/FACOMP/git/Navio/SistemaHidroviario/SistemaHidroviario/Porto.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Porto.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Porto.cpp$(DependSuffix): Porto.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Porto.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Porto.cpp$(DependSuffix) -MM "Porto.cpp"

$(IntermediateDirectory)/Porto.cpp$(PreprocessSuffix): Porto.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Porto.cpp$(PreprocessSuffix) "Porto.cpp"

$(IntermediateDirectory)/Submarino.cpp$(ObjectSuffix): Submarino.cpp $(IntermediateDirectory)/Submarino.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/FACOMP/git/Navio/SistemaHidroviario/SistemaHidroviario/Submarino.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Submarino.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Submarino.cpp$(DependSuffix): Submarino.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Submarino.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Submarino.cpp$(DependSuffix) -MM "Submarino.cpp"

$(IntermediateDirectory)/Submarino.cpp$(PreprocessSuffix): Submarino.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Submarino.cpp$(PreprocessSuffix) "Submarino.cpp"

$(IntermediateDirectory)/Tripulante.cpp$(ObjectSuffix): Tripulante.cpp $(IntermediateDirectory)/Tripulante.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/FACOMP/git/Navio/SistemaHidroviario/SistemaHidroviario/Tripulante.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Tripulante.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Tripulante.cpp$(DependSuffix): Tripulante.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Tripulante.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Tripulante.cpp$(DependSuffix) -MM "Tripulante.cpp"

$(IntermediateDirectory)/Tripulante.cpp$(PreprocessSuffix): Tripulante.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Tripulante.cpp$(PreprocessSuffix) "Tripulante.cpp"

$(IntermediateDirectory)/Veiculo.cpp$(ObjectSuffix): Veiculo.cpp $(IntermediateDirectory)/Veiculo.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/FACOMP/git/Navio/SistemaHidroviario/SistemaHidroviario/Veiculo.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Veiculo.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Veiculo.cpp$(DependSuffix): Veiculo.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Veiculo.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Veiculo.cpp$(DependSuffix) -MM "Veiculo.cpp"

$(IntermediateDirectory)/Veiculo.cpp$(PreprocessSuffix): Veiculo.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Veiculo.cpp$(PreprocessSuffix) "Veiculo.cpp"

$(IntermediateDirectory)/Navio.cpp$(ObjectSuffix): Navio.cpp $(IntermediateDirectory)/Navio.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/FACOMP/git/Navio/SistemaHidroviario/SistemaHidroviario/Navio.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Navio.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Navio.cpp$(DependSuffix): Navio.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Navio.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Navio.cpp$(DependSuffix) -MM "Navio.cpp"

$(IntermediateDirectory)/Navio.cpp$(PreprocessSuffix): Navio.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Navio.cpp$(PreprocessSuffix) "Navio.cpp"

$(IntermediateDirectory)/Mercadoria.cpp$(ObjectSuffix): Mercadoria.cpp $(IntermediateDirectory)/Mercadoria.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/FACOMP/git/Navio/SistemaHidroviario/SistemaHidroviario/Mercadoria.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Mercadoria.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Mercadoria.cpp$(DependSuffix): Mercadoria.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Mercadoria.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Mercadoria.cpp$(DependSuffix) -MM "Mercadoria.cpp"

$(IntermediateDirectory)/Mercadoria.cpp$(PreprocessSuffix): Mercadoria.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Mercadoria.cpp$(PreprocessSuffix) "Mercadoria.cpp"

$(IntermediateDirectory)/Cruzeiro.cpp$(ObjectSuffix): Cruzeiro.cpp $(IntermediateDirectory)/Cruzeiro.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/FACOMP/git/Navio/SistemaHidroviario/SistemaHidroviario/Cruzeiro.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Cruzeiro.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Cruzeiro.cpp$(DependSuffix): Cruzeiro.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Cruzeiro.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Cruzeiro.cpp$(DependSuffix) -MM "Cruzeiro.cpp"

$(IntermediateDirectory)/Cruzeiro.cpp$(PreprocessSuffix): Cruzeiro.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Cruzeiro.cpp$(PreprocessSuffix) "Cruzeiro.cpp"

$(IntermediateDirectory)/Cargueiro.cpp$(ObjectSuffix): Cargueiro.cpp $(IntermediateDirectory)/Cargueiro.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/FACOMP/git/Navio/SistemaHidroviario/SistemaHidroviario/Cargueiro.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Cargueiro.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Cargueiro.cpp$(DependSuffix): Cargueiro.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Cargueiro.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Cargueiro.cpp$(DependSuffix) -MM "Cargueiro.cpp"

$(IntermediateDirectory)/Cargueiro.cpp$(PreprocessSuffix): Cargueiro.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Cargueiro.cpp$(PreprocessSuffix) "Cargueiro.cpp"

$(IntermediateDirectory)/Mercante.cpp$(ObjectSuffix): Mercante.cpp $(IntermediateDirectory)/Mercante.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/FACOMP/git/Navio/SistemaHidroviario/SistemaHidroviario/Mercante.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Mercante.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Mercante.cpp$(DependSuffix): Mercante.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Mercante.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Mercante.cpp$(DependSuffix) -MM "Mercante.cpp"

$(IntermediateDirectory)/Mercante.cpp$(PreprocessSuffix): Mercante.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Mercante.cpp$(PreprocessSuffix) "Mercante.cpp"


-include $(IntermediateDirectory)/*$(DependSuffix)
##
## Clean
##
clean:
	$(RM) -r ./Debug/


