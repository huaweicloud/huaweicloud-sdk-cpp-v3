#include <huaweicloud/identitycenter/v1/IdentityCenterRegion.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenter {
namespace V1 {

using namespace HuaweiCloud::Sdk::Core::Auth;
using namespace HuaweiCloud::Sdk::Core::Exception;

IdentityCenterRegion::IdentityCenterRegion()
{}

IdentityCenterRegion::~IdentityCenterRegion()
{}

std::map<std::string, Region> IdentityCenterRegion::regions = IdentityCenterRegion::initRegions();

Region IdentityCenterRegion::valueOf(std::string regionId) {
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
