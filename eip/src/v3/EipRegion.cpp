#include <huaweicloud/eip/v3/EipRegion.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Eip {
namespace V3 {

using namespace HuaweiCloud::Sdk::Core::Auth;
using namespace HuaweiCloud::Sdk::Core::Exception;

EipRegion::EipRegion()
{}

EipRegion::~EipRegion()
{}

std::map<std::string, Region> EipRegion::regions = EipRegion::initRegions();

Region EipRegion::valueOf(std::string regionId) {
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
