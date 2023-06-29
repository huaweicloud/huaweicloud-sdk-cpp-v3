#include <huaweicloud/mpc/v1/MpcRegion.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Mpc {
namespace V1 {

using namespace HuaweiCloud::Sdk::Core::Auth;
using namespace HuaweiCloud::Sdk::Core::Exception;

MpcRegion::MpcRegion()
{}

MpcRegion::~MpcRegion()
{}

std::map<std::string, Region> MpcRegion::regions = MpcRegion::initRegions();

Region MpcRegion::valueOf(std::string regionId) {
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
