#include <huaweicloud/codeartsartifact/v2/CodeArtsArtifactRegion.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsartifact {
namespace V2 {

using namespace HuaweiCloud::Sdk::Core::Auth;
using namespace HuaweiCloud::Sdk::Core::Exception;

CodeArtsArtifactRegion::CodeArtsArtifactRegion()
{}

CodeArtsArtifactRegion::~CodeArtsArtifactRegion()
{}

std::map<std::string, Region> CodeArtsArtifactRegion::regions = CodeArtsArtifactRegion::initRegions();

Region CodeArtsArtifactRegion::valueOf(std::string regionId) {
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
