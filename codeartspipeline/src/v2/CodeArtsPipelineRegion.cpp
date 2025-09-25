#include <huaweicloud/codeartspipeline/v2/CodeArtsPipelineRegion.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {

using namespace HuaweiCloud::Sdk::Core::Auth;
using namespace HuaweiCloud::Sdk::Core::Exception;

CodeArtsPipelineRegion::CodeArtsPipelineRegion()
{}

CodeArtsPipelineRegion::~CodeArtsPipelineRegion()
{}

std::map<std::string, Region> CodeArtsPipelineRegion::regions = CodeArtsPipelineRegion::initRegions();

Region CodeArtsPipelineRegion::valueOf(std::string regionId) {
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
