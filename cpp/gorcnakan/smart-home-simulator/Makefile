CXX := g++
CXXFLAGS := -std=c++20 -Wall -Wextra -Iinclude

SRC_DIR := src
INC_DIR := include
BUILD_DIR := build
TEST_DIR := tests

include_directories("${PROJECT_SOURCE_DIR}/include")

SRCS := $(wildcard $(SRC_DIR)/**/*.cpp $(SRC_DIR)/*.cpp)
OBJS := $(patsubst $(SRC_DIR)/%.cpp,$(BUILD_DIR)/%.o,$(SRCS))
TEST_SRCS := $(wildcard $(TEST_DIR)/*.cpp)
TEST_OBJS := $(patsubst $(TEST_DIR)/%.cpp,$(BUILD_DIR)/%.o,$(TEST_SRCS))
EXEC := smart-home-simulator
TEST_EXEC := smart-home-tests

all: $(EXEC)

	@echo "Build complete."
$(EXEC): $(OBJS)
    $(CXX) $(CXXFLAGS) -o $@ $^

$(BUILD_DIR)/%.o: $(SRC_DIR)/%.cpp
    mkdir -p $(dir $@)
    $(CXX) $(CXXFLAGS) -c $< -o $@

tests: $(TEST_OBJS) $(OBJS)
    $(CXX) $(CXXFLAGS) -o $(TEST_EXEC) $^

$(BUILD_DIR)/%.o: $(TEST_DIR)/%.cpp
    mkdir -p $(dir $@)
    $(CXX) $(CXXFLAGS) -c $< -o $@

test: tests
    ./$(TEST_EXEC)

clean:
    rm -rf $(BUILD_DIR) $(EXEC) $(TEST_EXEC)

.PHONY: all clean test