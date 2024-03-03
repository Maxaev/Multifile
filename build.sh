stty -echo

# Вид сборки / суффикс в названии каталога сборки
#
# "Ninja" / "ninja"
# "Visual Studio 17 2022" / "visual_studio"
#
BUILD_TYPE=Ninja
BUILD_SUFFIX=ninja

BUILD_FOLDER=build_$BUILD_SUFFIX
SOURCE_FOLDER=projects

if [ ! -d $BUILD_FOLDER ]; then
    mkdir $BUILD_FOLDER
fi
cd $BUILD_FOLDER

cmake -G $BUILD_TYPE ../$SOURCE_FOLDER
cmake --build .

cp ../$SOURCE_FOLDER/bubble_sort/run_bubble_sort.sh ./bubble_sort
cp ../$SOURCE_FOLDER/bubble_sort_mf/run_bubble_sort_mf.sh ./bubble_sort_mf
