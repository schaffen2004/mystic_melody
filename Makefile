# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.17

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

# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2020.3.4\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2020.3.4\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = D:\mystic_melody

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = D:\mystic_melody

#=============================================================================
# Targets provided globally by CMake.

# Special rule for the target edit_cache
edit_cache:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "No interactive CMake dialog available..."
	"C:\Program Files\JetBrains\CLion 2020.3.4\bin\cmake\win\bin\cmake.exe" -E echo "No interactive CMake dialog available."
.PHONY : edit_cache

# Special rule for the target edit_cache
edit_cache/fast: edit_cache

.PHONY : edit_cache/fast

# Special rule for the target rebuild_cache
rebuild_cache:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Running CMake to regenerate build system..."
	"C:\Program Files\JetBrains\CLion 2020.3.4\bin\cmake\win\bin\cmake.exe" --regenerate-during-build -S$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR)
.PHONY : rebuild_cache

# Special rule for the target rebuild_cache
rebuild_cache/fast: rebuild_cache

.PHONY : rebuild_cache/fast

# The main all target
all: cmake_check_build_system
	$(CMAKE_COMMAND) -E cmake_progress_start D:\mystic_melody\CMakeFiles D:\mystic_melody\CMakeFiles\progress.marks
	$(MAKE) $(MAKESILENT) -f CMakeFiles\Makefile2 all
	$(CMAKE_COMMAND) -E cmake_progress_start D:\mystic_melody\CMakeFiles 0
.PHONY : all

# The main clean target
clean:
	$(MAKE) $(MAKESILENT) -f CMakeFiles\Makefile2 clean
.PHONY : clean

# The main clean target
clean/fast: clean

.PHONY : clean/fast

# Prepare targets for installation.
preinstall: all
	$(MAKE) $(MAKESILENT) -f CMakeFiles\Makefile2 preinstall
.PHONY : preinstall

# Prepare targets for installation.
preinstall/fast:
	$(MAKE) $(MAKESILENT) -f CMakeFiles\Makefile2 preinstall
.PHONY : preinstall/fast

# clear depends
depend:
	$(CMAKE_COMMAND) -S$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR) --check-build-system CMakeFiles\Makefile.cmake 1
.PHONY : depend

#=============================================================================
# Target rules for targets named C

# Build rule for target.
C : cmake_check_build_system
	$(MAKE) $(MAKESILENT) -f CMakeFiles\Makefile2 C
.PHONY : C

# fast build rule for target.
C/fast:
	$(MAKE) $(MAKESILENT) -f CMakeFiles\C.dir\build.make CMakeFiles/C.dir/build
.PHONY : C/fast

src/config/database_config.obj: src/config/database_config.c.obj

.PHONY : src/config/database_config.obj

# target to build an object file
src/config/database_config.c.obj:
	$(MAKE) $(MAKESILENT) -f CMakeFiles\C.dir\build.make CMakeFiles/C.dir/src/config/database_config.c.obj
.PHONY : src/config/database_config.c.obj

src/config/database_config.i: src/config/database_config.c.i

.PHONY : src/config/database_config.i

# target to preprocess a source file
src/config/database_config.c.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles\C.dir\build.make CMakeFiles/C.dir/src/config/database_config.c.i
.PHONY : src/config/database_config.c.i

src/config/database_config.s: src/config/database_config.c.s

.PHONY : src/config/database_config.s

# target to generate assembly for a file
src/config/database_config.c.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles\C.dir\build.make CMakeFiles/C.dir/src/config/database_config.c.s
.PHONY : src/config/database_config.c.s

src/control/main_board_control.obj: src/control/main_board_control.c.obj

.PHONY : src/control/main_board_control.obj

# target to build an object file
src/control/main_board_control.c.obj:
	$(MAKE) $(MAKESILENT) -f CMakeFiles\C.dir\build.make CMakeFiles/C.dir/src/control/main_board_control.c.obj
.PHONY : src/control/main_board_control.c.obj

src/control/main_board_control.i: src/control/main_board_control.c.i

.PHONY : src/control/main_board_control.i

# target to preprocess a source file
src/control/main_board_control.c.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles\C.dir\build.make CMakeFiles/C.dir/src/control/main_board_control.c.i
.PHONY : src/control/main_board_control.c.i

src/control/main_board_control.s: src/control/main_board_control.c.s

.PHONY : src/control/main_board_control.s

# target to generate assembly for a file
src/control/main_board_control.c.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles\C.dir\build.make CMakeFiles/C.dir/src/control/main_board_control.c.s
.PHONY : src/control/main_board_control.c.s

