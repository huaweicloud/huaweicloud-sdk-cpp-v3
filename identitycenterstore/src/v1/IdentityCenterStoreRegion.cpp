#include <huaweicloud/identitycenterstore/v1/IdentityCenterStoreRegion.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenterstore {
namespace V1 {

using namespace HuaweiCloud::Sdk::Core::Auth;
using namespace HuaweiCloud::Sdk::Core::Exception;

IdentityCenterStoreRegion::IdentityCenterStoreRegion()
{}

IdentityCenterStoreRegion::~IdentityCenterStoreRegion()
{}

std::map<std::string, Region> IdentityCenterStoreRegion::regions = IdentityCenterStoreRegion::initRegions();

Region IdentityCenterStoreRegion::valueOf(std::string regionId) {
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
