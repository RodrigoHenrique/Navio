##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Debug
ProjectName            :=SistemaHidroviario
ConfigurationName      :=Debug
WorkspacePath          := "C:\Users\Rodrigo\git\Navio"
ProjectPath            := "C:\Users\Rodrigo\git\Navio\SistemaHidroviario"
IntermediateDirectory  :=./Debug
OutDir                 := $(IntermediateDirectory)
CurrentFileName        :=
CurrentFilePath        :=
CurrentFileFullPath    :=
User                   :=Rodrigo
Date                   :=27/03/2016
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
ObjectsFileList        :="SistemaHidroviario.txt"
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
Objects0=$(IntermediateDirectory)/Navio_main.cpp$(ObjectSuffix) $(IntermediateDirectory)/Navio_Carga.cpp$(ObjectSuffix) $(IntermediateDirectory)/Navio_Data.cpp$(ObjectSuffix) $(IntermediateDirectory)/Navio_Embarcacao.cpp$(ObjectSuffix) $(IntermediateDirectory)/Navio_Passageiro.cpp$(ObjectSuffix) $(IntermediateDirectory)/Navio_Porto.cpp$(ObjectSuffix) $(IntermediateDirectory)/Navio_Tripulante.cpp$(ObjectSuffix) $(IntermediateDirectory)/Navio_Veiculo.cpp$(ObjectSuffix) 



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
$(IntermediateDirectory)/Navio_main.cpp$(ObjectSuffix): ../main.cpp $(IntermediateDirectory)/Navio_main.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/Rodrigo/git/Navio/main.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Navio_main.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Navio_main.cpp$(DependSuffix): ../main.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Navio_main.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Navio_main.cpp$(DependSuffix) -MM "../main.cpp"

$(IntermediateDirectory)/Navio_main.cpp$(PreprocessSuffix): ../main.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Navio_main.cpp$(PreprocessSuffix) "../main.cpp"

$(IntermediateDirectory)/Navio_Carga.cpp$(ObjectSuffix): ../Carga.cpp $(IntermediateDirectory)/Navio_Carga.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/Rodrigo/git/Navio/Carga.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Navio_Carga.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Navio_Carga.cpp$(DependSuffix): ../Carga.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Navio_Carga.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Navio_Carga.cpp$(DependSuffix) -MM "../Carga.cpp"

$(IntermediateDirectory)/Navio_Carga.cpp$(PreprocessSuffix): ../Carga.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Navio_Carga.cpp$(PreprocessSuffix) "../Carga.cpp"

$(IntermediateDirectory)/Navio_Data.cpp$(ObjectSuffix): ../Data.cpp $(IntermediateDirectory)/Navio_Data.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/Rodrigo/git/Navio/Data.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Navio_Data.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Navio_Data.cpp$(DependSuffix): ../Data.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Navio_Data.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Navio_Data.cpp$(DependSuffix) -MM "../Data.cpp"

$(IntermediateDirectory)/Navio_Data.cpp$(PreprocessSuffix): ../Data.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Navio_Data.cpp$(PreprocessSuffix) "../Data.cpp"

$(IntermediateDirectory)/Navio_Embarcacao.cpp$(ObjectSuffix): ../Embarcacao.cpp $(IntermediateDirectory)/Navio_Embarcacao.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/Rodrigo/git/Navio/Embarcacao.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Navio_Embarcacao.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Navio_Embarcacao.cpp$(DependSuffix): ../Embarcacao.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Navio_Embarcacao.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Navio_Embarcacao.cpp$(DependSuffix) -MM "../Embarcacao.cpp"

$(IntermediateDirectory)/Navio_Embarcacao.cpp$(PreprocessSuffix): ../Embarcacao.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Navio_Embarcacao.cpp$(PreprocessSuffix) "../Embarcacao.cpp"

$(IntermediateDirectory)/Navio_Passageiro.cpp$(ObjectSuffix): ../Passageiro.cpp $(IntermediateDirectory)/Navio_Passageiro.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/Rodrigo/git/Navio/Passageiro.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Navio_Passageiro.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Navio_Passageiro.cpp$(DependSuffix): ../Passageiro.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Navio_Passageiro.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Navio_Passageiro.cpp$(DependSuffix) -MM "../Passageiro.cpp"

$(IntermediateDirectory)/Navio_Passageiro.cpp$(PreprocessSuffix): ../Passageiro.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Navio_Passageiro.cpp$(PreprocessSuffix) "../Passageiro.cpp"

$(IntermediateDirectory)/Navio_Porto.cpp$(ObjectSuffix): ../Porto.cpp $(IntermediateDirectory)/Navio_Porto.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/Rodrigo/git/Navio/Porto.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Navio_Porto.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Navio_Porto.cpp$(DependSuffix): ../Porto.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Navio_Porto.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Navio_Porto.cpp$(DependSuffix) -MM "../Porto.cpp"

$(IntermediateDirectory)/Navio_Porto.cpp$(PreprocessSuffix): ../Porto.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Navio_Porto.cpp$(PreprocessSuffix) "../Porto.cpp"

$(IntermediateDirectory)/Navio_Tripulante.cpp$(ObjectSuffix): ../Tripulante.cpp $(IntermediateDirectory)/Navio_Tripulante.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/Rodrigo/git/Navio/Tripulante.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Navio_Tripulante.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Navio_Tripulante.cpp$(DependSuffix): ../Tripulante.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Navio_Tripulante.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Navio_Tripulante.cpp$(DependSuffix) -MM "../Tripulante.cpp"

$(IntermediateDirectory)/Navio_Tripulante.cpp$(PreprocessSuffix): ../Tripulante.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Navio_Tripulante.cpp$(PreprocessSuffix) "../Tripulante.cpp"

$(IntermediateDirectory)/Navio_Veiculo.cpp$(ObjectSuffix): ../Veiculo.cpp $(IntermediateDirectory)/Navio_Veiculo.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/Rodrigo/git/Navio/Veiculo.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Navio_Veiculo.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Navio_Veiculo.cpp$(DependSuffix): ../Veiculo.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Navio_Veiculo.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Navio_Veiculo.cpp$(DependSuffix) -MM "../Veiculo.cpp"

$(IntermediateDirectory)/Navio_Veiculo.cpp$(PreprocessSuffix): ../Veiculo.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Navio_Veiculo.cpp$(PreprocessSuffix) "../Veiculo.cpp"


-include $(IntermediateDirectory)/*$(DependSuffix)
##
## Clean
##
clean:
	$(RM) -r ./Debug/


