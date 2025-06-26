#include <huaweicloud/rgc/v1/RgcRegion.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Rgc {
namespace V1 {

using namespace HuaweiCloud::Sdk::Core::Auth;
using namespace HuaweiCloud::Sdk::Core::Exception;

RgcRegion::RgcRegion()
{}

RgcRegion::~RgcRegion()
{}

std::map<std::string, Region> RgcRegion::regions = RgcRegion::initRegions();

Region RgcRegion::valueOf(std::string regionId) {
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
