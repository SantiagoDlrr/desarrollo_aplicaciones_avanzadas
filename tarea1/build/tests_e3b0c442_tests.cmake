add_test([=[StackTest.BasicOperations]=]  /Users/santobenitez/Documents/desarrollo_aplicaciones_avanzadas/tarea1/build/tests [==[--gtest_filter=StackTest.BasicOperations]==] --gtest_also_run_disabled_tests)
set_tests_properties([=[StackTest.BasicOperations]=]
  PROPERTIES
    
    DEF_SOURCE_LINE [==[/Users/santobenitez/Documents/desarrollo_aplicaciones_avanzadas/tarea1/tests.cc:11]==]
    WORKING_DIRECTORY [==[/Users/santobenitez/Documents/desarrollo_aplicaciones_avanzadas/tarea1/build]==]
    SKIP_REGULAR_EXPRESSION [==[\[  SKIPPED \]]==]
    
)
add_test([=[QueueTest.BasicOperations]=]  /Users/santobenitez/Documents/desarrollo_aplicaciones_avanzadas/tarea1/build/tests [==[--gtest_filter=QueueTest.BasicOperations]==] --gtest_also_run_disabled_tests)
set_tests_properties([=[QueueTest.BasicOperations]=]
  PROPERTIES
    
    DEF_SOURCE_LINE [==[/Users/santobenitez/Documents/desarrollo_aplicaciones_avanzadas/tarea1/tests.cc:34]==]
    WORKING_DIRECTORY [==[/Users/santobenitez/Documents/desarrollo_aplicaciones_avanzadas/tarea1/build]==]
    SKIP_REGULAR_EXPRESSION [==[\[  SKIPPED \]]==]
    
)
add_test([=[UnorderedMap.BasicOperations]=]  /Users/santobenitez/Documents/desarrollo_aplicaciones_avanzadas/tarea1/build/tests [==[--gtest_filter=UnorderedMap.BasicOperations]==] --gtest_also_run_disabled_tests)
set_tests_properties([=[UnorderedMap.BasicOperations]=]
  PROPERTIES
    
    DEF_SOURCE_LINE [==[/Users/santobenitez/Documents/desarrollo_aplicaciones_avanzadas/tarea1/tests.cc:57]==]
    WORKING_DIRECTORY [==[/Users/santobenitez/Documents/desarrollo_aplicaciones_avanzadas/tarea1/build]==]
    SKIP_REGULAR_EXPRESSION [==[\[  SKIPPED \]]==]
    
)
set(tests_TESTS [==[StackTest.BasicOperations]==] [==[QueueTest.BasicOperations]==] [==[UnorderedMap.BasicOperations]==])