src/control/sign_in_control.obj: src/control/sign_in_control.c.obj

.PHONY : src/control/sign_in_control.obj

# target to build an object file
src/control/sign_in_control.c.obj:
	$(MAKE) $(MAKESILENT) -f CMakeFiles\C.dir\build.make CMakeFiles/C.dir/src/control/sign_in_control.c.obj
.PHONY : src/control/sign_in_control.c.obj

src/control/sign_in_control.i: src/control/sign_in_control.c.i

.PHONY : src/control/sign_in_control.i

# target to preprocess a source file
src/control/sign_in_control.c.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles\C.dir\build.make CMakeFiles/C.dir/src/control/sign_in_control.c.i
.PHONY : src/control/sign_in_control.c.i

src/control/sign_in_control.s: src/control/sign_in_control.c.s

.PHONY : src/control/sign_in_control.s

# target to generate assembly for a file
src/control/sign_in_control.c.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles\C.dir\build.make CMakeFiles/C.dir/src/control/sign_in_control.c.s
.PHONY : src/control/sign_in_control.c.s

src/control/sign_up_control.obj: src/control/sign_up_control.c.obj

.PHONY : src/control/sign_up_control.obj

# target to build an object file
src/control/sign_up_control.c.obj:
	$(MAKE) $(MAKESILENT) -f CMakeFiles\C.dir\build.make CMakeFiles/C.dir/src/control/sign_up_control.c.obj
.PHONY : src/control/sign_up_control.c.obj

src/control/sign_up_control.i: src/control/sign_up_control.c.i

.PHONY : src/control/sign_up_control.i

# target to preprocess a source file
src/control/sign_up_control.c.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles\C.dir\build.make CMakeFiles/C.dir/src/control/sign_up_control.c.i
.PHONY : src/control/sign_up_control.c.i

src/control/sign_up_control.s: src/control/sign_up_control.c.s

.PHONY : src/control/sign_up_control.s

# target to generate assembly for a file
src/control/sign_up_control.c.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles\C.dir\build.make CMakeFiles/C.dir/src/control/sign_up_control.c.s
.PHONY : src/control/sign_up_control.c.s

src/main.obj: src/main.c.obj

.PHONY : src/main.obj

# target to build an object file
src/main.c.obj:
	$(MAKE) $(MAKESILENT) -f CMakeFiles\C.dir\build.make CMakeFiles/C.dir/src/main.c.obj
.PHONY : src/main.c.obj

src/main.i: src/main.c.i

.PHONY : src/main.i

# target to preprocess a source file
src/main.c.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles\C.dir\build.make CMakeFiles/C.dir/src/main.c.i
.PHONY : src/main.c.i

src/main.s: src/main.c.s

.PHONY : src/main.s

# target to generate assembly for a file
src/main.c.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles\C.dir\build.make CMakeFiles/C.dir/src/main.c.s
.PHONY : src/main.c.s

src/models/playlist.obj: src/models/playlist.c.obj

.PHONY : src/models/playlist.obj

# target to build an object file
src/models/playlist.c.obj:
	$(MAKE) $(MAKESILENT) -f CMakeFiles\C.dir\build.make CMakeFiles/C.dir/src/models/playlist.c.obj
.PHONY : src/models/playlist.c.obj

src/models/playlist.i: src/models/playlist.c.i

.PHONY : src/models/playlist.i

# target to preprocess a source file
src/models/playlist.c.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles\C.dir\build.make CMakeFiles/C.dir/src/models/playlist.c.i
.PHONY : src/models/playlist.c.i

src/models/playlist.s: src/models/playlist.c.s

.PHONY : src/models/playlist.s

# target to generate assembly for a file
src/models/playlist.c.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles\C.dir\build.make CMakeFiles/C.dir/src/models/playlist.c.s
.PHONY : src/models/playlist.c.s

src/models/songs.obj: src/models/songs.c.obj

.PHONY : src/models/songs.obj

# target to build an object file
src/models/songs.c.obj:
	$(MAKE) $(MAKESILENT) -f CMakeFiles\C.dir\build.make CMakeFiles/C.dir/src/models/songs.c.obj
.PHONY : src/models/songs.c.obj

src/models/songs.i: src/models/songs.c.i

.PHONY : src/models/songs.i

# target to preprocess a source file
src/models/songs.c.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles\C.dir\build.make CMakeFiles/C.dir/src/models/songs.c.i
.PHONY : src/models/songs.c.i

