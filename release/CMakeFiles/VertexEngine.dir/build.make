# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.15

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2019.3.2\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2019.3.2\bin\cmake\win\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\User2\Documents\2DEngine

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\User2\Documents\2DEngine\release

# Include any dependencies generated for this target.
include CMakeFiles/VertexEngine.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/VertexEngine.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/VertexEngine.dir/flags.make

CMakeFiles/VertexEngine.dir/EngineSrc/glad.c.obj: CMakeFiles/VertexEngine.dir/flags.make
CMakeFiles/VertexEngine.dir/EngineSrc/glad.c.obj: CMakeFiles/VertexEngine.dir/includes_C.rsp
CMakeFiles/VertexEngine.dir/EngineSrc/glad.c.obj: ../EngineSrc/glad.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\User2\Documents\2DEngine\release\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/VertexEngine.dir/EngineSrc/glad.c.obj"
	C:\msys64\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\VertexEngine.dir\EngineSrc\glad.c.obj   -c C:\Users\User2\Documents\2DEngine\EngineSrc\glad.c

CMakeFiles/VertexEngine.dir/EngineSrc/glad.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/VertexEngine.dir/EngineSrc/glad.c.i"
	C:\msys64\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\Users\User2\Documents\2DEngine\EngineSrc\glad.c > CMakeFiles\VertexEngine.dir\EngineSrc\glad.c.i

CMakeFiles/VertexEngine.dir/EngineSrc/glad.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/VertexEngine.dir/EngineSrc/glad.c.s"
	C:\msys64\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\Users\User2\Documents\2DEngine\EngineSrc\glad.c -o CMakeFiles\VertexEngine.dir\EngineSrc\glad.c.s

CMakeFiles/VertexEngine.dir/EngineSrc/Vertex.cpp.obj: CMakeFiles/VertexEngine.dir/flags.make
CMakeFiles/VertexEngine.dir/EngineSrc/Vertex.cpp.obj: CMakeFiles/VertexEngine.dir/includes_CXX.rsp
CMakeFiles/VertexEngine.dir/EngineSrc/Vertex.cpp.obj: ../EngineSrc/Vertex.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\User2\Documents\2DEngine\release\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/VertexEngine.dir/EngineSrc/Vertex.cpp.obj"
	C:\msys64\mingw64\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\VertexEngine.dir\EngineSrc\Vertex.cpp.obj -c C:\Users\User2\Documents\2DEngine\EngineSrc\Vertex.cpp

CMakeFiles/VertexEngine.dir/EngineSrc/Vertex.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/VertexEngine.dir/EngineSrc/Vertex.cpp.i"
	C:\msys64\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\User2\Documents\2DEngine\EngineSrc\Vertex.cpp > CMakeFiles\VertexEngine.dir\EngineSrc\Vertex.cpp.i

CMakeFiles/VertexEngine.dir/EngineSrc/Vertex.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/VertexEngine.dir/EngineSrc/Vertex.cpp.s"
	C:\msys64\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\User2\Documents\2DEngine\EngineSrc\Vertex.cpp -o CMakeFiles\VertexEngine.dir\EngineSrc\Vertex.cpp.s

CMakeFiles/VertexEngine.dir/EngineSrc/Window.cpp.obj: CMakeFiles/VertexEngine.dir/flags.make
CMakeFiles/VertexEngine.dir/EngineSrc/Window.cpp.obj: CMakeFiles/VertexEngine.dir/includes_CXX.rsp
CMakeFiles/VertexEngine.dir/EngineSrc/Window.cpp.obj: ../EngineSrc/Window.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\User2\Documents\2DEngine\release\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/VertexEngine.dir/EngineSrc/Window.cpp.obj"
	C:\msys64\mingw64\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\VertexEngine.dir\EngineSrc\Window.cpp.obj -c C:\Users\User2\Documents\2DEngine\EngineSrc\Window.cpp

CMakeFiles/VertexEngine.dir/EngineSrc/Window.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/VertexEngine.dir/EngineSrc/Window.cpp.i"
	C:\msys64\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\User2\Documents\2DEngine\EngineSrc\Window.cpp > CMakeFiles\VertexEngine.dir\EngineSrc\Window.cpp.i

CMakeFiles/VertexEngine.dir/EngineSrc/Window.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/VertexEngine.dir/EngineSrc/Window.cpp.s"
	C:\msys64\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\User2\Documents\2DEngine\EngineSrc\Window.cpp -o CMakeFiles\VertexEngine.dir\EngineSrc\Window.cpp.s

