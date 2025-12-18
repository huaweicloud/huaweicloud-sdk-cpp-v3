#include <huaweicloud/meeting/v1/MeetingRegion.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {

using namespace HuaweiCloud::Sdk::Core::Auth;
using namespace HuaweiCloud::Sdk::Core::Exception;

MeetingRegion::MeetingRegion()
{}

MeetingRegion::~MeetingRegion()
{}

std::map<std::string, Region> MeetingRegion::regions = MeetingRegion::initRegions();

Region MeetingRegion::valueOf(std::string regionId) {
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
