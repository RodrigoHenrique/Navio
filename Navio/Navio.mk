##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Debug
ProjectName            :=Navio
ConfigurationName      :=Debug
WorkspacePath          := "C:\Users\Rodrigo\git\Navio"
ProjectPath            := "C:\Users\Rodrigo\git\Navio\Navio"
IntermediateDirectory  :=./Debug
OutDir                 := $(IntermediateDirectory)
CurrentFileName        :=
CurrentFilePath        :=
CurrentFileFullPath    :=
User                   :=Rodrigo
Date                   :=22/03/2016
CodeLitePath           :="C:\Program Files\CodeLite"
LinkerName             :=C:/TDM-GCC-32/bin/g++.exe
SharedObjectLinkerName :=C:/TDM-GCC-32/bin/g++.exe -shared -fPIC
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
ObjectsFileList        :="Navio.txt"
PCHCompileFlags        :=
MakeDirCommand         :=makedir
RcCmpOptions           := 
RcCompilerName         :=C:/TDM-GCC-32/bin/windres.exe
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
AR       := C:/TDM-GCC-32/bin/ar.exe rcu
CXX      := C:/TDM-GCC-32/bin/g++.exe
CC       := C:/TDM-GCC-32/bin/gcc.exe
CXXFLAGS :=  -g -O0 -Wall $(Preprocessors)
CFLAGS   :=  -g -O0 -Wall $(Preprocessors)
ASFLAGS  := 
AS       := C:/TDM-GCC-32/bin/as.exe


##
## User defined environment variables
##
CodeLiteDir:=C:\Program Files\CodeLite
Objects0=$(IntermediateDirectory)/main.cpp$(ObjectSuffix) $(IntermediateDirectory)/Navio.cpp$(ObjectSuffix) $(IntermediateDirectory)/Data.cpp$(ObjectSuffix) $(IntermediateDirectory)/Porto.cpp$(ObjectSuffix) $(IntermediateDirectory)/Cruzeiro.cpp$(ObjectSuffix) $(IntermediateDirectory)/CruzeiroComercial.cpp$(ObjectSuffix) $(IntermediateDirectory)/Cargueiro.cpp$(ObjectSuffix) $(IntermediateDirectory)/Carga.cpp$(ObjectSuffix) $(IntermediateDirectory)/Veiculo.cpp$(ObjectSuffix) $(IntermediateDirectory)/Embarcacao.cpp$(ObjectSuffix) \
	$(IntermediateDirectory)/Submarino.cpp$(ObjectSuffix) 



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
$(IntermediateDirectory)/main.cpp$(ObjectSuffix): main.cpp $(IntermediateDirectory)/main.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/Rodrigo/git/Navio/Navio/main.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/main.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/main.cpp$(DependSuffix): main.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/main.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/main.cpp$(DependSuffix) -MM "main.cpp"

$(IntermediateDirectory)/main.cpp$(PreprocessSuffix): main.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/main.cpp$(PreprocessSuffix) "main.cpp"

$(IntermediateDirectory)/Navio.cpp$(ObjectSuffix): Navio.cpp $(IntermediateDirectory)/Navio.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/Rodrigo/git/Navio/Navio/Navio.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Navio.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Navio.cpp$(DependSuffix): Navio.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Navio.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Navio.cpp$(DependSuffix) -MM "Navio.cpp"

$(IntermediateDirectory)/Navio.cpp$(PreprocessSuffix): Navio.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Navio.cpp$(PreprocessSuffix) "Navio.cpp"

$(IntermediateDirectory)/Data.cpp$(ObjectSuffix): Data.cpp $(IntermediateDirectory)/Data.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/Rodrigo/git/Navio/Navio/Data.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Data.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Data.cpp$(DependSuffix): Data.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Data.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Data.cpp$(DependSuffix) -MM "Data.cpp"

$(IntermediateDirectory)/Data.cpp$(PreprocessSuffix): Data.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Data.cpp$(PreprocessSuffix) "Data.cpp"

$(IntermediateDirectory)/Porto.cpp$(ObjectSuffix): Porto.cpp $(IntermediateDirectory)/Porto.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/Rodrigo/git/Navio/Navio/Porto.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Porto.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Porto.cpp$(DependSuffix): Porto.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Porto.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Porto.cpp$(DependSuffix) -MM "Porto.cpp"

$(IntermediateDirectory)/Porto.cpp$(PreprocessSuffix): Porto.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Porto.cpp$(PreprocessSuffix) "Porto.cpp"

