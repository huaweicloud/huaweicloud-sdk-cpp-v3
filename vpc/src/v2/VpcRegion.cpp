#include <huaweicloud/vpc/v2/VpcRegion.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {

using namespace HuaweiCloud::Sdk::Core::Auth;
using namespace HuaweiCloud::Sdk::Core::Exception;

VpcRegion::VpcRegion()
{}

VpcRegion::~VpcRegion()
{}

std::map<std::string, Region> VpcRegion::regions = VpcRegion::initRegions();

Region VpcRegion::valueOf(std::string regionId) {
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
