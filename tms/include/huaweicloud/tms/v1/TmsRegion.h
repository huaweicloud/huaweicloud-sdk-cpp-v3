#ifndef HUAWEICLOUD_SDK_TMS_V1_TmsRegion_H_
#define HUAWEICLOUD_SDK_TMS_V1_TmsRegion_H_

#include <huaweicloud/core/auth/Region.h>
#include <huaweicloud/core/exception/SdkException.h>
#include <huaweicloud/tms/v1/TmsExport.h>
#include <map>
#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Tms {
namespace V1 {
using namespace HuaweiCloud::Sdk::Core::Auth;

class HUAWEICLOUD_TMS_V1_EXPORT TmsRegion {
public:
    TmsRegion();
    virtual ~TmsRegion();

    static Region valueOf(std::string regionId);

    static std::map<std::string, Region> initRegions() {
        std::map<std::string, Region> regions;
        regions["cn-north-4"] = Region("cn-north-4",
            { 
                "https://tms.myhuaweicloud.com",

                "https://tms.myhuaweicloud.cn"
            });
        regions["ap-southeast-1"] = Region("ap-southeast-1",
            { 
                "https://tms.ap-southeast-1.myhuaweicloud.com",

                "https://tms.ap-southeast-1.myhuaweicloud.cn"
            });
        regions["eu-west-101"] = Region("eu-west-101",
            { 
                "https://tms.eu-west-101.myhuaweicloud.eu"
            });
        regions["ru-moscow-1"] = Region("ru-moscow-1",
            { 
                "https://tms.ru-moscow-1.myhuaweicloud.com",

                "https://tms.ru-moscow-1.myhuaweicloud.cn"
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

#endif // HUAWEICLOUD_SDK_TMS_V1_TmsRegion_H_