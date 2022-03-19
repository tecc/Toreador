#ifndef TOREADOR_APPLICATION_HPP
#define TOREADOR_APPLICATION_HPP

#include <glad/gl.h>
#include <GLFW/glfw3.h>
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

        /* TODO(Chloe): Window wrapper */
    };

}// namespace toreador


#endif// TOREADOR_APPLICATION_HPP
