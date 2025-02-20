#include <huaweicloud/smnglobal/v2/SmnglobalRegion.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Smnglobal {
namespace V2 {

using namespace HuaweiCloud::Sdk::Core::Auth;
using namespace HuaweiCloud::Sdk::Core::Exception;

SmnglobalRegion::SmnglobalRegion()
{}

SmnglobalRegion::~SmnglobalRegion()
{}

std::map<std::string, Region> SmnglobalRegion::regions = SmnglobalRegion::initRegions();

Region SmnglobalRegion::valueOf(std::string regionId) {
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
