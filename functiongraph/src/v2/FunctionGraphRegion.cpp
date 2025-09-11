#include <huaweicloud/functiongraph/v2/FunctionGraphRegion.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Functiongraph {
namespace V2 {

using namespace HuaweiCloud::Sdk::Core::Auth;
using namespace HuaweiCloud::Sdk::Core::Exception;

FunctionGraphRegion::FunctionGraphRegion()
{}

FunctionGraphRegion::~FunctionGraphRegion()
{}

std::map<std::string, Region> FunctionGraphRegion::regions = FunctionGraphRegion::initRegions();

Region FunctionGraphRegion::valueOf(std::string regionId) {
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
