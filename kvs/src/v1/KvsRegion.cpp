#include <huaweicloud/kvs/v1/KvsRegion.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Kvs {
namespace V1 {

using namespace HuaweiCloud::Sdk::Core::Auth;
using namespace HuaweiCloud::Sdk::Core::Exception;

KvsRegion::KvsRegion()
{}

KvsRegion::~KvsRegion()
{}

std::map<std::string, Region> KvsRegion::regions = KvsRegion::initRegions();

Region KvsRegion::valueOf(std::string regionId) {
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
