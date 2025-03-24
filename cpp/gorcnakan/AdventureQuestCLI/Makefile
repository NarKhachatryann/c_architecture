# Կոմպիլյատոր և դրոշներ
CXX = g++
CXXFLAGS = -std=c++17 -Iinclude -Isrc -g -Wall
LDFLAGS = -lgtest -lgtest_main -pthread

# Թիրախներ
TARGET_MAIN = adventure_quest
TARGET_TEST = test_runner

# Աղբյուր ֆայլեր
MAIN_SOURCES = src/main.cpp src/Character.cpp src/Hero.cpp src/Monster.cpp src/NPC.cpp src/Utility.cpp
TEST_SOURCES = test/TestCharacter.cpp test/TestHero.cpp test/TestMonster.cpp src/Character.cpp src/Hero.cpp src/Monster.cpp

# Հիմնական խաղի կառուցման համար
all: $(TARGET_MAIN)

$(TARGET_MAIN): $(MAIN_SOURCES)
	$(CXX)	$(CXXFLAGS)	$(MAIN_SOURCES)	-o	$(TARGET_MAIN)

# Թեստերի կառուցում և գործարկում
test: $(TARGET_TEST)
	./$(TARGET_TEST)

$(TARGET_TEST): $(TEST_SOURCES)
	$(CXX)	$(CXXFLAGS)	$(TEST_SOURCES)	-o	$(TARGET_TEST)	$(LDFLAGS)

# Մաքրել կառուցված ֆայլերը
clean:
	rm	-f	$(TARGET_MAIN)	$(TARGET_TEST)