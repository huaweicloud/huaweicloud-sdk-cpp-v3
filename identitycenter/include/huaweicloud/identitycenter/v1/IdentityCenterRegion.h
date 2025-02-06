#ifndef HUAWEICLOUD_SDK_IDENTITYCENTER_V1_IdentityCenterRegion_H_
#define HUAWEICLOUD_SDK_IDENTITYCENTER_V1_IdentityCenterRegion_H_

#include <huaweicloud/core/auth/Region.h>
#include <huaweicloud/core/exception/SdkException.h>
#include <huaweicloud/identitycenter/v1/IdentityCenterExport.h>
#include <map>
#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenter {
namespace V1 {
using namespace HuaweiCloud::Sdk::Core::Auth;

class HUAWEICLOUD_IDENTITYCENTER_V1_EXPORT IdentityCenterRegion {
public:
    IdentityCenterRegion();
    virtual ~IdentityCenterRegion();

    static Region valueOf(std::string regionId);

    static std::map<std::string, Region> initRegions() {
        std::map<std::string, Region> regions;
        regions["cn-north-4"] = Region("cn-north-4",
            { 
                "https://identitycenter.myhuaweicloud.com"
            });
        regions["cn-south-1"] = Region("cn-south-1",
            { 
                "https://identitycenter.myhuaweicloud.com"
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

#endif // HUAWEICLOUD_SDK_IDENTITYCENTER_V1_IdentityCenterRegion_H_