cmake_minimum_required(VERSION 3.4.1)

include_directories (

                    src/main/cpp
                    src/main/cpp/Test4CPP

                    )
add_library(
             Test4CPP

             src/main/cpp/Test4CPP/Test.cpp

             )

add_library(        #一般来说这是个默认方法，我们另外添加库
        native-lib  #库的名字

        SHARED      #库的类型

        src/main/cpp/native-lib.cpp
        )


find_library( # Sets the name of the path variable.
              log-lib

              # Specifies the name of the NDK library that
              # you want CMake to locate.
              log )

target_link_libraries(native-lib

                       ${log-lib}

                       Test4CPP

                       )