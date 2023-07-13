#include <huaweicloud/live/v2/LiveRegion.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V2 {

using namespace HuaweiCloud::Sdk::Core::Auth;
using namespace HuaweiCloud::Sdk::Core::Exception;

LiveRegion::LiveRegion()
{}

LiveRegion::~LiveRegion()
{}

std::map<std::string, Region> LiveRegion::regions = LiveRegion::initRegions();

Region LiveRegion::valueOf(std::string regionId) {
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
