#include <huaweicloud/cloudtest/v1/CloudtestRegion.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {

using namespace HuaweiCloud::Sdk::Core::Auth;
using namespace HuaweiCloud::Sdk::Core::Exception;

CloudtestRegion::CloudtestRegion()
{}

CloudtestRegion::~CloudtestRegion()
{}

std::map<std::string, Region> CloudtestRegion::regions = CloudtestRegion::initRegions();

Region CloudtestRegion::valueOf(std::string regionId) {
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
