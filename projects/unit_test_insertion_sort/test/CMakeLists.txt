set(SOURCES
	test_insertion.cpp

add_exrcutable(test_insertion ${SOURCES})
target_link_libraries(test_insertion
	qtest_main
	qmock_main
	insertion_sort_lib
)
add_test(test_insertion)
