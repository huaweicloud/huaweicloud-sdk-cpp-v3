#include <huaweicloud/codeartscheck/v2/CodeArtsCheckRegion.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartscheck {
namespace V2 {

using namespace HuaweiCloud::Sdk::Core::Auth;
using namespace HuaweiCloud::Sdk::Core::Exception;

CodeArtsCheckRegion::CodeArtsCheckRegion()
{}

CodeArtsCheckRegion::~CodeArtsCheckRegion()
{}

std::map<std::string, Region> CodeArtsCheckRegion::regions = CodeArtsCheckRegion::initRegions();

Region CodeArtsCheckRegion::valueOf(std::string regionId) {
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
