#include <vector>
#include "../Camera/camera.cpp"

class Engine 
{
   Camera camera;
  // std::vector<Object> Objects;

public:
    Engine();
    void init();
    void run();
    
    template<typename T>
    void draw(T object);

    void destroy();
};