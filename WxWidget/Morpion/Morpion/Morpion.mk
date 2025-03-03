##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Debug
ProjectName            :=Morpion
ConfigurationName      :=Debug
WorkspaceConfiguration := $(ConfigurationName)
WorkspacePath          :=/home/user/Bureau/Mini_Jeu_Beta_V4/Mini_Jeu_Beta/Mini_Jeu
ProjectPath            :=/home/user/Bureau/Mini_Jeu_Beta_V4/Mini_Jeu_Beta/Mini_Jeu/Morpion
IntermediateDirectory  :=../build-$(ConfigurationName)/Morpion
OutDir                 :=../build-$(ConfigurationName)/Morpion
CurrentFileName        :=
CurrentFilePath        :=
CurrentFileFullPath    :=
User                   :=user
Date                   :=02/16/23
CodeLitePath           :=/home/user/.codelite
LinkerName             :=g++
SharedObjectLinkerName :=g++ -shared -fPIC
ObjectSuffix           :=.o
DependSuffix           :=.o.d
PreprocessSuffix       :=.o.i
DebugSwitch            :=-gstab
IncludeSwitch          :=-I
LibrarySwitch          :=-l
OutputSwitch           :=-o 
LibraryPathSwitch      :=-L
PreprocessorSwitch     :=-D
SourceSwitch           :=-c 
OutputFile             :=../build-$(ConfigurationName)/bin/$(ProjectName)
Preprocessors          :=
ObjectSwitch           :=-o 
ArchiveOutputSwitch    := 
PreprocessOnlySwitch   :=-E 
ObjectsFileList        :=$(IntermediateDirectory)/ObjectsList.txt
PCHCompileFlags        :=
LinkOptions            := -no-pie $(shell wx-config   --libs --unicode=yes)
IncludePath            :=  $(IncludeSwitch). $(IncludeSwitch)IHM 
IncludePCH             := 
RcIncludePath          := $(IncludeSwitch)music.wav $(IncludeSwitch)/rkalkan/music.wav 
Libs                   := 
ArLibs                 :=  
LibPath                := $(LibraryPathSwitch). $(LibraryPathSwitch)music.wav 

##
## Common variables
## AR, CXX, CC, AS, CXXFLAGS and CFLAGS can be overriden using an environment variables
##
AR       := ar rcus
CXX      := g++
CC       := gcc
CXXFLAGS :=  -g -O0 -Wall $(shell wx-config --cxxflags --unicode=yes  ) $(Preprocessors)
CFLAGS   :=  -g -O0 -Wall $(shell wx-config --cxxflags --unicode=yes  ) $(Preprocessors)
ASFLAGS  := 
AS       := as


##
## User defined environment variables
##
CodeLiteDir:=/usr/share/codelite
Objects0=../build-$(ConfigurationName)/Morpion/EvtFramePrincipal.cpp$(ObjectSuffix) ../build-$(ConfigurationName)/Morpion/FramePrincipal.cpp$(ObjectSuffix) ../build-$(ConfigurationName)/Morpion/MyApp.cpp$(ObjectSuffix) 



Objects=$(Objects0) 

##
## Main Build Targets 
##
.PHONY: all clean PreBuild PrePreBuild PostBuild MakeIntermediateDirs
all: MakeIntermediateDirs $(OutputFile)

$(OutputFile): ../build-$(ConfigurationName)/Morpion/.d $(Objects) 
	@mkdir -p "../build-$(ConfigurationName)/Morpion"
	@echo "" > $(IntermediateDirectory)/.d
	@echo $(Objects0)  > $(ObjectsFileList)
	$(LinkerName) $(OutputSwitch)$(OutputFile) @$(ObjectsFileList) $(LibPath) $(Libs) $(LinkOptions)

MakeIntermediateDirs:
	@mkdir -p "../build-$(ConfigurationName)/Morpion"
	@mkdir -p ""../build-$(ConfigurationName)/bin""

../build-$(ConfigurationName)/Morpion/.d:
	@mkdir -p "../build-$(ConfigurationName)/Morpion"

PreBuild:


##
## Objects
##
../build-$(ConfigurationName)/Morpion/EvtFramePrincipal.cpp$(ObjectSuffix): EvtFramePrincipal.cpp ../build-$(ConfigurationName)/Morpion/EvtFramePrincipal.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/user/Bureau/Mini_Jeu_Beta_V4/Mini_Jeu_Beta/Mini_Jeu/Morpion/EvtFramePrincipal.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/EvtFramePrincipal.cpp$(ObjectSuffix) $(IncludePath)
../build-$(ConfigurationName)/Morpion/EvtFramePrincipal.cpp$(DependSuffix): EvtFramePrincipal.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT../build-$(ConfigurationName)/Morpion/EvtFramePrincipal.cpp$(ObjectSuffix) -MF../build-$(ConfigurationName)/Morpion/EvtFramePrincipal.cpp$(DependSuffix) -MM EvtFramePrincipal.cpp

../build-$(ConfigurationName)/Morpion/EvtFramePrincipal.cpp$(PreprocessSuffix): EvtFramePrincipal.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) ../build-$(ConfigurationName)/Morpion/EvtFramePrincipal.cpp$(PreprocessSuffix) EvtFramePrincipal.cpp

../build-$(ConfigurationName)/Morpion/FramePrincipal.cpp$(ObjectSuffix): FramePrincipal.cpp ../build-$(ConfigurationName)/Morpion/FramePrincipal.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/user/Bureau/Mini_Jeu_Beta_V4/Mini_Jeu_Beta/Mini_Jeu/Morpion/FramePrincipal.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/FramePrincipal.cpp$(ObjectSuffix) $(IncludePath)
../build-$(ConfigurationName)/Morpion/FramePrincipal.cpp$(DependSuffix): FramePrincipal.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT../build-$(ConfigurationName)/Morpion/FramePrincipal.cpp$(ObjectSuffix) -MF../build-$(ConfigurationName)/Morpion/FramePrincipal.cpp$(DependSuffix) -MM FramePrincipal.cpp

../build-$(ConfigurationName)/Morpion/FramePrincipal.cpp$(PreprocessSuffix): FramePrincipal.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) ../build-$(ConfigurationName)/Morpion/FramePrincipal.cpp$(PreprocessSuffix) FramePrincipal.cpp

../build-$(ConfigurationName)/Morpion/MyApp.cpp$(ObjectSuffix): MyApp.cpp ../build-$(ConfigurationName)/Morpion/MyApp.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/user/Bureau/Mini_Jeu_Beta_V4/Mini_Jeu_Beta/Mini_Jeu/Morpion/MyApp.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/MyApp.cpp$(ObjectSuffix) $(IncludePath)
../build-$(ConfigurationName)/Morpion/MyApp.cpp$(DependSuffix): MyApp.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT../build-$(ConfigurationName)/Morpion/MyApp.cpp$(ObjectSuffix) -MF../build-$(ConfigurationName)/Morpion/MyApp.cpp$(DependSuffix) -MM MyApp.cpp

../build-$(ConfigurationName)/Morpion/MyApp.cpp$(PreprocessSuffix): MyApp.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) ../build-$(ConfigurationName)/Morpion/MyApp.cpp$(PreprocessSuffix) MyApp.cpp


-include ../build-$(ConfigurationName)/Morpion//*$(DependSuffix)
##
## Clean
##
clean:
	$(RM) -r $(IntermediateDirectory)


