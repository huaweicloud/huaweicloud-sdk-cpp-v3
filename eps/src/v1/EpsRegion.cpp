#include <huaweicloud/eps/v1/EpsRegion.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Eps {
namespace V1 {

using namespace HuaweiCloud::Sdk::Core::Auth;
using namespace HuaweiCloud::Sdk::Core::Exception;

EpsRegion::EpsRegion()
{}

EpsRegion::~EpsRegion()
{}

std::map<std::string, Region> EpsRegion::regions = EpsRegion::initRegions();

Region EpsRegion::valueOf(std::string regionId) {
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
