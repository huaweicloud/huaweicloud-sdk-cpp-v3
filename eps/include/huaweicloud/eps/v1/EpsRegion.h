#ifndef HUAWEICLOUD_SDK_EPS_V1_EpsRegion_H_
#define HUAWEICLOUD_SDK_EPS_V1_EpsRegion_H_

#include <huaweicloud/core/auth/Region.h>
#include <huaweicloud/core/exception/SdkException.h>
#include <huaweicloud/eps/v1/EpsExport.h>
#include <map>
#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Eps {
namespace V1 {
using namespace HuaweiCloud::Sdk::Core::Auth;

class HUAWEICLOUD_EPS_V1_EXPORT EpsRegion {
public:
    EpsRegion();
    virtual ~EpsRegion();

    static Region valueOf(std::string regionId);

    static std::map<std::string, Region> initRegions() {
        std::map<std::string, Region> regions;
        regions["cn-north-4"] = Region("cn-north-4",
            { 
                "https://eps.myhuaweicloud.com",

                "https://eps.myhuaweicloud.cn"
            });
        regions["eu-west-101"] = Region("eu-west-101",
            { 
                "https://eps.eu-west-101.myhuaweicloud.eu"
            });
        regions["ru-moscow-1"] = Region("ru-moscow-1",
            { 
                "https://eps.ru-moscow-1.myhuaweicloud.com",

                "https://eps.ru-moscow-1.myhuaweicloud.cn"
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

#endif // HUAWEICLOUD_SDK_EPS_V1_EpsRegion_H_