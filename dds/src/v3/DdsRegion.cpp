#include <huaweicloud/dds/v3/DdsRegion.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {

using namespace HuaweiCloud::Sdk::Core::Auth;
using namespace HuaweiCloud::Sdk::Core::Exception;

DdsRegion::DdsRegion()
{}

DdsRegion::~DdsRegion()
{}

std::map<std::string, Region> DdsRegion::regions = DdsRegion::initRegions();

Region DdsRegion::valueOf(std::string regionId) {
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