src/models/songs.s: src/models/songs.c.s

.PHONY : src/models/songs.s

# target to generate assembly for a file
src/models/songs.c.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles\C.dir\build.make CMakeFiles/C.dir/src/models/songs.c.s
.PHONY : src/models/songs.c.s

src/models/users.obj: src/models/users.c.obj

.PHONY : src/models/users.obj

# target to build an object file
src/models/users.c.obj:
	$(MAKE) $(MAKESILENT) -f CMakeFiles\C.dir\build.make CMakeFiles/C.dir/src/models/users.c.obj
.PHONY : src/models/users.c.obj

src/models/users.i: src/models/users.c.i

.PHONY : src/models/users.i

# target to preprocess a source file
src/models/users.c.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles\C.dir\build.make CMakeFiles/C.dir/src/models/users.c.i
.PHONY : src/models/users.c.i

src/models/users.s: src/models/users.c.s

.PHONY : src/models/users.s

# target to generate assembly for a file
src/models/users.c.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles\C.dir\build.make CMakeFiles/C.dir/src/models/users.c.s
.PHONY : src/models/users.c.s

src/view/components/add_playlist.obj: src/view/components/add_playlist.c.obj

.PHONY : src/view/components/add_playlist.obj

# target to build an object file
src/view/components/add_playlist.c.obj:
	$(MAKE) $(MAKESILENT) -f CMakeFiles\C.dir\build.make CMakeFiles/C.dir/src/view/components/add_playlist.c.obj
.PHONY : src/view/components/add_playlist.c.obj

src/view/components/add_playlist.i: src/view/components/add_playlist.c.i

.PHONY : src/view/components/add_playlist.i

# target to preprocess a source file
src/view/components/add_playlist.c.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles\C.dir\build.make CMakeFiles/C.dir/src/view/components/add_playlist.c.i
.PHONY : src/view/components/add_playlist.c.i

src/view/components/add_playlist.s: src/view/components/add_playlist.c.s

.PHONY : src/view/components/add_playlist.s

# target to generate assembly for a file
src/view/components/add_playlist.c.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles\C.dir\build.make CMakeFiles/C.dir/src/view/components/add_playlist.c.s
.PHONY : src/view/components/add_playlist.c.s

src/view/components/header_bar.obj: src/view/components/header_bar.c.obj

.PHONY : src/view/components/header_bar.obj

# target to build an object file
src/view/components/header_bar.c.obj:
	$(MAKE) $(MAKESILENT) -f CMakeFiles\C.dir\build.make CMakeFiles/C.dir/src/view/components/header_bar.c.obj
.PHONY : src/view/components/header_bar.c.obj

src/view/components/header_bar.i: src/view/components/header_bar.c.i

.PHONY : src/view/components/header_bar.i

# target to preprocess a source file
src/view/components/header_bar.c.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles\C.dir\build.make CMakeFiles/C.dir/src/view/components/header_bar.c.i
.PHONY : src/view/components/header_bar.c.i

src/view/components/header_bar.s: src/view/components/header_bar.c.s

.PHONY : src/view/components/header_bar.s

# target to generate assembly for a file
src/view/components/header_bar.c.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles\C.dir\build.make CMakeFiles/C.dir/src/view/components/header_bar.c.s
.PHONY : src/view/components/header_bar.c.s

src/view/components/music_bar.obj: src/view/components/music_bar.c.obj

.PHONY : src/view/components/music_bar.obj

# target to build an object file
src/view/components/music_bar.c.obj:
	$(MAKE) $(MAKESILENT) -f CMakeFiles\C.dir\build.make CMakeFiles/C.dir/src/view/components/music_bar.c.obj
.PHONY : src/view/components/music_bar.c.obj

src/view/components/music_bar.i: src/view/components/music_bar.c.i

.PHONY : src/view/components/music_bar.i

# target to preprocess a source file
src/view/components/music_bar.c.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles\C.dir\build.make CMakeFiles/C.dir/src/view/components/music_bar.c.i
.PHONY : src/view/components/music_bar.c.i

src/view/components/music_bar.s: src/view/components/music_bar.c.s

.PHONY : src/view/components/music_bar.s

# target to generate assembly for a file
src/view/components/music_bar.c.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles\C.dir\build.make CMakeFiles/C.dir/src/view/components/music_bar.c.s
.PHONY : src/view/components/music_bar.c.s

src/view/components/search_bar.obj: src/view/components/search_bar.c.obj

.PHONY : src/view/components/search_bar.obj

