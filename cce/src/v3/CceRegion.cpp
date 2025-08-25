#include <huaweicloud/cce/v3/CceRegion.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {

using namespace HuaweiCloud::Sdk::Core::Auth;
using namespace HuaweiCloud::Sdk::Core::Exception;

CceRegion::CceRegion()
{}

CceRegion::~CceRegion()
{}

std::map<std::string, Region> CceRegion::regions = CceRegion::initRegions();

Region CceRegion::valueOf(std::string regionId) {
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
