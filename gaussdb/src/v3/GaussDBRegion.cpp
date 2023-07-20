#include <huaweicloud/gaussdb/v3/GaussDBRegion.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {

using namespace HuaweiCloud::Sdk::Core::Auth;
using namespace HuaweiCloud::Sdk::Core::Exception;

GaussDBRegion::GaussDBRegion()
{}

GaussDBRegion::~GaussDBRegion()
{}

std::map<std::string, Region> GaussDBRegion::regions = GaussDBRegion::initRegions();

Region GaussDBRegion::valueOf(std::string regionId) {
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
