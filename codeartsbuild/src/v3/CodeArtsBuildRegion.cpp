#include <huaweicloud/codeartsbuild/v3/CodeArtsBuildRegion.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {

using namespace HuaweiCloud::Sdk::Core::Auth;
using namespace HuaweiCloud::Sdk::Core::Exception;

CodeArtsBuildRegion::CodeArtsBuildRegion()
{}

CodeArtsBuildRegion::~CodeArtsBuildRegion()
{}

std::map<std::string, Region> CodeArtsBuildRegion::regions = CodeArtsBuildRegion::initRegions();

Region CodeArtsBuildRegion::valueOf(std::string regionId) {
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
