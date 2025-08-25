#ifndef HUAWEICLOUD_SDK_CCE_V3_CceRegion_H_
#define HUAWEICLOUD_SDK_CCE_V3_CceRegion_H_

#include <huaweicloud/core/auth/Region.h>
#include <huaweicloud/core/exception/SdkException.h>
#include <huaweicloud/cce/v3/CceExport.h>
#include <map>
#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
using namespace HuaweiCloud::Sdk::Core::Auth;

class HUAWEICLOUD_CCE_V3_EXPORT CceRegion {
public:
    CceRegion();
    virtual ~CceRegion();

    static Region valueOf(std::string regionId);

    static std::map<std::string, Region> initRegions() {
        std::map<std::string, Region> regions;
        regions["cn-north-1"] = Region("cn-north-1",
            { 
                "https://cce.cn-north-1.myhuaweicloud.com"
            });
        regions["cn-north-2"] = Region("cn-north-2",
            { 
                "https://cce.cn-north-2.myhuaweicloud.com"
            });
        regions["cn-north-4"] = Region("cn-north-4",
            { 
                "https://cce.cn-north-4.myhuaweicloud.com"
            });
        regions["cn-north-9"] = Region("cn-north-9",
            { 
                "https://cce.cn-north-9.myhuaweicloud.com"
            });
        regions["cn-south-1"] = Region("cn-south-1",
            { 
                "https://cce.cn-south-1.myhuaweicloud.com"
            });
        regions["cn-south-2"] = Region("cn-south-2",
            { 
                "https://cce.cn-south-2.myhuaweicloud.com"
            });
        regions["cn-south-4"] = Region("cn-south-4",
            { 
                "https://cce.cn-south-4.myhuaweicloud.com"
            });
        regions["cn-east-2"] = Region("cn-east-2",
            { 
                "https://cce.cn-east-2.myhuaweicloud.com"
            });
        regions["cn-east-3"] = Region("cn-east-3",
            { 
                "https://cce.cn-east-3.myhuaweicloud.com"
            });
        regions["cn-southwest-2"] = Region("cn-southwest-2",
            { 
                "https://cce.cn-southwest-2.myhuaweicloud.com"
            });
        regions["ap-southeast-1"] = Region("ap-southeast-1",
            { 
                "https://cce.ap-southeast-1.myhuaweicloud.com"
            });
        regions["ap-southeast-2"] = Region("ap-southeast-2",
            { 
                "https://cce.ap-southeast-2.myhuaweicloud.com"
            });
        regions["ap-southeast-3"] = Region("ap-southeast-3",
            { 
                "https://cce.ap-southeast-3.myhuaweicloud.com"
            });
        regions["af-south-1"] = Region("af-south-1",
            { 
                "https://cce.af-south-1.myhuaweicloud.com"
            });
        regions["sa-brazil-1"] = Region("sa-brazil-1",
            { 
                "https://cce.sa-brazil-1.myhuaweicloud.com"
            });
        regions["la-south-2"] = Region("la-south-2",
            { 
                "https://cce.la-south-2.myhuaweicloud.com"
            });
        regions["la-north-2"] = Region("la-north-2",
            { 
                "https://cce.la-north-2.myhuaweicloud.com"
            });
        regions["na-mexico-1"] = Region("na-mexico-1",
            { 
                "https://cce.na-mexico-1.myhuaweicloud.com"
            });
        regions["ru-northwest-2"] = Region("ru-northwest-2",
            { 
                "https://cce.ru-northwest-2.myhuaweicloud.com"
            });
        regions["ap-southeast-4"] = Region("ap-southeast-4",
            { 
                "https://cce.ap-southeast-4.myhuaweicloud.com"
            });
        regions["tr-west-1"] = Region("tr-west-1",
            { 
                "https://cce.tr-west-1.myhuaweicloud.com"
            });
        regions["ae-ad-1"] = Region("ae-ad-1",
            { 
                "https://cce.ae-ad-1.myhuaweicloud.com"
            });
        regions["eu-west-101"] = Region("eu-west-101",
            { 
                "https://cce.eu-west-101.myhuaweicloud.eu"
            });
        regions["cn-north-11"] = Region("cn-north-11",
            { 
                "https://cce.cn-north-11.myhuaweicloud.com"
            });
        regions["my-kualalumpur-1"] = Region("my-kualalumpur-1",
            { 
                "https://cce.my-kualalumpur-1.myhuaweicloud.com"
            });
        regions["eu-west-0"] = Region("eu-west-0",
            { 
                "https://cce.eu-west-0.myhuaweicloud.com"
            });
        regions["ru-moscow-1"] = Region("ru-moscow-1",
            { 
                "https://cce.ru-moscow-1.myhuaweicloud.com"
            });
        regions["me-east-1"] = Region("me-east-1",
            { 
                "https://cce.me-east-1.myhuaweicloud.com"
            });
        regions["cn-east-4"] = Region("cn-east-4",
            { 
                "https://cce.cn-east-4.myhuaweicloud.com"
            });
        regions["af-north-1"] = Region("af-north-1",
            { 
                "https://cce.af-north-1.myhuaweicloud.com"
            });
        regions["cn-east-5"] = Region("cn-east-5",
            { 
                "https://cce.cn-east-5.myhuaweicloud.com"
            });
        regions["ap-southeast-5"] = Region("ap-southeast-5",
            { 
                "https://cce.ap-southeast-5.myhuaweicloud.com"
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

#endif // HUAWEICLOUD_SDK_CCE_V3_CceRegion_H_