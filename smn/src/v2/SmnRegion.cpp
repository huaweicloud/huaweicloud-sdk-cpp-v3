#include <huaweicloud/smn/v2/SmnRegion.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Smn {
namespace V2 {

using namespace HuaweiCloud::Sdk::Core::Auth;
using namespace HuaweiCloud::Sdk::Core::Exception;

SmnRegion::SmnRegion()
{}

SmnRegion::~SmnRegion()
{}

std::map<std::string, Region> SmnRegion::regions = SmnRegion::initRegions();

Region SmnRegion::valueOf(std::string regionId) {
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
