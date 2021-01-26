class Kata
{
public:
    std::vector<std::string> towerBuilder(int nFloors)
    {
      int x = 1;
      std::string space = " ";
      std::string star = "*";
      int numStars = 1;
      std::vector<std::string> myVec;
      for (int i = 0; i < nFloors; ++i) {
        std::string floor = "";
        int numSpaces = nFloors - x;
        for (int k = 0; k < numSpaces; ++k) {
          floor += space;
        }
        for (int k = 0; k < numStars; ++k) {
          floor += star;
        }
        for (int k = 0; k < numSpaces; ++k) {
          floor += space;
        }
        x++;
        numStars += 2;
        myVec.push_back(floor);
        floor = "";
      }
      return myVec;
    }
};
