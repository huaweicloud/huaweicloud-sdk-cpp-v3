#include <huaweicloud/drs/v5/DrsRegion.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {

using namespace HuaweiCloud::Sdk::Core::Auth;
using namespace HuaweiCloud::Sdk::Core::Exception;

DrsRegion::DrsRegion()
{}

DrsRegion::~DrsRegion()
{}

std::map<std::string, Region> DrsRegion::regions = DrsRegion::initRegions();

Region DrsRegion::valueOf(std::string regionId) {
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
