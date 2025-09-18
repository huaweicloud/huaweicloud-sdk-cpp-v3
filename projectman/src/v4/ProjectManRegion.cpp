#include <huaweicloud/projectman/v4/ProjectManRegion.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {

using namespace HuaweiCloud::Sdk::Core::Auth;
using namespace HuaweiCloud::Sdk::Core::Exception;

ProjectManRegion::ProjectManRegion()
{}

ProjectManRegion::~ProjectManRegion()
{}

std::map<std::string, Region> ProjectManRegion::regions = ProjectManRegion::initRegions();

Region ProjectManRegion::valueOf(std::string regionId) {
    if (regionId.empty()) {
        throw SdkException("the regionId can not be null!");
    }
    auto iter = regions.find(regionId);
    if (iter != regions.end()) {
        return iter->second;
    }
    throw SdkException("the regionId is supported for the service!");
}

}
}
}
}
