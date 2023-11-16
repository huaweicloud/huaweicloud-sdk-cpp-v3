#include <huaweicloud/aad/v1/AadRegion.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Aad {
namespace V1 {

using namespace HuaweiCloud::Sdk::Core::Auth;
using namespace HuaweiCloud::Sdk::Core::Exception;

AadRegion::AadRegion()
{}

AadRegion::~AadRegion()
{}

std::map<std::string, Region> AadRegion::regions = AadRegion::initRegions();

Region AadRegion::valueOf(std::string regionId) {
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
