#include <huaweicloud/antiddos/v1/AntiDDoSRegion.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Antiddos {
namespace V1 {

using namespace HuaweiCloud::Sdk::Core::Auth;
using namespace HuaweiCloud::Sdk::Core::Exception;

AntiDDoSRegion::AntiDDoSRegion()
{}

AntiDDoSRegion::~AntiDDoSRegion()
{}

std::map<std::string, Region> AntiDDoSRegion::regions = AntiDDoSRegion::initRegions();

Region AntiDDoSRegion::valueOf(std::string regionId) {
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
