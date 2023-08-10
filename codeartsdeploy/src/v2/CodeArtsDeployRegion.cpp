#include <huaweicloud/codeartsdeploy/v2/CodeArtsDeployRegion.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsdeploy {
namespace V2 {

using namespace HuaweiCloud::Sdk::Core::Auth;
using namespace HuaweiCloud::Sdk::Core::Exception;

CodeArtsDeployRegion::CodeArtsDeployRegion()
{}

CodeArtsDeployRegion::~CodeArtsDeployRegion()
{}

std::map<std::string, Region> CodeArtsDeployRegion::regions = CodeArtsDeployRegion::initRegions();

Region CodeArtsDeployRegion::valueOf(std::string regionId) {
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
