#ifndef HUAWEICLOUD_SDK_CTS_V3_CtsRegion_H_
#define HUAWEICLOUD_SDK_CTS_V3_CtsRegion_H_

#include <huaweicloud/core/auth/Region.h>
#include <huaweicloud/core/exception/SdkException.h>
#include <huaweicloud/cts/v3/CtsExport.h>
#include <map>
#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Cts {
namespace V3 {
using namespace HuaweiCloud::Sdk::Core::Auth;

class HUAWEICLOUD_CTS_V3_EXPORT CtsRegion {
public:
    CtsRegion();
    virtual ~CtsRegion();

    static Region valueOf(std::string regionId);

    static std::map<std::string, Region> initRegions() {
        std::map<std::string, Region> regions;
        regions["af-south-1"] = Region("af-south-1",
            { 
                "https://cts.af-south-1.myhuaweicloud.com",

                "https://cts.af-south-1.myhuaweicloud.cn"
            });
        regions["cn-north-4"] = Region("cn-north-4",
            { 
                "https://cts.cn-north-4.myhuaweicloud.com",

                "https://cts.cn-north-4.myhuaweicloud.cn"
            });
        regions["cn-north-1"] = Region("cn-north-1",
            { 
                "https://cts.cn-north-1.myhuaweicloud.com",

                "https://cts.cn-north-1.myhuaweicloud.cn"
            });
        regions["cn-east-2"] = Region("cn-east-2",
            { 
                "https://cts.cn-east-2.myhuaweicloud.com",

                "https://cts.cn-east-2.myhuaweicloud.cn"
            });
        regions["cn-east-3"] = Region("cn-east-3",
            { 
                "https://cts.cn-east-3.myhuaweicloud.com",

                "https://cts.cn-east-3.myhuaweicloud.cn"
            });
        regions["cn-south-1"] = Region("cn-south-1",
            { 
                "https://cts.cn-south-1.myhuaweicloud.com",

                "https://cts.cn-south-1.myhuaweicloud.cn"
            });
        regions["cn-south-2"] = Region("cn-south-2",
            { 
                "https://cts.cn-south-2.myhuaweicloud.com",

                "https://cts.cn-south-2.myhuaweicloud.cn"
            });
        regions["cn-southwest-2"] = Region("cn-southwest-2",
            { 
                "https://cts.cn-southwest-2.myhuaweicloud.com",

                "https://cts.cn-southwest-2.myhuaweicloud.cn"
            });
        regions["ap-southeast-2"] = Region("ap-southeast-2",
            { 
                "https://cts.ap-southeast-2.myhuaweicloud.com",

                "https://cts.ap-southeast-2.myhuaweicloud.cn"
            });
        regions["ap-southeast-1"] = Region("ap-southeast-1",
            { 
                "https://cts.ap-southeast-1.myhuaweicloud.com",

                "https://cts.ap-southeast-1.myhuaweicloud.cn"
            });
        regions["ap-southeast-3"] = Region("ap-southeast-3",
            { 
                "https://cts.ap-southeast-3.myhuaweicloud.com",

                "https://cts.ap-southeast-3.myhuaweicloud.cn"
            });
        regions["cn-north-2"] = Region("cn-north-2",
            { 
                "https://cts.cn-north-2.myhuaweicloud.com",

                "https://cts.cn-north-2.myhuaweicloud.cn"
            });
        regions["cn-north-9"] = Region("cn-north-9",
            { 
                "https://cts.cn-north-9.myhuaweicloud.com",

                "https://cts.cn-north-9.myhuaweicloud.cn"
            });
        regions["cn-south-4"] = Region("cn-south-4",
            { 
                "https://cts.cn-south-4.myhuaweicloud.com",

                "https://cts.cn-south-4.myhuaweicloud.cn"
            });
        regions["ru-northwest-2"] = Region("ru-northwest-2",
            { 
                "https://cts.ru-northwest-2.myhuaweicloud.com",

                "https://cts.ru-northwest-2.myhuaweicloud.cn"
            });
        regions["la-south-2"] = Region("la-south-2",
            { 
                "https://cts.la-south-2.myhuaweicloud.com",

                "https://cts.la-south-2.myhuaweicloud.cn"
            });
        regions["sa-brazil-1"] = Region("sa-brazil-1",
            { 
                "https://cts.sa-brazil-1.myhuaweicloud.com",

                "https://cts.sa-brazil-1.myhuaweicloud.cn"
            });
        regions["la-north-2"] = Region("la-north-2",
            { 
                "https://cts.la-north-2.myhuaweicloud.com",

                "https://cts.la-north-2.myhuaweicloud.cn"
            });
        regions["na-mexico-1"] = Region("na-mexico-1",
            { 
                "https://cts.na-mexico-1.myhuaweicloud.com",

                "https://cts.na-mexico-1.myhuaweicloud.cn"
            });
        regions["eu-west-101"] = Region("eu-west-101",
            { 
                "https://cts.eu-west-101.myhuaweicloud.eu"
            });
        regions["ap-southeast-4"] = Region("ap-southeast-4",
            { 
                "https://cts.ap-southeast-4.myhuaweicloud.com",

                "https://cts.ap-southeast-4.myhuaweicloud.cn"
            });
        regions["tr-west-1"] = Region("tr-west-1",
            { 
                "https://cts.tr-west-1.myhuaweicloud.com",

                "https://cts.tr-west-1.myhuaweicloud.cn"
            });
        regions["me-east-1"] = Region("me-east-1",
            { 
                "https://cts.me-east-1.myhuaweicloud.com"
            });
        regions["eu-west-0"] = Region("eu-west-0",
            { 
                "https://cts.eu-west-0.myhuaweicloud.com"
            });
        regions["my-kualalumpur-1"] = Region("my-kualalumpur-1",
            { 
                "https://cts.my-kualalumpur-1.myhuaweicloud.com"
            });
        regions["ru-moscow-1"] = Region("ru-moscow-1",
            { 
                "https://cts.ru-moscow-1.myhuaweicloud.com"
            });
        regions["ae-ad-1"] = Region("ae-ad-1",
            { 
                "https://cts.ae-ad-1.myhuaweicloud.com"
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

#endif // HUAWEICLOUD_SDK_CTS_V3_CtsRegion_H_