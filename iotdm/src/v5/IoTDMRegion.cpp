#include <huaweicloud/iotdm/v5/IoTDMRegion.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Iotdm {
namespace V5 {

using namespace HuaweiCloud::Sdk::Core::Auth;
using namespace HuaweiCloud::Sdk::Core::Exception;

IoTDMRegion::IoTDMRegion()
{}

IoTDMRegion::~IoTDMRegion()
{}

std::map<std::string, Region> IoTDMRegion::regions = IoTDMRegion::initRegions();

Region IoTDMRegion::valueOf(std::string regionId) {
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