# target to build an object file
src/view/components/search_bar.c.obj:
	$(MAKE) $(MAKESILENT) -f CMakeFiles\C.dir\build.make CMakeFiles/C.dir/src/view/components/search_bar.c.obj
.PHONY : src/view/components/search_bar.c.obj

src/view/components/search_bar.i: src/view/components/search_bar.c.i

.PHONY : src/view/components/search_bar.i

# target to preprocess a source file
src/view/components/search_bar.c.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles\C.dir\build.make CMakeFiles/C.dir/src/view/components/search_bar.c.i
.PHONY : src/view/components/search_bar.c.i

src/view/components/search_bar.s: src/view/components/search_bar.c.s

.PHONY : src/view/components/search_bar.s

# target to generate assembly for a file
src/view/components/search_bar.c.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles\C.dir\build.make CMakeFiles/C.dir/src/view/components/search_bar.c.s
.PHONY : src/view/components/search_bar.c.s

src/view/components/upload.obj: src/view/components/upload.c.obj

.PHONY : src/view/components/upload.obj

# target to build an object file
src/view/components/upload.c.obj:
	$(MAKE) $(MAKESILENT) -f CMakeFiles\C.dir\build.make CMakeFiles/C.dir/src/view/components/upload.c.obj
.PHONY : src/view/components/upload.c.obj

src/view/components/upload.i: src/view/components/upload.c.i

.PHONY : src/view/components/upload.i

# target to preprocess a source file
src/view/components/upload.c.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles\C.dir\build.make CMakeFiles/C.dir/src/view/components/upload.c.i
.PHONY : src/view/components/upload.c.i

src/view/components/upload.s: src/view/components/upload.c.s

.PHONY : src/view/components/upload.s

# target to generate assembly for a file
src/view/components/upload.c.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles\C.dir\build.make CMakeFiles/C.dir/src/view/components/upload.c.s
.PHONY : src/view/components/upload.c.s

src/view/intro_view.obj: src/view/intro_view.c.obj

.PHONY : src/view/intro_view.obj

# target to build an object file
src/view/intro_view.c.obj:
	$(MAKE) $(MAKESILENT) -f CMakeFiles\C.dir\build.make CMakeFiles/C.dir/src/view/intro_view.c.obj
.PHONY : src/view/intro_view.c.obj

src/view/intro_view.i: src/view/intro_view.c.i

.PHONY : src/view/intro_view.i

# target to preprocess a source file
src/view/intro_view.c.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles\C.dir\build.make CMakeFiles/C.dir/src/view/intro_view.c.i
.PHONY : src/view/intro_view.c.i

src/view/intro_view.s: src/view/intro_view.c.s

.PHONY : src/view/intro_view.s

# target to generate assembly for a file
src/view/intro_view.c.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles\C.dir\build.make CMakeFiles/C.dir/src/view/intro_view.c.s
.PHONY : src/view/intro_view.c.s

src/view/main_board_view.obj: src/view/main_board_view.c.obj

.PHONY : src/view/main_board_view.obj

# target to build an object file
src/view/main_board_view.c.obj:
	$(MAKE) $(MAKESILENT) -f CMakeFiles\C.dir\build.make CMakeFiles/C.dir/src/view/main_board_view.c.obj
.PHONY : src/view/main_board_view.c.obj

src/view/main_board_view.i: src/view/main_board_view.c.i

.PHONY : src/view/main_board_view.i

# target to preprocess a source file
src/view/main_board_view.c.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles\C.dir\build.make CMakeFiles/C.dir/src/view/main_board_view.c.i
.PHONY : src/view/main_board_view.c.i

src/view/main_board_view.s: src/view/main_board_view.c.s

.PHONY : src/view/main_board_view.s

# target to generate assembly for a file
src/view/main_board_view.c.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles\C.dir\build.make CMakeFiles/C.dir/src/view/main_board_view.c.s
.PHONY : src/view/main_board_view.c.s

src/view/sign_in_view.obj: src/view/sign_in_view.c.obj

.PHONY : src/view/sign_in_view.obj

# target to build an object file
src/view/sign_in_view.c.obj:
	$(MAKE) $(MAKESILENT) -f CMakeFiles\C.dir\build.make CMakeFiles/C.dir/src/view/sign_in_view.c.obj
.PHONY : src/view/sign_in_view.c.obj

src/view/sign_in_view.i: src/view/sign_in_view.c.i

.PHONY : src/view/sign_in_view.i

