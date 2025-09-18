#include <huaweicloud/ga/v1/GaRegion.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Ga {
namespace V1 {

using namespace HuaweiCloud::Sdk::Core::Auth;
using namespace HuaweiCloud::Sdk::Core::Exception;

GaRegion::GaRegion()
{}

GaRegion::~GaRegion()
{}

std::map<std::string, Region> GaRegion::regions = GaRegion::initRegions();

Region GaRegion::valueOf(std::string regionId) {
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
