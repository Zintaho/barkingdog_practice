cmake_minimum_required(VERSION 3.27)
set(CMAKE_CXX_STANDARD 17)
project(barkingdog)

# 파일 목록 가져오기
file(GLOB SOURCE_FILES "${CMAKE_SOURCE_DIR}/**/*.cpp")

# 최신 파일 찾기 (Linux/macOS)
execute_process(
    COMMAND bash -c "ls -t ${CMAKE_SOURCE_DIR}/**/*.cpp | head -n 1"
    OUTPUT_VARIABLE LATEST_FILE
    OUTPUT_STRIP_TRAILING_WHITESPACE
)

message(STATUS "Latest modified file: ${LATEST_FILE}")
add_executable(test ${LATEST_FILE})