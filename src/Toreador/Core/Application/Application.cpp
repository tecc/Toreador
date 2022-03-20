#include <Toreador/Core/Application/Application.hpp>
toreador::Application::Application( std::string name, toreador::ApplicationSettings settings )
{
    this->m_name = std::move( name );
    this->m_settings = settings;

    this->setupApplication(); /* Just call the setup */
}

void toreador::Application::setupApplication()
{
    if ( !glfwInit() ) {
        std::printf( "Failed to initialize GLFW" );
    }


    glfwWindowHint( GLFW_VERSION_MAJOR, 4 );
    glfwWindowHint( GLFW_VERSION_MINOR, 0 );

    glfwWindowHint( GLFW_REFRESH_RATE, this->m_settings.refreshRate );
    glfwWindowHint( GLFW_RESIZABLE, this->m_settings.allowResize ? GLFW_TRUE : GLFW_FALSE );
    glfwWindowHint( GLFW_MAXIMIZED, this->m_settings.maximizeWindow ? GLFW_TRUE : GLFW_FALSE );

    GLFWwindow* glfwWindow = glfwCreateWindow( this->m_settings.startupWindowWidth, this->m_settings.startupWindowHeight,
                                               this->m_name.c_str(), NULL, NULL );

    if ( !glfwWindow ) {
        std::printf( "Failed to create GLFW window" );
        glfwTerminate();
        /* TODO(Chloe): Stop application from running */
    }

    glfwMakeContextCurrent( glfwWindow );
    if ( !gladLoadGL( glfwGetProcAddress ) ) {
        std::printf( "Failed to initialize GLAD" );
        glfwTerminate();
        /* TODO(Chloe): Stop application from running */
    }

    glViewport( 0, 0, this->m_settings.startupWindowWidth, this->m_settings.startupWindowHeight );

    this->m_window = glfwWindow;
}