CMakeFiles/VertexEngine.dir/EngineSrc/Sprite.cpp.obj: CMakeFiles/VertexEngine.dir/flags.make
CMakeFiles/VertexEngine.dir/EngineSrc/Sprite.cpp.obj: CMakeFiles/VertexEngine.dir/includes_CXX.rsp
CMakeFiles/VertexEngine.dir/EngineSrc/Sprite.cpp.obj: ../EngineSrc/Sprite.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\User2\Documents\2DEngine\release\CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/VertexEngine.dir/EngineSrc/Sprite.cpp.obj"
	C:\msys64\mingw64\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\VertexEngine.dir\EngineSrc\Sprite.cpp.obj -c C:\Users\User2\Documents\2DEngine\EngineSrc\Sprite.cpp

CMakeFiles/VertexEngine.dir/EngineSrc/Sprite.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/VertexEngine.dir/EngineSrc/Sprite.cpp.i"
	C:\msys64\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\User2\Documents\2DEngine\EngineSrc\Sprite.cpp > CMakeFiles\VertexEngine.dir\EngineSrc\Sprite.cpp.i

CMakeFiles/VertexEngine.dir/EngineSrc/Sprite.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/VertexEngine.dir/EngineSrc/Sprite.cpp.s"
	C:\msys64\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\User2\Documents\2DEngine\EngineSrc\Sprite.cpp -o CMakeFiles\VertexEngine.dir\EngineSrc\Sprite.cpp.s

CMakeFiles/VertexEngine.dir/EngineSrc/Shader.cpp.obj: CMakeFiles/VertexEngine.dir/flags.make
CMakeFiles/VertexEngine.dir/EngineSrc/Shader.cpp.obj: CMakeFiles/VertexEngine.dir/includes_CXX.rsp
CMakeFiles/VertexEngine.dir/EngineSrc/Shader.cpp.obj: ../EngineSrc/Shader.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\User2\Documents\2DEngine\release\CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/VertexEngine.dir/EngineSrc/Shader.cpp.obj"
	C:\msys64\mingw64\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\VertexEngine.dir\EngineSrc\Shader.cpp.obj -c C:\Users\User2\Documents\2DEngine\EngineSrc\Shader.cpp

CMakeFiles/VertexEngine.dir/EngineSrc/Shader.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/VertexEngine.dir/EngineSrc/Shader.cpp.i"
	C:\msys64\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\User2\Documents\2DEngine\EngineSrc\Shader.cpp > CMakeFiles\VertexEngine.dir\EngineSrc\Shader.cpp.i

CMakeFiles/VertexEngine.dir/EngineSrc/Shader.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/VertexEngine.dir/EngineSrc/Shader.cpp.s"
	C:\msys64\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\User2\Documents\2DEngine\EngineSrc\Shader.cpp -o CMakeFiles\VertexEngine.dir\EngineSrc\Shader.cpp.s

CMakeFiles/VertexEngine.dir/EngineSrc/IOManager.cpp.obj: CMakeFiles/VertexEngine.dir/flags.make
CMakeFiles/VertexEngine.dir/EngineSrc/IOManager.cpp.obj: CMakeFiles/VertexEngine.dir/includes_CXX.rsp
CMakeFiles/VertexEngine.dir/EngineSrc/IOManager.cpp.obj: ../EngineSrc/IOManager.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\User2\Documents\2DEngine\release\CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/VertexEngine.dir/EngineSrc/IOManager.cpp.obj"
	C:\msys64\mingw64\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\VertexEngine.dir\EngineSrc\IOManager.cpp.obj -c C:\Users\User2\Documents\2DEngine\EngineSrc\IOManager.cpp

CMakeFiles/VertexEngine.dir/EngineSrc/IOManager.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/VertexEngine.dir/EngineSrc/IOManager.cpp.i"
	C:\msys64\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\User2\Documents\2DEngine\EngineSrc\IOManager.cpp > CMakeFiles\VertexEngine.dir\EngineSrc\IOManager.cpp.i

CMakeFiles/VertexEngine.dir/EngineSrc/IOManager.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/VertexEngine.dir/EngineSrc/IOManager.cpp.s"
	C:\msys64\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\User2\Documents\2DEngine\EngineSrc\IOManager.cpp -o CMakeFiles\VertexEngine.dir\EngineSrc\IOManager.cpp.s

