class Game {
public:
    Game();
    void processInput();
    void update();
    void render();
    bool isRunning() const;
private:
    bool running;
};