# target to preprocess a source file
src/view/sign_in_view.c.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles\C.dir\build.make CMakeFiles/C.dir/src/view/sign_in_view.c.i
.PHONY : src/view/sign_in_view.c.i

src/view/sign_in_view.s: src/view/sign_in_view.c.s

.PHONY : src/view/sign_in_view.s

# target to generate assembly for a file
src/view/sign_in_view.c.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles\C.dir\build.make CMakeFiles/C.dir/src/view/sign_in_view.c.s
.PHONY : src/view/sign_in_view.c.s

src/view/sign_up_view.obj: src/view/sign_up_view.c.obj

.PHONY : src/view/sign_up_view.obj

# target to build an object file
src/view/sign_up_view.c.obj:
	$(MAKE) $(MAKESILENT) -f CMakeFiles\C.dir\build.make CMakeFiles/C.dir/src/view/sign_up_view.c.obj
.PHONY : src/view/sign_up_view.c.obj

src/view/sign_up_view.i: src/view/sign_up_view.c.i

.PHONY : src/view/sign_up_view.i

# target to preprocess a source file
src/view/sign_up_view.c.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles\C.dir\build.make CMakeFiles/C.dir/src/view/sign_up_view.c.i
.PHONY : src/view/sign_up_view.c.i

src/view/sign_up_view.s: src/view/sign_up_view.c.s

.PHONY : src/view/sign_up_view.s

# target to generate assembly for a file
src/view/sign_up_view.c.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles\C.dir\build.make CMakeFiles/C.dir/src/view/sign_up_view.c.s
.PHONY : src/view/sign_up_view.c.s

# Help Target
help:
	@echo The following are some of the valid targets for this Makefile:
	@echo ... all (the default if no target is provided)
	@echo ... clean
	@echo ... depend
	@echo ... edit_cache
	@echo ... rebuild_cache
	@echo ... C
	@echo ... src/config/database_config.obj
	@echo ... src/config/database_config.i
	@echo ... src/config/database_config.s
	@echo ... src/control/main_board_control.obj
	@echo ... src/control/main_board_control.i
	@echo ... src/control/main_board_control.s
	@echo ... src/control/sign_in_control.obj
	@echo ... src/control/sign_in_control.i
	@echo ... src/control/sign_in_control.s
	@echo ... src/control/sign_up_control.obj
	@echo ... src/control/sign_up_control.i
	@echo ... src/control/sign_up_control.s
	@echo ... src/main.obj
	@echo ... src/main.i
	@echo ... src/main.s
	@echo ... src/models/playlist.obj
	@echo ... src/models/playlist.i
	@echo ... src/models/playlist.s
	@echo ... src/models/songs.obj
	@echo ... src/models/songs.i
	@echo ... src/models/songs.s
	@echo ... src/models/users.obj
	@echo ... src/models/users.i
	@echo ... src/models/users.s
	@echo ... src/view/components/add_playlist.obj
	@echo ... src/view/components/add_playlist.i
	@echo ... src/view/components/add_playlist.s
	@echo ... src/view/components/header_bar.obj
	@echo ... src/view/components/header_bar.i
	@echo ... src/view/components/header_bar.s
	@echo ... src/view/components/music_bar.obj
	@echo ... src/view/components/music_bar.i
	@echo ... src/view/components/music_bar.s
	@echo ... src/view/components/search_bar.obj
	@echo ... src/view/components/search_bar.i
	@echo ... src/view/components/search_bar.s
	@echo ... src/view/components/upload.obj
	@echo ... src/view/components/upload.i
	@echo ... src/view/components/upload.s
	@echo ... src/view/intro_view.obj
	@echo ... src/view/intro_view.i
	@echo ... src/view/intro_view.s
	@echo ... src/view/main_board_view.obj
	@echo ... src/view/main_board_view.i
	@echo ... src/view/main_board_view.s
	@echo ... src/view/sign_in_view.obj
	@echo ... src/view/sign_in_view.i
	@echo ... src/view/sign_in_view.s
	@echo ... src/view/sign_up_view.obj
	@echo ... src/view/sign_up_view.i
	@echo ... src/view/sign_up_view.s
.PHONY : help



#=============================================================================
# Special targets to cleanup operation of make.

# Special rule to run CMake to check the build system integrity.
# No rule that depends on this can have commands that come from listfiles
# because they might be regenerated.
cmake_check_build_system:
	$(CMAKE_COMMAND) -S$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR) --check-build-system CMakeFiles\Makefile.cmake 0
.PHONY : cmake_check_build_system

