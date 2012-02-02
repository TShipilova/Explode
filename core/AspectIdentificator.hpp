#ifndef ASPECTIDENTIFICATOR_HPP
#define ASPECTIDENTIFICATOR_HPP

//* TODO: Check if it is really Aspect.
class AspectIdentificator
{
  static unsigned int current_id;
public:
  template <typename T>
  static unsigned int value() 
  {
    static unsigned int target_id = current_id;
    current_id ++;
    return target_id;
  }
};
unsigned int AspectIdentificator::current_id = 41;
#define ASPECT_IDENTIFICATOR(classname) virtual unsigned int aspectIdentificator() { return AspectIdentificator::value<classname>();}

#endif