$(IntermediateDirectory)/Cruzeiro.cpp$(ObjectSuffix): Cruzeiro.cpp $(IntermediateDirectory)/Cruzeiro.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/Rodrigo/git/Navio/Navio/Cruzeiro.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Cruzeiro.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Cruzeiro.cpp$(DependSuffix): Cruzeiro.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Cruzeiro.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Cruzeiro.cpp$(DependSuffix) -MM "Cruzeiro.cpp"

$(IntermediateDirectory)/Cruzeiro.cpp$(PreprocessSuffix): Cruzeiro.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Cruzeiro.cpp$(PreprocessSuffix) "Cruzeiro.cpp"

$(IntermediateDirectory)/CruzeiroComercial.cpp$(ObjectSuffix): CruzeiroComercial.cpp $(IntermediateDirectory)/CruzeiroComercial.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/Rodrigo/git/Navio/Navio/CruzeiroComercial.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/CruzeiroComercial.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/CruzeiroComercial.cpp$(DependSuffix): CruzeiroComercial.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/CruzeiroComercial.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/CruzeiroComercial.cpp$(DependSuffix) -MM "CruzeiroComercial.cpp"

$(IntermediateDirectory)/CruzeiroComercial.cpp$(PreprocessSuffix): CruzeiroComercial.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/CruzeiroComercial.cpp$(PreprocessSuffix) "CruzeiroComercial.cpp"

$(IntermediateDirectory)/Cargueiro.cpp$(ObjectSuffix): Cargueiro.cpp $(IntermediateDirectory)/Cargueiro.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/Rodrigo/git/Navio/Navio/Cargueiro.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Cargueiro.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Cargueiro.cpp$(DependSuffix): Cargueiro.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Cargueiro.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Cargueiro.cpp$(DependSuffix) -MM "Cargueiro.cpp"

$(IntermediateDirectory)/Cargueiro.cpp$(PreprocessSuffix): Cargueiro.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Cargueiro.cpp$(PreprocessSuffix) "Cargueiro.cpp"

$(IntermediateDirectory)/Carga.cpp$(ObjectSuffix): Carga.cpp $(IntermediateDirectory)/Carga.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/Rodrigo/git/Navio/Navio/Carga.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Carga.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Carga.cpp$(DependSuffix): Carga.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Carga.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Carga.cpp$(DependSuffix) -MM "Carga.cpp"

$(IntermediateDirectory)/Carga.cpp$(PreprocessSuffix): Carga.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Carga.cpp$(PreprocessSuffix) "Carga.cpp"

$(IntermediateDirectory)/Veiculo.cpp$(ObjectSuffix): Veiculo.cpp $(IntermediateDirectory)/Veiculo.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/Rodrigo/git/Navio/Navio/Veiculo.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Veiculo.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Veiculo.cpp$(DependSuffix): Veiculo.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Veiculo.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Veiculo.cpp$(DependSuffix) -MM "Veiculo.cpp"

$(IntermediateDirectory)/Veiculo.cpp$(PreprocessSuffix): Veiculo.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Veiculo.cpp$(PreprocessSuffix) "Veiculo.cpp"

$(IntermediateDirectory)/Embarcacao.cpp$(ObjectSuffix): Embarcacao.cpp $(IntermediateDirectory)/Embarcacao.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/Rodrigo/git/Navio/Navio/Embarcacao.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Embarcacao.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Embarcacao.cpp$(DependSuffix): Embarcacao.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Embarcacao.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Embarcacao.cpp$(DependSuffix) -MM "Embarcacao.cpp"

$(IntermediateDirectory)/Embarcacao.cpp$(PreprocessSuffix): Embarcacao.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Embarcacao.cpp$(PreprocessSuffix) "Embarcacao.cpp"

$(IntermediateDirectory)/Submarino.cpp$(ObjectSuffix): Submarino.cpp $(IntermediateDirectory)/Submarino.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/Rodrigo/git/Navio/Navio/Submarino.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Submarino.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Submarino.cpp$(DependSuffix): Submarino.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Submarino.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Submarino.cpp$(DependSuffix) -MM "Submarino.cpp"

$(IntermediateDirectory)/Submarino.cpp$(PreprocessSuffix): Submarino.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Submarino.cpp$(PreprocessSuffix) "Submarino.cpp"


-include $(IntermediateDirectory)/*$(DependSuffix)
##
## Clean
##
clean:
	$(RM) -r ./Debug/


