#include <huaweicloud/gaussdbforopengauss/v3/GaussDBforopenGaussRegion.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {

using namespace HuaweiCloud::Sdk::Core::Auth;
using namespace HuaweiCloud::Sdk::Core::Exception;

GaussDBforopenGaussRegion::GaussDBforopenGaussRegion()
{}

GaussDBforopenGaussRegion::~GaussDBforopenGaussRegion()
{}

std::map<std::string, Region> GaussDBforopenGaussRegion::regions = GaussDBforopenGaussRegion::initRegions();

Region GaussDBforopenGaussRegion::valueOf(std::string regionId) {
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
