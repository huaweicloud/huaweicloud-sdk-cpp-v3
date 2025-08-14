#include <huaweicloud/iotda/v5/IoTDARegion.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {

using namespace HuaweiCloud::Sdk::Core::Auth;
using namespace HuaweiCloud::Sdk::Core::Exception;

IoTDARegion::IoTDARegion()
{}

IoTDARegion::~IoTDARegion()
{}

std::map<std::string, Region> IoTDARegion::regions = IoTDARegion::initRegions();

Region IoTDARegion::valueOf(std::string regionId) {
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
