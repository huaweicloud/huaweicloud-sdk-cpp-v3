#include <huaweicloud/frs/v2/FrsRegion.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Frs {
namespace V2 {

using namespace HuaweiCloud::Sdk::Core::Auth;
using namespace HuaweiCloud::Sdk::Core::Exception;

FrsRegion::FrsRegion()
{}

FrsRegion::~FrsRegion()
{}

std::map<std::string, Region> FrsRegion::regions = FrsRegion::initRegions();

Region FrsRegion::valueOf(std::string regionId) {
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
