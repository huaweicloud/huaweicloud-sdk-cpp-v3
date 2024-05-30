#include <huaweicloud/organizations/v1/OrganizationsRegion.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Organizations {
namespace V1 {

using namespace HuaweiCloud::Sdk::Core::Auth;
using namespace HuaweiCloud::Sdk::Core::Exception;

OrganizationsRegion::OrganizationsRegion()
{}

OrganizationsRegion::~OrganizationsRegion()
{}

std::map<std::string, Region> OrganizationsRegion::regions = OrganizationsRegion::initRegions();

Region OrganizationsRegion::valueOf(std::string regionId) {
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
