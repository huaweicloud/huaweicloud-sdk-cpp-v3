#include <huaweicloud/lts/v2/LtsRegion.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {

using namespace HuaweiCloud::Sdk::Core::Auth;
using namespace HuaweiCloud::Sdk::Core::Exception;

LtsRegion::LtsRegion()
{}

LtsRegion::~LtsRegion()
{}

std::map<std::string, Region> LtsRegion::regions = LtsRegion::initRegions();

Region LtsRegion::valueOf(std::string regionId) {
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
