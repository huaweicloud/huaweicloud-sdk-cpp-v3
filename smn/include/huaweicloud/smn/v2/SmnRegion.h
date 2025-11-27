#ifndef HUAWEICLOUD_SDK_SMN_V2_SmnRegion_H_
#define HUAWEICLOUD_SDK_SMN_V2_SmnRegion_H_

#include <huaweicloud/core/auth/Region.h>
#include <huaweicloud/core/exception/SdkException.h>
#include <huaweicloud/smn/v2/SmnExport.h>
#include <map>
#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Smn {
namespace V2 {
using namespace HuaweiCloud::Sdk::Core::Auth;

class HUAWEICLOUD_SMN_V2_EXPORT SmnRegion {
public:
    SmnRegion();
    virtual ~SmnRegion();

    static Region valueOf(std::string regionId);

    static std::map<std::string, Region> initRegions() {
        std::map<std::string, Region> regions;
        regions["af-south-1"] = Region("af-south-1",
            { 
                "https://smn.af-south-1.myhuaweicloud.com"
            });
        regions["cn-north-4"] = Region("cn-north-4",
            { 
                "https://smn.cn-north-4.myhuaweicloud.com"
            });
        regions["cn-north-1"] = Region("cn-north-1",
            { 
                "https://smn.cn-north-1.myhuaweicloud.com"
            });
        regions["cn-east-2"] = Region("cn-east-2",
            { 
                "https://smn.cn-east-2.myhuaweicloud.com"
            });
        regions["cn-east-3"] = Region("cn-east-3",
            { 
                "https://smn.cn-east-3.myhuaweicloud.com"
            });
        regions["cn-south-1"] = Region("cn-south-1",
            { 
                "https://smn.cn-south-1.myhuaweicloud.com"
            });
        regions["cn-southwest-2"] = Region("cn-southwest-2",
            { 
                "https://smn.cn-southwest-2.myhuaweicloud.com"
            });
        regions["ap-southeast-2"] = Region("ap-southeast-2",
            { 
                "https://smn.ap-southeast-2.myhuaweicloud.com"
            });
        regions["ap-southeast-1"] = Region("ap-southeast-1",
            { 
                "https://smn.ap-southeast-1.myhuaweicloud.com"
            });
        regions["ap-southeast-3"] = Region("ap-southeast-3",
            { 
                "https://smn.ap-southeast-3.myhuaweicloud.com"
            });
        regions["cn-north-2"] = Region("cn-north-2",
            { 
                "https://smn.cn-north-2.myhuaweicloud.cn"
            });
        regions["cn-south-2"] = Region("cn-south-2",
            { 
                "https://smn.cn-south-2.myhuaweicloud.com"
            });
        regions["na-mexico-1"] = Region("na-mexico-1",
            { 
                "https://smn.na-mexico-1.myhuaweicloud.com"
            });
        regions["la-north-2"] = Region("la-north-2",
            { 
                "https://smn.la-north-2.myhuaweicloud.com"
            });
        regions["sa-brazil-1"] = Region("sa-brazil-1",
            { 
                "https://smn.sa-brazil-1.myhuaweicloud.com"
            });
        regions["la-south-2"] = Region("la-south-2",
            { 
                "https://smn.la-south-2.myhuaweicloud.com"
            });
        regions["cn-north-9"] = Region("cn-north-9",
            { 
                "https://smn.cn-north-9.myhuaweicloud.com"
            });
        regions["ap-southeast-4"] = Region("ap-southeast-4",
            { 
                "https://smn.ap-southeast-4.myhuaweicloud.com"
            });
        regions["tr-west-1"] = Region("tr-west-1",
            { 
                "https://smn.tr-west-1.myhuaweicloud.com"
            });
        regions["eu-west-101"] = Region("eu-west-101",
            { 
                "https://smn.eu-west-101.myhuaweicloud.eu"
            });
        regions["eu-west-0"] = Region("eu-west-0",
            { 
                "https://smn.eu-west-0.myhuaweicloud.com"
            });
        regions["my-kualalumpur-1"] = Region("my-kualalumpur-1",
            { 
                "https://smn.my-kualalumpur-1.myhuaweicloud.com"
            });
        regions["ru-moscow-1"] = Region("ru-moscow-1",
            { 
                "https://smn.ru-moscow-1.myhuaweicloud.com"
            });
        regions["ae-ad-1"] = Region("ae-ad-1",
            { 
                "https://smn.ae-ad-1.myhuaweicloud.com"
            });
        regions["cn-south-4"] = Region("cn-south-4",
            { 
                "https://smn.cn-south-4.myhuaweicloud.com"
            });
        regions["cn-east-5"] = Region("cn-east-5",
            { 
                "https://smn.cn-east-5.myhuaweicloud.com"
            });
        regions["cn-east-4"] = Region("cn-east-4",
            { 
                "https://smn.cn-east-4.myhuaweicloud.com"
            });
        regions["cn-north-12"] = Region("cn-north-12",
            { 
                "https://smn.cn-north-12.myhuaweicloud.com"
            });
        regions["cn-north-11"] = Region("cn-north-11",
            { 
                "https://smn.cn-north-11.myhuaweicloud.com"
            });
        regions["cn-southwest-3"] = Region("cn-southwest-3",
            { 
                "https://smn.cn-southwest-3.myhuaweicloud.com"
            });
        regions["ap-southeast-5"] = Region("ap-southeast-5",
            { 
                "https://smn.ap-southeast-5.myhuaweicloud.com"
            });
        regions["af-north-1"] = Region("af-north-1",
            { 
                "https://smn.af-north-1.myhuaweicloud.com"
            });
        regions["me-east-1"] = Region("me-east-1",
            { 
                "https://smn.me-east-1.myhuaweicloud.com"
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

#endif // HUAWEICLOUD_SDK_SMN_V2_SmnRegion_H_