#ifndef HUAWEICLOUD_SDK_LIVE_V1_LiveRegion_H_
#define HUAWEICLOUD_SDK_LIVE_V1_LiveRegion_H_

#include <huaweicloud/core/auth/Region.h>
#include <huaweicloud/core/exception/SdkException.h>
#include <huaweicloud/live/v1/LiveExport.h>
#include <map>
#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
using namespace HuaweiCloud::Sdk::Core::Auth;

class HUAWEICLOUD_LIVE_V1_EXPORT LiveRegion {
public:
    LiveRegion();
    virtual ~LiveRegion();

    static Region valueOf(std::string regionId);

    static std::map<std::string, Region> initRegions() {
        std::map<std::string, Region> regions;
        regions["cn-north-4"] = Region("cn-north-4",
            { 
                "https://live.cn-north-4.myhuaweicloud.com"
            });
        regions["cn-north-1"] = Region("cn-north-1",
            { 
                "https://live.cn-north-1.myhuaweicloud.com"
            });
        regions["cn-east-3"] = Region("cn-east-3",
            { 
                "https://live.cn-east-3.myhuaweicloud.com"
            });
        regions["ap-southeast-2"] = Region("ap-southeast-2",
            { 
                "https://live.ap-southeast-2.myhuaweicloud.com"
            });
        regions["ap-southeast-3"] = Region("ap-southeast-3",
            { 
                "https://live.ap-southeast-3.myhuaweicloud.com"
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

#endif // HUAWEICLOUD_SDK_LIVE_V1_LiveRegion_H_