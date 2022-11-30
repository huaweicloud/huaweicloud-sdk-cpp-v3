#include <huaweicloud/vod/v1/VodRegion.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Vod {
namespace V1 {

using namespace HuaweiCloud::Sdk::Core::Auth;
using namespace HuaweiCloud::Sdk::Core::Exception;

VodRegion::VodRegion()
{}

VodRegion::~VodRegion()
{}

std::map<std::string, Region> VodRegion::regions = VodRegion::initRegions();

Region VodRegion::valueOf(std::string regionId) {
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
