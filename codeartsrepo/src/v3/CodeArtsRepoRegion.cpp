#include <huaweicloud/codeartsrepo/v3/CodeArtsRepoRegion.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V3 {

using namespace HuaweiCloud::Sdk::Core::Auth;
using namespace HuaweiCloud::Sdk::Core::Exception;

CodeArtsRepoRegion::CodeArtsRepoRegion()
{}

CodeArtsRepoRegion::~CodeArtsRepoRegion()
{}

std::map<std::string, Region> CodeArtsRepoRegion::regions = CodeArtsRepoRegion::initRegions();

Region CodeArtsRepoRegion::valueOf(std::string regionId) {
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
