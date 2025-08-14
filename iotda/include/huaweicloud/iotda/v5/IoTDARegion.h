#ifndef HUAWEICLOUD_SDK_IOTDA_V5_IoTDARegion_H_
#define HUAWEICLOUD_SDK_IOTDA_V5_IoTDARegion_H_

#include <huaweicloud/core/auth/Region.h>
#include <huaweicloud/core/exception/SdkException.h>
#include <huaweicloud/iotda/v5/IoTDAExport.h>
#include <map>
#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
using namespace HuaweiCloud::Sdk::Core::Auth;

class HUAWEICLOUD_IOTDA_V5_EXPORT IoTDARegion {
public:
    IoTDARegion();
    virtual ~IoTDARegion();

    static Region valueOf(std::string regionId);

    static std::map<std::string, Region> initRegions() {
        std::map<std::string, Region> regions;
        regions["cn-north-4"] = Region("cn-north-4",
            { 
                "https://iotda.cn-north-4.myhuaweicloud.com"
            });
        regions["cn-south-4"] = Region("cn-south-4",
            { 
                "https://iotda.cn-south-4.myhuaweicloud.com"
            });
        regions["cn-south-1"] = Region("cn-south-1",
            { 
                "https://iotda.cn-south-1.myhuaweicloud.com"
            });
        regions["cn-east-3"] = Region("cn-east-3",
            { 
                "https://iotda.cn-east-3.myhuaweicloud.com"
            });
        regions["ap-southeast-3"] = Region("ap-southeast-3",
            { 
                "https://iotda.ap-southeast-3.myhuaweicloud.com"
            });
        regions["ap-southeast-2"] = Region("ap-southeast-2",
            { 
                "https://iotda.ap-southeast-2.myhuaweicloud.com"
            });
        regions["ap-southeast-1"] = Region("ap-southeast-1",
            { 
                "https://iotda.ap-southeast-1.myhuaweicloud.com"
            });
        regions["af-south-1"] = Region("af-south-1",
            { 
                "https://iotda.af-south-1.myhuaweicloud.com"
            });
        regions["me-east-1"] = Region("me-east-1",
            { 
                "https://iotda.me-east-1.myhuaweicloud.com"
            });
        regions["la-south-2"] = Region("la-south-2",
            { 
                "https://iotda.la-south-2.myhuaweicloud.com"
            });
        regions["sa-brazil-1"] = Region("sa-brazil-1",
            { 
                "https://iotda.sa-brazil-1.myhuaweicloud.com"
            });
        regions["la-north-2"] = Region("la-north-2",
            { 
                "https://iotda.la-north-2.myhuaweicloud.com"
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

#endif // HUAWEICLOUD_SDK_IOTDA_V5_IoTDARegion_H_