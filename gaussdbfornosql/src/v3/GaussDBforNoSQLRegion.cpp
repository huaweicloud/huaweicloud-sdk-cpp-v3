#include <huaweicloud/gaussdbfornosql/v3/GaussDBforNoSQLRegion.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {

using namespace HuaweiCloud::Sdk::Core::Auth;
using namespace HuaweiCloud::Sdk::Core::Exception;

GaussDBforNoSQLRegion::GaussDBforNoSQLRegion()
{}

GaussDBforNoSQLRegion::~GaussDBforNoSQLRegion()
{}

std::map<std::string, Region> GaussDBforNoSQLRegion::regions = GaussDBforNoSQLRegion::initRegions();

Region GaussDBforNoSQLRegion::valueOf(std::string regionId) {
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
