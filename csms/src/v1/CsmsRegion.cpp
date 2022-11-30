#include <huaweicloud/csms/v1/CsmsRegion.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Csms {
namespace V1 {

using namespace HuaweiCloud::Sdk::Core::Auth;
using namespace HuaweiCloud::Sdk::Core::Exception;

CsmsRegion::CsmsRegion()
{}

CsmsRegion::~CsmsRegion()
{}

std::map<std::string, Region> CsmsRegion::regions = CsmsRegion::initRegions();

Region CsmsRegion::valueOf(std::string regionId) {
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
