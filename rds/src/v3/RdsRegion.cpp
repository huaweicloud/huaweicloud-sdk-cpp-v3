#include <huaweicloud/rds/v3/RdsRegion.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {

using namespace HuaweiCloud::Sdk::Core::Auth;
using namespace HuaweiCloud::Sdk::Core::Exception;

RdsRegion::RdsRegion()
{}

RdsRegion::~RdsRegion()
{}

std::map<std::string, Region> RdsRegion::regions = RdsRegion::initRegions();

Region RdsRegion::valueOf(std::string regionId) {
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
