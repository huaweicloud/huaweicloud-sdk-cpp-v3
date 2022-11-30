#include <huaweicloud/ecs/v2/EcsRegion.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {

using namespace HuaweiCloud::Sdk::Core::Auth;
using namespace HuaweiCloud::Sdk::Core::Exception;

EcsRegion::EcsRegion()
{}

EcsRegion::~EcsRegion()
{}

std::map<std::string, Region> EcsRegion::regions = EcsRegion::initRegions();

Region EcsRegion::valueOf(std::string regionId) {
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
