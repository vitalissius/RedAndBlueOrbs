namespace red_and_blue_orbs 
{
  const int textureValues[20][25] =
  {
    { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 2, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0 },
    { 0, 0, 1, 1, 3, 1, 1, 1, 3, 1, 1, 1, 1, 1, 1, 1, 2, 1, 1, 1, 1, 1, 1, 0, 0 },
    { 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0 },
    { 0, 0, 2, 0, 0, 0, 2, 0, 0, 0, 2, 0, 0, 0, 3, 0, 0, 0, 2, 0, 0, 0, 2, 0, 0 },
    { 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0 },
    { 0, 0, 1, 1, 3, 1, 1, 1, 2, 1, 1, 0, 0, 0, 1, 1, 2, 1, 1, 1, 3, 1, 1, 0, 0 },
    { 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0 },
    { 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 3, 0, 0 },
    { 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0 },
    { 0, 0, 1, 1, 2, 1, 1, 1, 1, 1, 1, 0, 0, 0, 1, 1, 1, 1, 1, 1, 2, 1, 1, 0, 0 },
    { 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0 },
    { 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0 },
    { 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0 },
    { 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0 },
    { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
  };

  const int freeToMoveValues[20][25] =
  {
    { 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0 },
    { 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0 },
    { 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x6, 0xA, 0xA, 0xA, 0xA, 0xA, 0xA, 0xA, 0xA, 0xA, 0xA, 0xA, 0xC, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0 },
    { 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x5, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x5, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0 },
    { 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x5, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x5, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0 },
    { 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x5, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x5, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0 },
    { 0x0, 0x0, 0x6, 0xA, 0xA, 0xA, 0xF, 0xA, 0xA, 0xA, 0xE, 0xA, 0xA, 0xA, 0xE, 0xA, 0xA, 0xA, 0xF, 0xA, 0xA, 0xA, 0xC, 0x0, 0x0 },
    { 0x0, 0x0, 0x5, 0x0, 0x0, 0x0, 0x5, 0x0, 0x0, 0x0, 0x5, 0x0, 0x0, 0x0, 0x5, 0x0, 0x0, 0x0, 0x5, 0x0, 0x0, 0x0, 0x5, 0x0, 0x0 },
    { 0x0, 0x0, 0x5, 0x0, 0x0, 0x0, 0x5, 0x0, 0x0, 0x0, 0x5, 0x0, 0x0, 0x0, 0x5, 0x0, 0x0, 0x0, 0x5, 0x0, 0x0, 0x0, 0x5, 0x0, 0x0 },
    { 0x0, 0x0, 0x5, 0x0, 0x0, 0x0, 0x5, 0x0, 0x0, 0x0, 0x5, 0x0, 0x0, 0x0, 0x5, 0x0, 0x0, 0x0, 0x5, 0x0, 0x0, 0x0, 0x5, 0x0, 0x0 },
    { 0x0, 0x0, 0x7, 0xA, 0xA, 0xA, 0xF, 0xA, 0xA, 0xA, 0xD, 0x0, 0x0, 0x0, 0x7, 0xA, 0xA, 0xA, 0xF, 0xA, 0xA, 0xA, 0xD, 0x0, 0x0 },
    { 0x0, 0x0, 0x5, 0x0, 0x0, 0x0, 0x5, 0x0, 0x0, 0x0, 0x5, 0x0, 0x0, 0x0, 0x5, 0x0, 0x0, 0x0, 0x5, 0x0, 0x0, 0x0, 0x5, 0x0, 0x0 },
    { 0x0, 0x0, 0x5, 0x0, 0x0, 0x0, 0x5, 0x0, 0x0, 0x0, 0x5, 0x0, 0x0, 0x0, 0x5, 0x0, 0x0, 0x0, 0x5, 0x0, 0x0, 0x0, 0x5, 0x0, 0x0 },
    { 0x0, 0x0, 0x5, 0x0, 0x0, 0x0, 0x5, 0x0, 0x0, 0x0, 0x5, 0x0, 0x0, 0x0, 0x5, 0x0, 0x0, 0x0, 0x5, 0x0, 0x0, 0x0, 0x5, 0x0, 0x0 },
    { 0x0, 0x0, 0x7, 0xA, 0xA, 0xA, 0xB, 0xA, 0xA, 0xA, 0x9, 0x0, 0x0, 0x0, 0x3, 0xA, 0xA, 0xA, 0xB, 0xA, 0xA, 0xA, 0xD, 0x0, 0x0 },
    { 0x0, 0x0, 0x5, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x5, 0x0, 0x0 },
    { 0x0, 0x0, 0x5, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x5, 0x0, 0x0 },
    { 0x0, 0x0, 0x1, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x1, 0x0, 0x0 },
    { 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0 },
    { 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0 }
  };
}



#include <iostream>
#include <conio.h>
#include <Windows.h>



namespace red_and_blue_orbs
{
  class Location {
  public:
    enum Texture 
    { 
      Brick   = 0, 
      Slab    = 1, 
      RedOrb  = 2, 
      BlueOrb = 3, 
      Enter   = 4, 
      Exit    = 5 
    };
    enum FreeToMove 
    { 
      North   = 1, 
      East    = 2, 
      South   = 4, 
      West    = 8 
    };

  public:
    Location(Texture texture, FreeToMove freeToMove) : texture_(texture), freeToMove_(freeToMove) {}
    const Texture getTexture() const { return texture_; }
    const FreeToMove getFreeToMove() const { return freeToMove_; }
    void setTexture(Texture texture) { texture_ = texture; }

  private:
    Texture texture_;
    FreeToMove freeToMove_;
  };
}

namespace red_and_blue_orbs
{
  class Field {
  public:
    Field();
    ~Field();
    
    const Location::Texture getLocationTexture(int x, int y) const 
    { 
      return locations_[y][x]->getTexture(); 
    }
    const Location::FreeToMove getLocationFreeToMove(int x, int y) const 
    { 
      return locations_[y][x]->getFreeToMove(); 
    }
    void setLocationTexture(int x, int y, Location::Texture texture) 
    { 
      locations_[y][x]->setTexture(texture); 
    }

    static const int getRows() { return rows; }
    static const int getColumns() { return columns; }

    Location* getLocationPtr(int x, int y) const { return locations_[y][x]; }
  private:
    static const int rows = 20;
    static const int columns = 25;
    Location*** locations_;
  };

  Field::Field() : locations_(new Location**[rows])
  {
    for (int y = 0; y < rows; ++y) locations_[y] = new Location*[columns];

    for (int y = 0; y < rows; ++y)
    {
      for (int x = 0; x < columns; ++x)
      {
        locations_[y][x] = new Location
        (
          Location::Texture(textureValues[y][x]), Location::FreeToMove(freeToMoveValues[y][x])
        );
      }
    }
  }
  Field::~Field()
  {
    for (int y = 0; y < rows; ++y)
    {
      for (int x = 0; x < columns; ++x)
      {
        delete[] locations_[y][x];
      }
    }

    for (int y = 0; y < rows; ++y) delete[] locations_[y];

    delete locations_;
  }
}

namespace red_and_blue_orbs
{
  class AbstractController {
  public:
    AbstractController()
      : userLocationAxisX(2),
      userLocationAxisY(17),
      userPrevLocationAxisX(0),
      userPrevLocationAxisY(0),
      field_(new Field),
      userLocation_(field_->getLocationPtr(userLocationAxisX, userLocationAxisY))
    {
      field_->setLocationTexture(userLocationAxisX, userLocationAxisY, Location::Texture::BlueOrb);
    }
    virtual ~AbstractController() { delete field_; }

    const int getUserLocationAxisX() const { return userLocationAxisX; }
    const int getUserLocationAxisY() const { return userLocationAxisY; }
    const int getUserPrevLocationAxisX() const { return userPrevLocationAxisX; }
    const int getUserPrevLocationAxisY() const { return userPrevLocationAxisY; }

    const Location::Texture getFieldLocationTexture(const int x, const int y) const
    {
      return field_->getLocationTexture(x, y);
    }

    virtual bool moveTo(int shiftByX, int shiftByY, Location::FreeToMove direction) = 0;

    bool moveToNorth()
    {
      return moveTo(0, -1, Location::North);
    }
    bool moveToEast()
    {
      return moveTo(+1, 0, Location::East);
    }
    bool moveToSouth()
    {
      return moveTo(0, +1, Location::South);
    }
    bool moveToWest()
    {
      return moveTo(-1, 0, Location::West);
    }

  protected:
    Location* getFieldLocationPtr(int x, int y) const { return field_->getLocationPtr(x, y); }
    void updateUserLocationAxes(int x, int y) { userLocationAxisX = x; userLocationAxisY = y; }

  protected:
    int userLocationAxisX;
    int userLocationAxisY;

    int userPrevLocationAxisX;
    int userPrevLocationAxisY;

    const int winLocatiomAxisX = 22;
    const int winLocatiomAxisY = 17;

    Field* field_;
    Location* userLocation_;
  };
}


namespace red_and_blue_orbs
{
  class WindowsConsoleController : public AbstractController {
  public:
    bool moveTo(int shiftByX, int shiftByY, Location::FreeToMove direction);
  };

  bool WindowsConsoleController::moveTo(int shiftByX, int shiftByY, Location::FreeToMove direction)
  {
    if (field_->getLocationFreeToMove(userLocationAxisX, userLocationAxisY) & direction)
    {
      userPrevLocationAxisX = userLocationAxisX;
      userPrevLocationAxisY = userLocationAxisY;

      int nextX = userLocationAxisX + shiftByX;
      int nextY = userLocationAxisY + shiftByY;

      Location* toMoveLocation = getFieldLocationPtr(nextX, nextY);
      if (toMoveLocation->getTexture() == Location::Slab)
      {
        Location::Texture tmpTexture = userLocation_->getTexture();
        userLocation_->setTexture(toMoveLocation->getTexture());
        toMoveLocation->setTexture(tmpTexture);

        userLocation_ = getFieldLocationPtr(nextX, nextY);
        updateUserLocationAxes(nextX, nextY);
      }
      else if (toMoveLocation->getTexture() != userLocation_->getTexture())
      {
        Location::Texture throwTexture = getFieldLocationTexture(nextX, nextY);
        nextX += shiftByX;
        nextY += shiftByY;

        toMoveLocation = getFieldLocationPtr(nextX, nextY);

        userLocation_->setTexture(toMoveLocation->getTexture());
        toMoveLocation->setTexture(throwTexture);

        userLocation_ = getFieldLocationPtr(nextX, nextY);
        updateUserLocationAxes(nextX, nextY);
      }
    }
    return (userLocationAxisX == winLocatiomAxisX) && (userLocationAxisY == winLocatiomAxisY); // is win?
  }
}



namespace red_and_blue_orbs
{
  class AbstractView {

  public:
    AbstractView() { abstractViewInitialize(); }
    virtual ~AbstractView() { delete controller_; }

    const Location::Texture getTexture(const int x, const int y) const { return controller_->getFieldLocationTexture(x, y); }

  protected:
    virtual void printCongratulation() const = 0;
    virtual bool pushButton(unsigned int code) = 0;
    virtual void printField() const = 0;
    virtual void printUpdatedField() const = 0;

  public:
    virtual bool startGame() = 0;

  protected:
    void abstractViewInitialize()
    {
      controller_ = new WindowsConsoleController;
      winFlag_ = false;
      exitFlag_ = false;
      restartFlag_ = false;
    }

  protected:
    WindowsConsoleController* controller_;
    bool winFlag_;
    mutable bool exitFlag_;
    mutable bool restartFlag_;
  };
}



namespace red_and_blue_orbs
{
  class WindowsConsoleView : public AbstractView {
  public:
    WindowsConsoleView() : AbstractView()
    {
      setConsoleProperty();
    }
    bool startGame();

    private:
      void printCongratulation() const;
      bool pushButton(unsigned int code);
      void printField() const;
      void printUpdatedField() const { printField(); }

      void setConsoleProperty();

      void reinitialize()
      {
        delete controller_;
        abstractViewInitialize();
      }

    private:
      HANDLE hConsole_;
  };

  void WindowsConsoleView::printCongratulation() const
  {
    SetConsoleTextAttribute(hConsole_, 28);

    static char congrat[][20] =
    {
      "                   ",
      "     !You Win!     ",
      "                   ",
      "    [ ] Restart    ",
      "    [ ] Exit       ",
      "                   "
    };
    for (int i = 0; i < 6; ++i)
    {
      SetConsoleCursorPosition(hConsole_, { 4, i + 8 });
      std::cout << congrat[i];
    }

    unsigned int character = 0;
    SetConsoleCursorPosition(hConsole_, { 9, 11 });
    std::cout << 'x';
    SetConsoleCursorPosition(hConsole_, { 0, 20 });

    static char symbs[] = { ' ', 'x' };
    int dy = 0;

    while (_getch() != 13)
    {
      character = _getch();
      if (character == 80 || character == 72)
      {
        SetConsoleCursorPosition(hConsole_, { 9, 11 });
        std::cout << symbs[dy++];
        SetConsoleCursorPosition(hConsole_, { 9, 12 });
        std::cout << symbs[dy %= 2];
        SetConsoleCursorPosition(hConsole_, { 0, 20 });
      }
    }
    if (dy == 1)
      exitFlag_ = true;
    else
      restartFlag_ = true;
  }

  bool WindowsConsoleView::pushButton(unsigned int code)
  {
    switch (code)
    {
    case 72:
      return controller_->moveToNorth();
      break;

    case 77:
      return controller_->moveToEast();
      break;

    case 80:
      return controller_->moveToSouth();
      break;

    case 75:
      return controller_->moveToWest();
      break;

    default:
      return false;
    }
  }

  void WindowsConsoleView::printField() const
  {
    for (int y = 0; y < Field::getRows(); ++y)
    {
      SetConsoleCursorPosition(hConsole_, { 1, y + 1 });
      for (int x = 0; x < Field::getColumns(); ++x)
      {
        switch (controller_->getFieldLocationTexture(x, y))
        {
        case 0:
          SetConsoleTextAttribute(hConsole_, 248);
          std::cout << static_cast<unsigned char>(177);
          break;
        case 1:
          SetConsoleTextAttribute(hConsole_, 242);
          std::cout << static_cast<unsigned char>(177);
          break;
        case 2:
          SetConsoleTextAttribute(hConsole_, 124);
          std::cout << static_cast<unsigned char>(1);
          break;
        case 3:
          SetConsoleTextAttribute(hConsole_, 121);
          std::cout << static_cast<unsigned char>(1);
          break;
        case 4:
          SetConsoleTextAttribute(hConsole_, 242);
          std::cout << static_cast<unsigned char>(24);
          break;
        case 5:
          SetConsoleTextAttribute(hConsole_, 252);
          std::cout << static_cast<unsigned char>(25);
          break;
        }
      }
      std::cout << std::endl;
    }
    if (winFlag_) this->printCongratulation();
  }

  void WindowsConsoleView::setConsoleProperty()
  {
    SetConsoleTitleA("Red and Blue Orbs");
    hConsole_ = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD crd = { 27, 22 };
    SMALL_RECT src = { 0, 0, crd.X - 1, crd.Y - 1 };
    SetConsoleWindowInfo(hConsole_, true, &src);
    SetConsoleScreenBufferSize(hConsole_, crd);
  }

  bool WindowsConsoleView::startGame()
  {
    printField();
    while (_getch() != 27)
    {
      winFlag_ = pushButton(_getch());
      printUpdatedField();
      if (restartFlag_)
      {
        reinitialize();
        return true;
      }
      else if (exitFlag_) return false;
    }
    return false;
  }
}



int main(int argc, char* ergc[])
{
  red_and_blue_orbs::WindowsConsoleView view;
  while (view.startGame());
  return 0;
}
