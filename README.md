# build debug and release using CMake
mkdir -p build/debug build/release
cmake -DCMAKE_BUILD_TYPE:STRING=Debug -Bbuild/debug
cmake -DCMAKE_BUILD_TYPE:STRING=Release -Bbuild/release
cd build/debug/ && make
cd build/release/ && make