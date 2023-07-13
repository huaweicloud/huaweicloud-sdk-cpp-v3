#include <huaweicloud/tms/v1/TmsRegion.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Tms {
namespace V1 {

using namespace HuaweiCloud::Sdk::Core::Auth;
using namespace HuaweiCloud::Sdk::Core::Exception;

TmsRegion::TmsRegion()
{}

TmsRegion::~TmsRegion()
{}

std::map<std::string, Region> TmsRegion::regions = TmsRegion::initRegions();

Region TmsRegion::valueOf(std::string regionId) {
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
