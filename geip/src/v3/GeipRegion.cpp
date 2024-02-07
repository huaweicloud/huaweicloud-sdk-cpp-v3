#include <huaweicloud/geip/v3/GeipRegion.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Geip {
namespace V3 {

using namespace HuaweiCloud::Sdk::Core::Auth;
using namespace HuaweiCloud::Sdk::Core::Exception;

GeipRegion::GeipRegion()
{}

GeipRegion::~GeipRegion()
{}

std::map<std::string, Region> GeipRegion::regions = GeipRegion::initRegions();

Region GeipRegion::valueOf(std::string regionId) {
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
