#include <huaweicloud/cdn/v2/CdnRegion.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V2 {

using namespace HuaweiCloud::Sdk::Core::Auth;
using namespace HuaweiCloud::Sdk::Core::Exception;

CdnRegion::CdnRegion()
{}

CdnRegion::~CdnRegion()
{}

std::map<std::string, Region> CdnRegion::regions = CdnRegion::initRegions();

Region CdnRegion::valueOf(std::string regionId) {
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
