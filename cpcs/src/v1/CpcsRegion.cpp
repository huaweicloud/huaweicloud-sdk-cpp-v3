#include <huaweicloud/cpcs/v1/CpcsRegion.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Cpcs {
namespace V1 {

using namespace HuaweiCloud::Sdk::Core::Auth;
using namespace HuaweiCloud::Sdk::Core::Exception;

CpcsRegion::CpcsRegion()
{}

CpcsRegion::~CpcsRegion()
{}

std::map<std::string, Region> CpcsRegion::regions = CpcsRegion::initRegions();

Region CpcsRegion::valueOf(std::string regionId) {
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