CMakeFiles/VertexEngine.dir/EngineSrc/ImageLoader.cpp.obj: CMakeFiles/VertexEngine.dir/flags.make
CMakeFiles/VertexEngine.dir/EngineSrc/ImageLoader.cpp.obj: CMakeFiles/VertexEngine.dir/includes_CXX.rsp
CMakeFiles/VertexEngine.dir/EngineSrc/ImageLoader.cpp.obj: ../EngineSrc/ImageLoader.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\User2\Documents\2DEngine\release\CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/VertexEngine.dir/EngineSrc/ImageLoader.cpp.obj"
	C:\msys64\mingw64\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\VertexEngine.dir\EngineSrc\ImageLoader.cpp.obj -c C:\Users\User2\Documents\2DEngine\EngineSrc\ImageLoader.cpp

CMakeFiles/VertexEngine.dir/EngineSrc/ImageLoader.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/VertexEngine.dir/EngineSrc/ImageLoader.cpp.i"
	C:\msys64\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\User2\Documents\2DEngine\EngineSrc\ImageLoader.cpp > CMakeFiles\VertexEngine.dir\EngineSrc\ImageLoader.cpp.i

CMakeFiles/VertexEngine.dir/EngineSrc/ImageLoader.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/VertexEngine.dir/EngineSrc/ImageLoader.cpp.s"
	C:\msys64\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\User2\Documents\2DEngine\EngineSrc\ImageLoader.cpp -o CMakeFiles\VertexEngine.dir\EngineSrc\ImageLoader.cpp.s

CMakeFiles/VertexEngine.dir/EngineSrc/Utility/stb_image.cpp.obj: CMakeFiles/VertexEngine.dir/flags.make
CMakeFiles/VertexEngine.dir/EngineSrc/Utility/stb_image.cpp.obj: CMakeFiles/VertexEngine.dir/includes_CXX.rsp
CMakeFiles/VertexEngine.dir/EngineSrc/Utility/stb_image.cpp.obj: ../EngineSrc/Utility/stb_image.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\User2\Documents\2DEngine\release\CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object CMakeFiles/VertexEngine.dir/EngineSrc/Utility/stb_image.cpp.obj"
	C:\msys64\mingw64\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\VertexEngine.dir\EngineSrc\Utility\stb_image.cpp.obj -c C:\Users\User2\Documents\2DEngine\EngineSrc\Utility\stb_image.cpp

CMakeFiles/VertexEngine.dir/EngineSrc/Utility/stb_image.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/VertexEngine.dir/EngineSrc/Utility/stb_image.cpp.i"
	C:\msys64\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\User2\Documents\2DEngine\EngineSrc\Utility\stb_image.cpp > CMakeFiles\VertexEngine.dir\EngineSrc\Utility\stb_image.cpp.i

CMakeFiles/VertexEngine.dir/EngineSrc/Utility/stb_image.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/VertexEngine.dir/EngineSrc/Utility/stb_image.cpp.s"
	C:\msys64\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\User2\Documents\2DEngine\EngineSrc\Utility\stb_image.cpp -o CMakeFiles\VertexEngine.dir\EngineSrc\Utility\stb_image.cpp.s

CMakeFiles/VertexEngine.dir/EngineSrc/Texture2D.cpp.obj: CMakeFiles/VertexEngine.dir/flags.make
CMakeFiles/VertexEngine.dir/EngineSrc/Texture2D.cpp.obj: CMakeFiles/VertexEngine.dir/includes_CXX.rsp
CMakeFiles/VertexEngine.dir/EngineSrc/Texture2D.cpp.obj: ../EngineSrc/Texture2D.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\User2\Documents\2DEngine\release\CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building CXX object CMakeFiles/VertexEngine.dir/EngineSrc/Texture2D.cpp.obj"
	C:\msys64\mingw64\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\VertexEngine.dir\EngineSrc\Texture2D.cpp.obj -c C:\Users\User2\Documents\2DEngine\EngineSrc\Texture2D.cpp

CMakeFiles/VertexEngine.dir/EngineSrc/Texture2D.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/VertexEngine.dir/EngineSrc/Texture2D.cpp.i"
	C:\msys64\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\User2\Documents\2DEngine\EngineSrc\Texture2D.cpp > CMakeFiles\VertexEngine.dir\EngineSrc\Texture2D.cpp.i

