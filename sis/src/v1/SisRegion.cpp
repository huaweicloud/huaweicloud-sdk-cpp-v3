#include <huaweicloud/sis/v1/SisRegion.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Sis {
namespace V1 {

using namespace HuaweiCloud::Sdk::Core::Auth;
using namespace HuaweiCloud::Sdk::Core::Exception;

SisRegion::SisRegion()
{}

SisRegion::~SisRegion()
{}

std::map<std::string, Region> SisRegion::regions = SisRegion::initRegions();

Region SisRegion::valueOf(std::string regionId) {
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
