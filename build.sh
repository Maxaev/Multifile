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

set arr[0].file=run_refactoring_and_print.sh
set arr[1].file=run_base_theory_p1.sh
set arr[2].file=run_base_theory_tasks_p1.sh
set arr[3].file=run_obuchaika.sh
set arr[4].file=run_shell_sort.sh
set arr[5].file=run_insertion_sort.sh

set arr[0].folder=refactoring_and_print
set arr[1].folder=base_theory_p1
set arr[2].folder=base_theory_tasks_p1
set arr[3].folder=obuchaika
set arr[4].folder=Shell_sort
set arr[5].folder=Insertion_sort

for i in {0..6}; do
     cp "..$SOURCE_FOLDER\!arr[$i].folder!\!arr[$i].file! .\!arr[$i].folder! "
done

cp "../run_tests.sh" . 
