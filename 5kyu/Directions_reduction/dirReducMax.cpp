class DirReduction
{
public:
    static std::vector<std::string> dirReduc(std::vector<std::string> &arr);
};

std::vector<std::string> DirReduction::dirReduc(std::vector<std::string> &arr)
{
  
  /* Store these info */
  int input_size = arr.size();
  
  /* The vector that will be returned */
  std::vector<std::string> result_dir;
  
  /* These keep track of the position of the last one */   
  std::vector<int> norths;
  std::vector<int> souths;
  std::vector<int> easts;
  std::vector<int> wests;
  
  /* String vector coded to int vector
   * - Null: 0
   * - North: 1
   * - South: -1
   * - East: 2
   * - West: -2
   */
  std::vector<int> coded_dirs(input_size,0);
  
  for ( int i = 0; i < input_size; i++ )
  {
    if ( arr.at(i) == "NORTH")
    {
      if (souths.empty())
          {
            /* Introduce current index in norths vector */
            norths.push_back(i);
            /* Introduce the NORTH in coded_dirs */
            coded_dirs[i] = 1;
          }
          else
          {
            /* The latest south in coded_dirs is removed */
            coded_dirs.at(souths.back()) = 0;
            souths.pop_back();
          }
    }
    else if ( arr.at(i) == "SOUTH")
    {
      if (norths.empty())
          {
            /* Introduce current index in souths vector */
            souths.push_back(i);
            /* Introduce the SOUTH in coded_dirs */
            coded_dirs[i] = -1;
          }
          else
          {
            /* The latest north in coded_dirs is removed */
            coded_dirs[norths.back()] = 0;
            norths.pop_back();
          }
    }
    else if ( arr.at(i) == "EAST")
    {
      if (wests.empty())
          {
            /* Introduce current index in easts vector */
            easts.push_back(i);
            /* Introduce the EAST in coded_dirs */
            coded_dirs[i] = 2;
          }
          else
          {
            /* The latest west in coded_dirs is removed */
            coded_dirs[wests.back()] = 0;
            wests.pop_back();
          }
    }
    else if ( arr.at(i) == "WEST")
    {
      if (easts.empty())
          {
            /* Introduce current index in wests vector */
            wests.push_back(i);
            /* Introduce the WEST in coded_dirs */
            coded_dirs[i] = -2;
          }
          else
          {
            /* The latest east in coded_dirs is removed */
            coded_dirs[easts.back()] = 0;
            easts.pop_back();
          }
    }
    
  }
  
  /* Now we are going to build result_dir based on coded_dirs */
  for ( int i = 0; i < input_size; i++ )
  {
    switch (coded_dirs[i])
    {
        case 0:
          break;
        case 1:
          result_dir.push_back("NORTH");
          break;
        case -1:
          result_dir.push_back("SOUTH");
          break;
        case 2:
          result_dir.push_back("EAST");
          break;
        case -2:
          result_dir.push_back("WEST");
          break;
    }
  }
  
  return result_dir;
  
}