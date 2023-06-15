#include <huaweicloud/cbr/v1/CbrRegion.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {

using namespace HuaweiCloud::Sdk::Core::Auth;
using namespace HuaweiCloud::Sdk::Core::Exception;

CbrRegion::CbrRegion()
{}

CbrRegion::~CbrRegion()
{}

std::map<std::string, Region> CbrRegion::regions = CbrRegion::initRegions();

Region CbrRegion::valueOf(std::string regionId) {
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
