#ifndef HUAWEICLOUD_SDK_CDN_V1_CdnRegion_H_
#define HUAWEICLOUD_SDK_CDN_V1_CdnRegion_H_

#include <huaweicloud/core/auth/Region.h>
#include <huaweicloud/core/exception/SdkException.h>
#include <huaweicloud/cdn/v1/CdnExport.h>
#include <map>
#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V1 {
using namespace HuaweiCloud::Sdk::Core::Auth;

class HUAWEICLOUD_CDN_V1_EXPORT CdnRegion {
public:
    CdnRegion();
    virtual ~CdnRegion();

    static Region valueOf(std::string regionId);

    static std::map<std::string, Region> initRegions() {
        std::map<std::string, Region> regions;
        regions["cn-north-1"] = Region("cn-north-1",
            { 
                "https://cdn.myhuaweicloud.com"
            });
        regions["ap-southeast-1"] = Region("ap-southeast-1",
            { 
                "https://cdn.myhuaweicloud.com"
            });
        regions["eu-west-101"] = Region("eu-west-101",
            { 
                "https://cdn.myhuaweicloud.eu"
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

#endif // HUAWEICLOUD_SDK_CDN_V1_CdnRegion_H_