#ifndef HUAWEICLOUD_SDK_AAD_V2_AadRegion_H_
#define HUAWEICLOUD_SDK_AAD_V2_AadRegion_H_

#include <huaweicloud/core/auth/Region.h>
#include <huaweicloud/core/exception/SdkException.h>
#include <huaweicloud/aad/v2/AadExport.h>
#include <map>
#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Aad {
namespace V2 {
using namespace HuaweiCloud::Sdk::Core::Auth;

class HUAWEICLOUD_AAD_V2_EXPORT AadRegion {
public:
    AadRegion();
    virtual ~AadRegion();

    static Region valueOf(std::string regionId);

    static std::map<std::string, Region> initRegions() {
        std::map<std::string, Region> regions;
        regions["cn-north-4"] = Region("cn-north-4",
            { 
                "https://aad.myhuaweicloud.com"
            });
        regions["ap-southeast-1"] = Region("ap-southeast-1",
            { 
                "https://aad.myhuaweicloud.com"
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

#endif // HUAWEICLOUD_SDK_AAD_V2_AadRegion_H_