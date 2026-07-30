#include <huaweicloud/modelarts/v1/ModelArtsRegion.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {

using namespace HuaweiCloud::Sdk::Core::Auth;
using namespace HuaweiCloud::Sdk::Core::Exception;

ModelArtsRegion::ModelArtsRegion()
{}

ModelArtsRegion::~ModelArtsRegion()
{}

std::map<std::string, Region> ModelArtsRegion::regions = ModelArtsRegion::initRegions();

Region ModelArtsRegion::valueOf(std::string regionId) {
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
