set(CMAKE_CXX_STANDARD 17)
set(SOURCES
	test_bubble.cpp
)
add_executable(test_bubble ${SOURCES})
target_link_libraries(test_bubble
	qtest_main
	qmock_main
	bubble_sort_lib
)

add_test(test_bubble test_bubble)
