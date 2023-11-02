#include <huaweicloud/dbss/v1/DbssRegion.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {

using namespace HuaweiCloud::Sdk::Core::Auth;
using namespace HuaweiCloud::Sdk::Core::Exception;

DbssRegion::DbssRegion()
{}

DbssRegion::~DbssRegion()
{}

std::map<std::string, Region> DbssRegion::regions = DbssRegion::initRegions();

Region DbssRegion::valueOf(std::string regionId) {
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
