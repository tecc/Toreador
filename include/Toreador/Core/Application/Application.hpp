#ifndef TOREADOR_APPLICATION_HPP
#define TOREADOR_APPLICATION_HPP

#include <GLFW/glfw3.h>
#include <glad/gl.h>
#include <string>

namespace toreador {

    struct ApplicationSettings {
        int startupWindowWidth;
        int startupWindowHeight;

        bool useVSync;
        bool allowResize; /* The Window Hint */
        bool maximizeWindow;
        int refreshRate;
    };

    class Application {
    public:
        Application( std::string name, toreador::ApplicationSettings settings );

    private:
        void setupApplication(); /* Backend setup for applications */

        std::string m_name;
        toreador::ApplicationSettings m_settings;

        GLFWwindow* m_window;
    };

}// namespace toreador


#endif// TOREADOR_APPLICATION_HPP
