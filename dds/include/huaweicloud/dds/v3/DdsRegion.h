#ifndef HUAWEICLOUD_SDK_DDS_V3_DdsRegion_H_
#define HUAWEICLOUD_SDK_DDS_V3_DdsRegion_H_

#include <huaweicloud/core/auth/Region.h>
#include <huaweicloud/core/exception/SdkException.h>
#include <huaweicloud/dds/v3/DdsExport.h>
#include <map>
#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
using namespace HuaweiCloud::Sdk::Core::Auth;

class HUAWEICLOUD_DDS_V3_EXPORT DdsRegion {
public:
    DdsRegion();
    virtual ~DdsRegion();

    static Region valueOf(std::string regionId);

    static std::map<std::string, Region> initRegions() {
        std::map<std::string, Region> regions;
        regions["eu-west-101"] = Region("eu-west-101",
            { 
                "https://dds.eu-west-101.myhuaweicloud.eu"
            });
        regions["af-south-1"] = Region("af-south-1",
            { 
                "https://dds.af-south-1.myhuaweicloud.com"
            });
        regions["cn-north-4"] = Region("cn-north-4",
            { 
                "https://dds.cn-north-4.myhuaweicloud.com"
            });
        regions["cn-north-1"] = Region("cn-north-1",
            { 
                "https://dds.cn-north-1.myhuaweicloud.com"
            });
        regions["cn-east-2"] = Region("cn-east-2",
            { 
                "https://dds.cn-east-2.myhuaweicloud.com"
            });
        regions["cn-east-3"] = Region("cn-east-3",
            { 
                "https://dds.cn-east-3.myhuaweicloud.com"
            });
        regions["cn-south-1"] = Region("cn-south-1",
            { 
                "https://dds.cn-south-1.myhuaweicloud.com"
            });
        regions["cn-southwest-2"] = Region("cn-southwest-2",
            { 
                "https://dds.cn-southwest-2.myhuaweicloud.com"
            });
        regions["ap-southeast-2"] = Region("ap-southeast-2",
            { 
                "https://dds.ap-southeast-2.myhuaweicloud.com"
            });
        regions["ap-southeast-1"] = Region("ap-southeast-1",
            { 
                "https://dds.ap-southeast-1.myhuaweicloud.com"
            });
        regions["ap-southeast-3"] = Region("ap-southeast-3",
            { 
                "https://dds.ap-southeast-3.myhuaweicloud.com"
            });
        regions["ru-northwest-2"] = Region("ru-northwest-2",
            { 
                "https://dds.ru-northwest-2.myhuaweicloud.com"
            });
        regions["cn-south-2"] = Region("cn-south-2",
            { 
                "https://dds.cn-south-2.myhuaweicloud.com"
            });
        regions["cn-north-2"] = Region("cn-north-2",
            { 
                "https://dds.cn-north-2.myhuaweicloud.com"
            });
        regions["na-mexico-1"] = Region("na-mexico-1",
            { 
                "https://dds.na-mexico-1.myhuaweicloud.com"
            });
        regions["la-north-2"] = Region("la-north-2",
            { 
                "https://dds.la-north-2.myhuaweicloud.com"
            });
        regions["sa-brazil-1"] = Region("sa-brazil-1",
            { 
                "https://dds.sa-brazil-1.myhuaweicloud.com"
            });
        regions["la-south-2"] = Region("la-south-2",
            { 
                "https://dds.la-south-2.myhuaweicloud.com"
            });
        regions["cn-north-9"] = Region("cn-north-9",
            { 
                "https://dds.cn-north-9.myhuaweicloud.com"
            });
        regions["me-east-1"] = Region("me-east-1",
            { 
                "https://dds.me-east-1.myhuaweicloud.com"
            });
        regions["tr-west-1"] = Region("tr-west-1",
            { 
                "https://dds.tr-west-1.myhuaweicloud.com"
            });
        regions["ap-southeast-4"] = Region("ap-southeast-4",
            { 
                "https://dds.ap-southeast-4.myhuaweicloud.com"
            });
        regions["eu-west-0"] = Region("eu-west-0",
            { 
                "https://dds.eu-west-0.myhuaweicloud.com"
            });
        regions["my-kualalumpur-1"] = Region("my-kualalumpur-1",
            { 
                "https://dds.my-kualalumpur-1.myhuaweicloud.com"
            });
        regions["ru-moscow-1"] = Region("ru-moscow-1",
            { 
                "https://dds.ru-moscow-1.myhuaweicloud.com"
            });
        regions["ae-ad-1"] = Region("ae-ad-1",
            { 
                "https://dds.ae-ad-1.myhuaweicloud.com"
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

#endif // HUAWEICLOUD_SDK_DDS_V3_DdsRegion_H_