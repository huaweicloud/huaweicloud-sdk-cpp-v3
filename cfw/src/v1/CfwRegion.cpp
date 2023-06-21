#include <huaweicloud/cfw/v1/CfwRegion.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {

using namespace HuaweiCloud::Sdk::Core::Auth;
using namespace HuaweiCloud::Sdk::Core::Exception;

CfwRegion::CfwRegion()
{}

CfwRegion::~CfwRegion()
{}

std::map<std::string, Region> CfwRegion::regions = CfwRegion::initRegions();

Region CfwRegion::valueOf(std::string regionId) {
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
