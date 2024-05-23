#include <huaweicloud/ram/v1/RamRegion.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Ram {
namespace V1 {

using namespace HuaweiCloud::Sdk::Core::Auth;
using namespace HuaweiCloud::Sdk::Core::Exception;

RamRegion::RamRegion()
{}

RamRegion::~RamRegion()
{}

std::map<std::string, Region> RamRegion::regions = RamRegion::initRegions();

Region RamRegion::valueOf(std::string regionId) {
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
