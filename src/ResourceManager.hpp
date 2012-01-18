#ifndef RESOURCEMANAGER_HPP
#define RESOURCEMANAGER_HPP
#include <boost/shared_ptr.hpp>
#include <string>

class SharedViewResource;
class ResourceManager
{
public:
  static ResourceManager* instance();
  boost::shared_ptr<SharedViewResource> getResource(const std::string &name);
};

#endif
