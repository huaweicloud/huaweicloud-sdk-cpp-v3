#include <huaweicloud/cloudtable/v2/CloudTableRegion.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtable {
namespace V2 {

using namespace HuaweiCloud::Sdk::Core::Auth;
using namespace HuaweiCloud::Sdk::Core::Exception;

CloudTableRegion::CloudTableRegion()
{}

CloudTableRegion::~CloudTableRegion()
{}

std::map<std::string, Region> CloudTableRegion::regions = CloudTableRegion::initRegions();

Region CloudTableRegion::valueOf(std::string regionId) {
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
