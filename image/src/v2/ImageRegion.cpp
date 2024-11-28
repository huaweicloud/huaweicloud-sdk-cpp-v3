#include <huaweicloud/image/v2/ImageRegion.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Image {
namespace V2 {

using namespace HuaweiCloud::Sdk::Core::Auth;
using namespace HuaweiCloud::Sdk::Core::Exception;

ImageRegion::ImageRegion()
{}

ImageRegion::~ImageRegion()
{}

std::map<std::string, Region> ImageRegion::regions = ImageRegion::initRegions();

Region ImageRegion::valueOf(std::string regionId) {
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
