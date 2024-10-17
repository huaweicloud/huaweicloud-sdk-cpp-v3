#ifndef HUAWEICLOUD_SDK_DBSS_V1_DbssRegion_H_
#define HUAWEICLOUD_SDK_DBSS_V1_DbssRegion_H_

#include <huaweicloud/core/auth/Region.h>
#include <huaweicloud/core/exception/SdkException.h>
#include <huaweicloud/dbss/v1/DbssExport.h>
#include <map>
#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
using namespace HuaweiCloud::Sdk::Core::Auth;

class HUAWEICLOUD_DBSS_V1_EXPORT DbssRegion {
public:
    DbssRegion();
    virtual ~DbssRegion();

    static Region valueOf(std::string regionId);

    static std::map<std::string, Region> initRegions() {
        std::map<std::string, Region> regions;
        regions["cn-south-2"] = Region("cn-south-2",
            { 
                "https://dbss.cn-south-2.myhuaweicloud.com"
            });
        regions["cn-southwest-2"] = Region("cn-southwest-2",
            { 
                "https://dbss.cn-southwest-2.myhuaweicloud.com"
            });
        regions["ap-southeast-1"] = Region("ap-southeast-1",
            { 
                "https://dbss.ap-southeast-1.myhuaweicloud.com"
            });
        regions["cn-east-3"] = Region("cn-east-3",
            { 
                "https://dbss.cn-east-3.myhuaweicloud.com"
            });
        regions["cn-south-1"] = Region("cn-south-1",
            { 
                "https://dbss.cn-south-1.myhuaweicloud.com"
            });
        regions["cn-east-2"] = Region("cn-east-2",
            { 
                "https://dbss.cn-east-2.myhuaweicloud.com"
            });
        regions["ap-southeast-3"] = Region("ap-southeast-3",
            { 
                "https://dbss.ap-southeast-3.myhuaweicloud.com"
            });
        regions["ap-southeast-2"] = Region("ap-southeast-2",
            { 
                "https://dbss.ap-southeast-2.myhuaweicloud.com"
            });
        regions["ru-northwest-2"] = Region("ru-northwest-2",
            { 
                "https://dbss.ru-northwest-2.myhuaweicloud.com"
            });
        regions["af-south-1"] = Region("af-south-1",
            { 
                "https://dbss.af-south-1.myhuaweicloud.com"
            });
        regions["sa-brazil-1"] = Region("sa-brazil-1",
            { 
                "https://dbss.sa-brazil-1.myhuaweicloud.com"
            });
        regions["la-north-2"] = Region("la-north-2",
            { 
                "https://dbss.la-north-2.myhuaweicloud.com"
            });
        regions["cn-north-1"] = Region("cn-north-1",
            { 
                "https://dbss.cn-north-1.myhuaweicloud.com"
            });
        regions["cn-north-4"] = Region("cn-north-4",
            { 
                "https://dbss.cn-north-4.myhuaweicloud.com"
            });
        regions["cn-north-2"] = Region("cn-north-2",
            { 
                "https://dbss.cn-north-2.myhuaweicloud.com"
            });
        regions["la-south-2"] = Region("la-south-2",
            { 
                "https://dbss.la-south-2.myhuaweicloud.com"
            });
        regions["cn-north-9"] = Region("cn-north-9",
            { 
                "https://dbss.cn-north-9.myhuaweicloud.com"
            });
        regions["cn-north-11"] = Region("cn-north-11",
            { 
                "https://dbss.cn-north-11.myhuaweicloud.com"
            });
        regions["me-east-1"] = Region("me-east-1",
            { 
                "https://dbss.me-east-1.myhuaweicloud.com"
            });
        regions["cn-south-4"] = Region("cn-south-4",
            { 
                "https://dbss.cn-south-4.myhuaweicloud.com"
            });
        regions["ap-southeast-4"] = Region("ap-southeast-4",
            { 
                "https://dbss.ap-southeast-4.myhuaweicloud.com"
            });
        regions["tr-west-1"] = Region("tr-west-1",
            { 
                "https://dbss.tr-west-1.myhuaweicloud.com"
            });
        regions["cn-east-5"] = Region("cn-east-5",
            { 
                "https://dbss.cn-east-5.myhuaweicloud.com"
            });
        regions["my-kualalumpur-1"] = Region("my-kualalumpur-1",
            { 
                "https://dbss.my-kualalumpur-1.myhuaweicloud.com"
            });
        regions["ru-moscow-1"] = Region("ru-moscow-1",
            { 
                "https://dbss.ru-moscow-1.myhuaweicloud.com"
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

#endif // HUAWEICLOUD_SDK_DBSS_V1_DbssRegion_H_