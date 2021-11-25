#include <huaweicloud/ocr/v1/OcrRegion.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Ocr {
namespace V1 {

using namespace HuaweiCloud::Sdk::Core::Auth;
using namespace HuaweiCloud::Sdk::Core::Exception;

OcrRegion::OcrRegion()
{}

OcrRegion::~OcrRegion()
{}

std::map<std::string, Region> OcrRegion::regions = OcrRegion::initRegions();

Region OcrRegion::valueOf(std::string regionId) {
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
