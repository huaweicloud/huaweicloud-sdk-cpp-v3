#include <huaweicloud/tics/v1/TicsRegion.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Tics {
namespace V1 {

using namespace HuaweiCloud::Sdk::Core::Auth;
using namespace HuaweiCloud::Sdk::Core::Exception;

TicsRegion::TicsRegion()
{}

TicsRegion::~TicsRegion()
{}

std::map<std::string, Region> TicsRegion::regions = TicsRegion::initRegions();

Region TicsRegion::valueOf(std::string regionId) {
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
