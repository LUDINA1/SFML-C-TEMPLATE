#include <SFML/Graphics.hpp>

class GameEngine {
public:
    GameEngine(int screenWidth, int screenHeight, const std::string& title)
        : m_screenWidth(screenWidth), m_screenHeight(screenHeight), m_title(title) {}

    void run() {
        sf::RenderWindow window(sf::VideoMode(m_screenWidth, m_screenHeight), m_title);

        while (window.isOpen()) {
            sf::Event event;
            while (window.pollEvent(event)) {
                if (event.type == sf::Event::Closed) {
                    window.close();
                }
            }

            window.clear(sf::Color::Black);
            // Здесь можно добавить код для обновления игровой логики и отрисовки объектов
            window.display();
        }
    }

private:
    int m_screenWidth;
    int m_screenHeight;
    std::string m_title;
};

int main() {
    GameEngine game(800, 600, "My Game");
    game.run();

    return 0;
}
