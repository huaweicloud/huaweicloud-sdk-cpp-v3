#include <huaweicloud/ims/v2/ImsRegion.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Ims {
namespace V2 {

using namespace HuaweiCloud::Sdk::Core::Auth;
using namespace HuaweiCloud::Sdk::Core::Exception;

ImsRegion::ImsRegion()
{}

ImsRegion::~ImsRegion()
{}

std::map<std::string, Region> ImsRegion::regions = ImsRegion::initRegions();

Region ImsRegion::valueOf(std::string regionId) {
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
