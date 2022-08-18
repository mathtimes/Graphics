EXE = main
SOURCES += imgui.cpp imgui_demo.cpp imgui_draw.cpp imgui_tables.cpp imgui_widgets.cpp imgui_impl_glfw.cpp imgui_impl_opengl3.cpp
OBJS = $(addprefix ../, $(addsuffix .o, $(basename $(SOURCES))))
OBJS += $(addsuffix .o, $(EXE))

CXXFLAGS = `pkg-config --cflags glfw3`
CXXFLAGS += -I ..


LIBFLAGS += -lgdi32 -lopengl32 -limm32 `pkg-config --libs glfw3`
LIBFLAGS += -s # -mwindows

%.o:%.cpp
	$(CXX) $(CXXFLAGS) -c -o $@ $<

all: $(EXE)

$(EXE): $(OBJS)
	$(CXX) -o $@ $^ $(LIBFLAGS)
