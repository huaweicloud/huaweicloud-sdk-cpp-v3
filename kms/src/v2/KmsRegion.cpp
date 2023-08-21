#include <huaweicloud/kms/v2/KmsRegion.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Kms {
namespace V2 {

using namespace HuaweiCloud::Sdk::Core::Auth;
using namespace HuaweiCloud::Sdk::Core::Exception;

KmsRegion::KmsRegion()
{}

KmsRegion::~KmsRegion()
{}

std::map<std::string, Region> KmsRegion::regions = KmsRegion::initRegions();

Region KmsRegion::valueOf(std::string regionId) {
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
