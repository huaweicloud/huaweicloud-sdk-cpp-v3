#ifndef HUAWEICLOUD_SDK_MEETING_V1_MeetingRegion_H_
#define HUAWEICLOUD_SDK_MEETING_V1_MeetingRegion_H_

#include <huaweicloud/core/auth/Region.h>
#include <huaweicloud/core/exception/SdkException.h>
#include <huaweicloud/meeting/v1/MeetingExport.h>
#include <map>
#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
using namespace HuaweiCloud::Sdk::Core::Auth;

class HUAWEICLOUD_MEETING_V1_EXPORT MeetingRegion {
public:
    MeetingRegion();
    virtual ~MeetingRegion();

    static Region valueOf(std::string regionId);

    static std::map<std::string, Region> initRegions() {
        std::map<std::string, Region> regions;
        regions["cn-north-4"] = Region("cn-north-4",
            { 
                "https://api.meeting.huaweicloud.com"
            });
        regions["ap-southeast-1"] = Region("ap-southeast-1",
            { 
                "https://api-intl.meeting.huaweicloud.com"
            });
        return regions;
    }
private:
    static std::map<std::string, Region> regions;
};

}
}
}
}

#endif // HUAWEICLOUD_SDK_MEETING_V1_MeetingRegion_H_