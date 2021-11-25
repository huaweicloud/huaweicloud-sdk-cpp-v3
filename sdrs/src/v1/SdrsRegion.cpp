#include <huaweicloud/sdrs/v1/SdrsRegion.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Sdrs {
namespace V1 {

using namespace HuaweiCloud::Sdk::Core::Auth;
using namespace HuaweiCloud::Sdk::Core::Exception;

SdrsRegion::SdrsRegion()
{}

SdrsRegion::~SdrsRegion()
{}

std::map<std::string, Region> SdrsRegion::regions = SdrsRegion::initRegions();

Region SdrsRegion::valueOf(std::string regionId) {
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
