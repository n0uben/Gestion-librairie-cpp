# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.20

# Default target executed when no arguments are given to make.
default_target: all
.PHONY : default_target

# Allow only one "make -f Makefile2" at a time, but pass parallelism.
.NOTPARALLEL:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/noureux2u/Documents/projects/projet-cpp

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/noureux2u/Documents/projects/projet-cpp

#=============================================================================
# Targets provided globally by CMake.

# Special rule for the target rebuild_cache
rebuild_cache:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Running CMake to regenerate build system..."
	/usr/bin/cmake --regenerate-during-build -S$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR)
.PHONY : rebuild_cache

# Special rule for the target rebuild_cache
rebuild_cache/fast: rebuild_cache
.PHONY : rebuild_cache/fast

# Special rule for the target edit_cache
edit_cache:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Running CMake cache editor..."
	/usr/bin/ccmake -S$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR)
.PHONY : edit_cache

# Special rule for the target edit_cache
edit_cache/fast: edit_cache
.PHONY : edit_cache/fast

# The main all target
all: cmake_check_build_system
	$(CMAKE_COMMAND) -E cmake_progress_start /home/noureux2u/Documents/projects/projet-cpp/CMakeFiles /home/noureux2u/Documents/projects/projet-cpp//CMakeFiles/progress.marks
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 all
	$(CMAKE_COMMAND) -E cmake_progress_start /home/noureux2u/Documents/projects/projet-cpp/CMakeFiles 0
.PHONY : all

# The main clean target
clean:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 clean
.PHONY : clean

# The main clean target
clean/fast: clean
.PHONY : clean/fast

# Prepare targets for installation.
preinstall: all
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 preinstall
.PHONY : preinstall

# Prepare targets for installation.
preinstall/fast:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 preinstall
.PHONY : preinstall/fast

# clear depends
depend:
	$(CMAKE_COMMAND) -S$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR) --check-build-system CMakeFiles/Makefile.cmake 1
.PHONY : depend

#=============================================================================
# Target rules for targets named mkcp_inter

# Build rule for target.
mkcp_inter: cmake_check_build_system
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 mkcp_inter
.PHONY : mkcp_inter

# fast build rule for target.
mkcp_inter/fast:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/mkcp_inter.dir/build.make CMakeFiles/mkcp_inter.dir/build
.PHONY : mkcp_inter/fast

Dictionnaires.o: Dictionnaires.cpp.o
.PHONY : Dictionnaires.o

# target to build an object file
Dictionnaires.cpp.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/mkcp_inter.dir/build.make CMakeFiles/mkcp_inter.dir/Dictionnaires.cpp.o
.PHONY : Dictionnaires.cpp.o

Dictionnaires.i: Dictionnaires.cpp.i
.PHONY : Dictionnaires.i

# target to preprocess a source file
Dictionnaires.cpp.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/mkcp_inter.dir/build.make CMakeFiles/mkcp_inter.dir/Dictionnaires.cpp.i
.PHONY : Dictionnaires.cpp.i

Dictionnaires.s: Dictionnaires.cpp.s
.PHONY : Dictionnaires.s

# target to generate assembly for a file
Dictionnaires.cpp.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/mkcp_inter.dir/build.make CMakeFiles/mkcp_inter.dir/Dictionnaires.cpp.s
.PHONY : Dictionnaires.cpp.s

Documents.o: Documents.cpp.o
.PHONY : Documents.o

# target to build an object file
Documents.cpp.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/mkcp_inter.dir/build.make CMakeFiles/mkcp_inter.dir/Documents.cpp.o
.PHONY : Documents.cpp.o

Documents.i: Documents.cpp.i
.PHONY : Documents.i

# target to preprocess a source file
Documents.cpp.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/mkcp_inter.dir/build.make CMakeFiles/mkcp_inter.dir/Documents.cpp.i
.PHONY : Documents.cpp.i

Documents.s: Documents.cpp.s
.PHONY : Documents.s

# target to generate assembly for a file
Documents.cpp.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/mkcp_inter.dir/build.make CMakeFiles/mkcp_inter.dir/Documents.cpp.s
.PHONY : Documents.cpp.s

Livres.o: Livres.cpp.o
.PHONY : Livres.o

# target to build an object file
Livres.cpp.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/mkcp_inter.dir/build.make CMakeFiles/mkcp_inter.dir/Livres.cpp.o
.PHONY : Livres.cpp.o

Livres.i: Livres.cpp.i
.PHONY : Livres.i

# target to preprocess a source file
Livres.cpp.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/mkcp_inter.dir/build.make CMakeFiles/mkcp_inter.dir/Livres.cpp.i
.PHONY : Livres.cpp.i

Livres.s: Livres.cpp.s
.PHONY : Livres.s

