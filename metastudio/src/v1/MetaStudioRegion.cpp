#include <huaweicloud/metastudio/v1/MetaStudioRegion.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {

using namespace HuaweiCloud::Sdk::Core::Auth;
using namespace HuaweiCloud::Sdk::Core::Exception;

MetaStudioRegion::MetaStudioRegion()
{}

MetaStudioRegion::~MetaStudioRegion()
{}

std::map<std::string, Region> MetaStudioRegion::regions = MetaStudioRegion::initRegions();

Region MetaStudioRegion::valueOf(std::string regionId) {
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
