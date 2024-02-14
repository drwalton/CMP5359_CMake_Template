# CMake Template for CMP5359 Coursework

This is an optional template for using CMake to compile your coursework code for CMP5359 computer graphics.

It compiles a common library, and then compiles two executables, based on code in the rasteriser and raytracer directories, linking in the common library.

You can add any code you share between the rasteriser and raytracer to `common/`.

If you structure your code in this way please **ensure you also include the `common/` directory as part of your submission**.

Add additional source files you would like to compile to the CMakeLists.txt within each directory.

Please contact me for any assistance you need with this, or with adding additional library code if you'd like to do so.

## Configuring, Generating

As always with CMake I recommend putting your build directory in a separate folder called `build/` within this repository. This will be ignored by the `.gitignore` included here, avoiding adding any large binary files and messing up your Git repository.
