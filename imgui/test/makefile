EXE = main
SOURCES += imgui.cpp imgui_demo.cpp imgui_draw.cpp imgui_impl_sdl.cpp imgui_impl_sdlrenderer.cpp imgui_tables.cpp imgui_widgets.cpp
OBJS = $(addprefix ../, $(addsuffix .o, $(basename $(SOURCES))))
OBJS += $(addsuffix .o, $(EXE))

CXXFLAGS = `pkg-config --cflags sdl2`
CXXFLAGS += -I .. -s


LIBFLAGS += -lgdi32 -lopengl32 -limm32 `pkg-config --libs sdl2`

%.o:%.cpp
	$(CXX) $(CXXFLAGS) -c -o $@ $<

all: $(EXE)

$(EXE): $(OBJS)
	$(CXX) -o $@ $^ $(LIBFLAGS)