#include <huaweicloud/codehub/v4/CodeHubRegion.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {

using namespace HuaweiCloud::Sdk::Core::Auth;
using namespace HuaweiCloud::Sdk::Core::Exception;

CodeHubRegion::CodeHubRegion()
{}

CodeHubRegion::~CodeHubRegion()
{}

std::map<std::string, Region> CodeHubRegion::regions = CodeHubRegion::initRegions();

Region CodeHubRegion::valueOf(std::string regionId) {
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
