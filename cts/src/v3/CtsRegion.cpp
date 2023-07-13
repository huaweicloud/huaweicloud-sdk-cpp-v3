#include <huaweicloud/cts/v3/CtsRegion.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Cts {
namespace V3 {

using namespace HuaweiCloud::Sdk::Core::Auth;
using namespace HuaweiCloud::Sdk::Core::Exception;

CtsRegion::CtsRegion()
{}

CtsRegion::~CtsRegion()
{}

std::map<std::string, Region> CtsRegion::regions = CtsRegion::initRegions();

Region CtsRegion::valueOf(std::string regionId) {
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