# target to generate assembly for a file
Livres.cpp.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/mkcp_inter.dir/build.make CMakeFiles/mkcp_inter.dir/Livres.cpp.s
.PHONY : Livres.cpp.s

Manuels.o: Manuels.cpp.o
.PHONY : Manuels.o

# target to build an object file
Manuels.cpp.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/mkcp_inter.dir/build.make CMakeFiles/mkcp_inter.dir/Manuels.cpp.o
.PHONY : Manuels.cpp.o

Manuels.i: Manuels.cpp.i
.PHONY : Manuels.i

# target to preprocess a source file
Manuels.cpp.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/mkcp_inter.dir/build.make CMakeFiles/mkcp_inter.dir/Manuels.cpp.i
.PHONY : Manuels.cpp.i

Manuels.s: Manuels.cpp.s
.PHONY : Manuels.s

# target to generate assembly for a file
Manuels.cpp.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/mkcp_inter.dir/build.make CMakeFiles/mkcp_inter.dir/Manuels.cpp.s
.PHONY : Manuels.cpp.s

Romans.o: Romans.cpp.o
.PHONY : Romans.o

# target to build an object file
Romans.cpp.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/mkcp_inter.dir/build.make CMakeFiles/mkcp_inter.dir/Romans.cpp.o
.PHONY : Romans.cpp.o

Romans.i: Romans.cpp.i
.PHONY : Romans.i

# target to preprocess a source file
Romans.cpp.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/mkcp_inter.dir/build.make CMakeFiles/mkcp_inter.dir/Romans.cpp.i
.PHONY : Romans.cpp.i

Romans.s: Romans.cpp.s
.PHONY : Romans.s

# target to generate assembly for a file
Romans.cpp.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/mkcp_inter.dir/build.make CMakeFiles/mkcp_inter.dir/Romans.cpp.s
.PHONY : Romans.cpp.s

StockDocuments.o: StockDocuments.cpp.o
.PHONY : StockDocuments.o

# target to build an object file
StockDocuments.cpp.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/mkcp_inter.dir/build.make CMakeFiles/mkcp_inter.dir/StockDocuments.cpp.o
.PHONY : StockDocuments.cpp.o

StockDocuments.i: StockDocuments.cpp.i
.PHONY : StockDocuments.i

# target to preprocess a source file
StockDocuments.cpp.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/mkcp_inter.dir/build.make CMakeFiles/mkcp_inter.dir/StockDocuments.cpp.i
.PHONY : StockDocuments.cpp.i

StockDocuments.s: StockDocuments.cpp.s
.PHONY : StockDocuments.s

# target to generate assembly for a file
StockDocuments.cpp.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/mkcp_inter.dir/build.make CMakeFiles/mkcp_inter.dir/StockDocuments.cpp.s
.PHONY : StockDocuments.cpp.s

main.o: main.cpp.o
.PHONY : main.o

# target to build an object file
main.cpp.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/mkcp_inter.dir/build.make CMakeFiles/mkcp_inter.dir/main.cpp.o
.PHONY : main.cpp.o

main.i: main.cpp.i
.PHONY : main.i

# target to preprocess a source file
main.cpp.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/mkcp_inter.dir/build.make CMakeFiles/mkcp_inter.dir/main.cpp.i
.PHONY : main.cpp.i

main.s: main.cpp.s
.PHONY : main.s

# target to generate assembly for a file
main.cpp.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/mkcp_inter.dir/build.make CMakeFiles/mkcp_inter.dir/main.cpp.s
.PHONY : main.cpp.s

# Help Target
help:
	@echo "The following are some of the valid targets for this Makefile:"
	@echo "... all (the default if no target is provided)"
	@echo "... clean"
	@echo "... depend"
	@echo "... edit_cache"
	@echo "... rebuild_cache"
	@echo "... mkcp_inter"
	@echo "... Dictionnaires.o"
	@echo "... Dictionnaires.i"
	@echo "... Dictionnaires.s"
	@echo "... Documents.o"
	@echo "... Documents.i"
	@echo "... Documents.s"
	@echo "... Livres.o"
	@echo "... Livres.i"
	@echo "... Livres.s"
	@echo "... Manuels.o"
	@echo "... Manuels.i"
	@echo "... Manuels.s"
	@echo "... Romans.o"
	@echo "... Romans.i"
	@echo "... Romans.s"
	@echo "... StockDocuments.o"
	@echo "... StockDocuments.i"
	@echo "... StockDocuments.s"
	@echo "... main.o"
	@echo "... main.i"
	@echo "... main.s"
.PHONY : help



#=============================================================================
# Special targets to cleanup operation of make.

# Special rule to run CMake to check the build system integrity.
# No rule that depends on this can have commands that come from listfiles
# because they might be regenerated.
cmake_check_build_system:
	$(CMAKE_COMMAND) -S$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR) --check-build-system CMakeFiles/Makefile.cmake 0
.PHONY : cmake_check_build_system

