#ifndef HUAWEICLOUD_SDK_CBR_V1_CbrRegion_H_
#define HUAWEICLOUD_SDK_CBR_V1_CbrRegion_H_

#include <huaweicloud/core/auth/Region.h>
#include <huaweicloud/core/exception/SdkException.h>
#include <huaweicloud/cbr/v1/CbrExport.h>
#include <map>
#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
using namespace HuaweiCloud::Sdk::Core::Auth;

class HUAWEICLOUD_CBR_V1_EXPORT CbrRegion {
public:
    CbrRegion();
    virtual ~CbrRegion();

    static Region valueOf(std::string regionId);

    static std::map<std::string, Region> initRegions() {
        std::map<std::string, Region> regions;
        regions["eu-west-101"] = Region("eu-west-101",
            { 
                "https://cbr.eu-west-101.myhuaweicloud.eu"
            });
        regions["cn-north-1"] = Region("cn-north-1",
            { 
                "https://cbr.cn-north-1.myhuaweicloud.com"
            });
        regions["cn-north-4"] = Region("cn-north-4",
            { 
                "https://cbr.cn-north-4.myhuaweicloud.com"
            });
        regions["cn-south-1"] = Region("cn-south-1",
            { 
                "https://cbr.cn-south-1.myhuaweicloud.com"
            });
        regions["cn-east-2"] = Region("cn-east-2",
            { 
                "https://cbr.cn-east-2.myhuaweicloud.com"
            });
        regions["cn-east-3"] = Region("cn-east-3",
            { 
                "https://cbr.cn-east-3.myhuaweicloud.com"
            });
        regions["cn-southwest-2"] = Region("cn-southwest-2",
            { 
                "https://cbr.cn-southwest-2.myhuaweicloud.com"
            });
        regions["ap-southeast-1"] = Region("ap-southeast-1",
            { 
                "https://cbr.ap-southeast-1.myhuaweicloud.com"
            });
        regions["ap-southeast-2"] = Region("ap-southeast-2",
            { 
                "https://cbr.ap-southeast-2.myhuaweicloud.com"
            });
        regions["ap-southeast-3"] = Region("ap-southeast-3",
            { 
                "https://cbr.ap-southeast-3.myhuaweicloud.com"
            });
        regions["af-south-1"] = Region("af-south-1",
            { 
                "https://cbr.af-south-1.myhuaweicloud.com"
            });
        regions["sa-brazil-1"] = Region("sa-brazil-1",
            { 
                "https://cbr.sa-brazil-1.myhuaweicloud.com"
            });
        regions["la-north-2"] = Region("la-north-2",
            { 
                "https://cbr.la-north-2.myhuaweicloud.com"
            });
        regions["cn-south-4"] = Region("cn-south-4",
            { 
                "https://cbr.cn-south-4.myhuaweicloud.com"
            });
        regions["na-mexico-1"] = Region("na-mexico-1",
            { 
                "https://cbr.na-mexico-1.myhuaweicloud.com"
            });
        regions["la-south-2"] = Region("la-south-2",
            { 
                "https://cbr.la-south-2.myhuaweicloud.com"
            });
        regions["cn-south-2"] = Region("cn-south-2",
            { 
                "https://cbr.cn-south-2.myhuaweicloud.com"
            });
        regions["cn-north-9"] = Region("cn-north-9",
            { 
                "https://cbr.cn-north-9.myhuaweicloud.com"
            });
        regions["cn-north-2"] = Region("cn-north-2",
            { 
                "https://cbr.cn-north-2.myhuaweicloud.com"
            });
        regions["ap-southeast-4"] = Region("ap-southeast-4",
            { 
                "https://cbr.ap-southeast-4.myhuaweicloud.com"
            });
        regions["tr-west-1"] = Region("tr-west-1",
            { 
                "https://cbr.tr-west-1.myhuaweicloud.com"
            });
        regions["me-east-1"] = Region("me-east-1",
            { 
                "https://cbr.me-east-1.myhuaweicloud.com"
            });
        regions["ae-ad-1"] = Region("ae-ad-1",
            { 
                "https://cbr.ae-ad-1.g42cloud.com"
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

#endif // HUAWEICLOUD_SDK_CBR_V1_CbrRegion_H_