CMakeFiles/VertexEngine.dir/EngineSrc/Texture2D.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/VertexEngine.dir/EngineSrc/Texture2D.cpp.s"
	C:\msys64\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\User2\Documents\2DEngine\EngineSrc\Texture2D.cpp -o CMakeFiles\VertexEngine.dir\EngineSrc\Texture2D.cpp.s

CMakeFiles/VertexEngine.dir/EngineSrc/Camera2D.cpp.obj: CMakeFiles/VertexEngine.dir/flags.make
CMakeFiles/VertexEngine.dir/EngineSrc/Camera2D.cpp.obj: CMakeFiles/VertexEngine.dir/includes_CXX.rsp
CMakeFiles/VertexEngine.dir/EngineSrc/Camera2D.cpp.obj: ../EngineSrc/Camera2D.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\User2\Documents\2DEngine\release\CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Building CXX object CMakeFiles/VertexEngine.dir/EngineSrc/Camera2D.cpp.obj"
	C:\msys64\mingw64\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\VertexEngine.dir\EngineSrc\Camera2D.cpp.obj -c C:\Users\User2\Documents\2DEngine\EngineSrc\Camera2D.cpp

CMakeFiles/VertexEngine.dir/EngineSrc/Camera2D.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/VertexEngine.dir/EngineSrc/Camera2D.cpp.i"
	C:\msys64\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\User2\Documents\2DEngine\EngineSrc\Camera2D.cpp > CMakeFiles\VertexEngine.dir\EngineSrc\Camera2D.cpp.i

CMakeFiles/VertexEngine.dir/EngineSrc/Camera2D.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/VertexEngine.dir/EngineSrc/Camera2D.cpp.s"
	C:\msys64\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\User2\Documents\2DEngine\EngineSrc\Camera2D.cpp -o CMakeFiles\VertexEngine.dir\EngineSrc\Camera2D.cpp.s

CMakeFiles/VertexEngine.dir/EngineSrc/TextureCache.cpp.obj: CMakeFiles/VertexEngine.dir/flags.make
CMakeFiles/VertexEngine.dir/EngineSrc/TextureCache.cpp.obj: CMakeFiles/VertexEngine.dir/includes_CXX.rsp
CMakeFiles/VertexEngine.dir/EngineSrc/TextureCache.cpp.obj: ../EngineSrc/TextureCache.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\User2\Documents\2DEngine\release\CMakeFiles --progress-num=$(CMAKE_PROGRESS_11) "Building CXX object CMakeFiles/VertexEngine.dir/EngineSrc/TextureCache.cpp.obj"
	C:\msys64\mingw64\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\VertexEngine.dir\EngineSrc\TextureCache.cpp.obj -c C:\Users\User2\Documents\2DEngine\EngineSrc\TextureCache.cpp

CMakeFiles/VertexEngine.dir/EngineSrc/TextureCache.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/VertexEngine.dir/EngineSrc/TextureCache.cpp.i"
	C:\msys64\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\User2\Documents\2DEngine\EngineSrc\TextureCache.cpp > CMakeFiles\VertexEngine.dir\EngineSrc\TextureCache.cpp.i

CMakeFiles/VertexEngine.dir/EngineSrc/TextureCache.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/VertexEngine.dir/EngineSrc/TextureCache.cpp.s"
	C:\msys64\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\User2\Documents\2DEngine\EngineSrc\TextureCache.cpp -o CMakeFiles\VertexEngine.dir\EngineSrc\TextureCache.cpp.s

CMakeFiles/VertexEngine.dir/EngineSrc/ResourceManager.cpp.obj: CMakeFiles/VertexEngine.dir/flags.make
CMakeFiles/VertexEngine.dir/EngineSrc/ResourceManager.cpp.obj: CMakeFiles/VertexEngine.dir/includes_CXX.rsp
CMakeFiles/VertexEngine.dir/EngineSrc/ResourceManager.cpp.obj: ../EngineSrc/ResourceManager.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\User2\Documents\2DEngine\release\CMakeFiles --progress-num=$(CMAKE_PROGRESS_12) "Building CXX object CMakeFiles/VertexEngine.dir/EngineSrc/ResourceManager.cpp.obj"
	C:\msys64\mingw64\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\VertexEngine.dir\EngineSrc\ResourceManager.cpp.obj -c C:\Users\User2\Documents\2DEngine\EngineSrc\ResourceManager.cpp

