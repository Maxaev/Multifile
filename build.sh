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
cd $BUILD_FOLDER || exit

cmake -G $BUILD_TYPE ../$SOURCE_FOLDER
cmake --build .
arr=("refactoring_and_print" "base_theory_p1" "base_theory_tasks_p1" "obuchaika")

files=("run_refactoring_and_print.sh" "run_base_theory_p1.sh" "run_base_theory_tasks_p1.sh" "run_obuchaika.sh")

for i in {0..3}; do
     cp "../$SOURCE_FOLDER/${arr[$i]}/${files[$i]}" "./${arr[$i]}"
done

cp "../run_tests.sh" . 
