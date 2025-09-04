#ifndef HUAWEICLOUD_SDK_IOTDM_V5_IoTDMRegion_H_
#define HUAWEICLOUD_SDK_IOTDM_V5_IoTDMRegion_H_

#include <huaweicloud/core/auth/Region.h>
#include <huaweicloud/core/exception/SdkException.h>
#include <huaweicloud/iotdm/v5/IoTDMExport.h>
#include <map>
#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Iotdm {
namespace V5 {
using namespace HuaweiCloud::Sdk::Core::Auth;

class HUAWEICLOUD_IOTDM_V5_EXPORT IoTDMRegion {
public:
    IoTDMRegion();
    virtual ~IoTDMRegion();

    static Region valueOf(std::string regionId);

    static std::map<std::string, Region> initRegions() {
        std::map<std::string, Region> regions;
        regions["cn-north-4"] = Region("cn-north-4",
            { 
                "https://iotda-mgmt.cn-north-4.myhuaweicloud.com"
            });
        regions["cn-south-4"] = Region("cn-south-4",
            { 
                "https://iotda-mgmt.cn-south-4.myhuaweicloud.com"
            });
        regions["cn-south-1"] = Region("cn-south-1",
            { 
                "https://iotda-mgmt.cn-south-1.myhuaweicloud.com"
            });
        regions["cn-east-3"] = Region("cn-east-3",
            { 
                "https://iotda-mgmt.cn-east-3.myhuaweicloud.com"
            });
        regions["ap-southeast-3"] = Region("ap-southeast-3",
            { 
                "https://iotda-mgmt.ap-southeast-3.myhuaweicloud.com"
            });
        regions["ap-southeast-2"] = Region("ap-southeast-2",
            { 
                "https://iotda-mgmt.ap-southeast-2.myhuaweicloud.com"
            });
        regions["ap-southeast-1"] = Region("ap-southeast-1",
            { 
                "https://iotda-mgmt.ap-southeast-1.myhuaweicloud.com"
            });
        regions["af-south-1"] = Region("af-south-1",
            { 
                "https://iotda-mgmt.af-south-1.myhuaweicloud.com"
            });
        regions["me-east-1"] = Region("me-east-1",
            { 
                "https://iotda-mgmt.me-east-1.myhuaweicloud.com"
            });
        regions["la-south-2"] = Region("la-south-2",
            { 
                "https://iotda-mgmt.la-south-2.myhuaweicloud.com"
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

#endif // HUAWEICLOUD_SDK_IOTDM_V5_IoTDMRegion_H_