CMakeFiles/VertexEngine.dir/EngineSrc/ResourceManager.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/VertexEngine.dir/EngineSrc/ResourceManager.cpp.i"
	C:\msys64\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\User2\Documents\2DEngine\EngineSrc\ResourceManager.cpp > CMakeFiles\VertexEngine.dir\EngineSrc\ResourceManager.cpp.i

CMakeFiles/VertexEngine.dir/EngineSrc/ResourceManager.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/VertexEngine.dir/EngineSrc/ResourceManager.cpp.s"
	C:\msys64\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\User2\Documents\2DEngine\EngineSrc\ResourceManager.cpp -o CMakeFiles\VertexEngine.dir\EngineSrc\ResourceManager.cpp.s

# Object files for target VertexEngine
VertexEngine_OBJECTS = \
"CMakeFiles/VertexEngine.dir/EngineSrc/glad.c.obj" \
"CMakeFiles/VertexEngine.dir/EngineSrc/Vertex.cpp.obj" \
"CMakeFiles/VertexEngine.dir/EngineSrc/Window.cpp.obj" \
"CMakeFiles/VertexEngine.dir/EngineSrc/Sprite.cpp.obj" \
"CMakeFiles/VertexEngine.dir/EngineSrc/Shader.cpp.obj" \
"CMakeFiles/VertexEngine.dir/EngineSrc/IOManager.cpp.obj" \
"CMakeFiles/VertexEngine.dir/EngineSrc/ImageLoader.cpp.obj" \
"CMakeFiles/VertexEngine.dir/EngineSrc/Utility/stb_image.cpp.obj" \
"CMakeFiles/VertexEngine.dir/EngineSrc/Texture2D.cpp.obj" \
"CMakeFiles/VertexEngine.dir/EngineSrc/Camera2D.cpp.obj" \
"CMakeFiles/VertexEngine.dir/EngineSrc/TextureCache.cpp.obj" \
"CMakeFiles/VertexEngine.dir/EngineSrc/ResourceManager.cpp.obj"

# External object files for target VertexEngine
VertexEngine_EXTERNAL_OBJECTS =

libVertexEngine.a: CMakeFiles/VertexEngine.dir/EngineSrc/glad.c.obj
libVertexEngine.a: CMakeFiles/VertexEngine.dir/EngineSrc/Vertex.cpp.obj
libVertexEngine.a: CMakeFiles/VertexEngine.dir/EngineSrc/Window.cpp.obj
libVertexEngine.a: CMakeFiles/VertexEngine.dir/EngineSrc/Sprite.cpp.obj
libVertexEngine.a: CMakeFiles/VertexEngine.dir/EngineSrc/Shader.cpp.obj
libVertexEngine.a: CMakeFiles/VertexEngine.dir/EngineSrc/IOManager.cpp.obj
libVertexEngine.a: CMakeFiles/VertexEngine.dir/EngineSrc/ImageLoader.cpp.obj
libVertexEngine.a: CMakeFiles/VertexEngine.dir/EngineSrc/Utility/stb_image.cpp.obj
libVertexEngine.a: CMakeFiles/VertexEngine.dir/EngineSrc/Texture2D.cpp.obj
libVertexEngine.a: CMakeFiles/VertexEngine.dir/EngineSrc/Camera2D.cpp.obj
libVertexEngine.a: CMakeFiles/VertexEngine.dir/EngineSrc/TextureCache.cpp.obj
libVertexEngine.a: CMakeFiles/VertexEngine.dir/EngineSrc/ResourceManager.cpp.obj
libVertexEngine.a: CMakeFiles/VertexEngine.dir/build.make
libVertexEngine.a: CMakeFiles/VertexEngine.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\User2\Documents\2DEngine\release\CMakeFiles --progress-num=$(CMAKE_PROGRESS_13) "Linking CXX static library libVertexEngine.a"
	$(CMAKE_COMMAND) -P CMakeFiles\VertexEngine.dir\cmake_clean_target.cmake
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\VertexEngine.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/VertexEngine.dir/build: libVertexEngine.a

.PHONY : CMakeFiles/VertexEngine.dir/build

CMakeFiles/VertexEngine.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\VertexEngine.dir\cmake_clean.cmake
.PHONY : CMakeFiles/VertexEngine.dir/clean

CMakeFiles/VertexEngine.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\User2\Documents\2DEngine C:\Users\User2\Documents\2DEngine C:\Users\User2\Documents\2DEngine\release C:\Users\User2\Documents\2DEngine\release C:\Users\User2\Documents\2DEngine\release\CMakeFiles\VertexEngine.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/VertexEngine.dir/depend

