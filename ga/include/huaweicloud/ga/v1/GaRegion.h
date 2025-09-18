#ifndef HUAWEICLOUD_SDK_GA_V1_GaRegion_H_
#define HUAWEICLOUD_SDK_GA_V1_GaRegion_H_

#include <huaweicloud/core/auth/Region.h>
#include <huaweicloud/core/exception/SdkException.h>
#include <huaweicloud/ga/v1/GaExport.h>
#include <map>
#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Ga {
namespace V1 {
using namespace HuaweiCloud::Sdk::Core::Auth;

class HUAWEICLOUD_GA_V1_EXPORT GaRegion {
public:
    GaRegion();
    virtual ~GaRegion();

    static Region valueOf(std::string regionId);

    static std::map<std::string, Region> initRegions() {
        std::map<std::string, Region> regions;
        regions["cn-east-3"] = Region("cn-east-3",
            { 
                "https://ga.myhuaweicloud.com"
            });
        regions["cn-southwest-2"] = Region("cn-southwest-2",
            { 
                "https://ga.myhuaweicloud.com"
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

#endif // HUAWEICLOUD_SDK_GA_V1_GaRegion_H_