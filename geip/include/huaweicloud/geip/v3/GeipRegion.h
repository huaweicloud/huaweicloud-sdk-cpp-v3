#ifndef HUAWEICLOUD_SDK_GEIP_V3_GeipRegion_H_
#define HUAWEICLOUD_SDK_GEIP_V3_GeipRegion_H_

#include <huaweicloud/core/auth/Region.h>
#include <huaweicloud/core/exception/SdkException.h>
#include <huaweicloud/geip/v3/GeipExport.h>
#include <map>
#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Geip {
namespace V3 {
using namespace HuaweiCloud::Sdk::Core::Auth;

class HUAWEICLOUD_GEIP_V3_EXPORT GeipRegion {
public:
    GeipRegion();
    virtual ~GeipRegion();

    static Region valueOf(std::string regionId);

    static std::map<std::string, Region> initRegions() {
        std::map<std::string, Region> regions;
        regions["cn-north-4"] = Region("cn-north-4",
            { 
                "https://eip.myhuaweicloud.com"
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

#endif // HUAWEICLOUD_SDK_GEIP_V3_GeipRegion_H_