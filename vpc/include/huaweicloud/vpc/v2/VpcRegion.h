#ifndef HUAWEICLOUD_SDK_VPC_V2_VpcRegion_H_
#define HUAWEICLOUD_SDK_VPC_V2_VpcRegion_H_

#include <huaweicloud/core/auth/Region.h>
#include <huaweicloud/core/exception/SdkException.h>
#include <huaweicloud/vpc/v2/VpcExport.h>
#include <map>
#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
using namespace HuaweiCloud::Sdk::Core::Auth;

class HUAWEICLOUD_VPC_V2_EXPORT VpcRegion {
public:
    VpcRegion();
    virtual ~VpcRegion();

    static Region valueOf(std::string regionId);

    static std::map<std::string, Region> initRegions() {
        std::map<std::string, Region> regions;
        regions["af-south-1"] = Region("af-south-1",
            { 
                "https://vpc.af-south-1.myhuaweicloud.com"
            });
        regions["cn-north-4"] = Region("cn-north-4",
            { 
                "https://vpc.cn-north-4.myhuaweicloud.com"
            });
        regions["cn-north-1"] = Region("cn-north-1",
            { 
                "https://vpc.cn-north-1.myhuaweicloud.com"
            });
        regions["cn-east-2"] = Region("cn-east-2",
            { 
                "https://vpc.cn-east-2.myhuaweicloud.com"
            });
        regions["cn-east-3"] = Region("cn-east-3",
            { 
                "https://vpc.cn-east-3.myhuaweicloud.com"
            });
        regions["cn-south-1"] = Region("cn-south-1",
            { 
                "https://vpc.cn-south-1.myhuaweicloud.com"
            });
        regions["cn-southwest-2"] = Region("cn-southwest-2",
            { 
                "https://vpc.cn-southwest-2.myhuaweicloud.com"
            });
        regions["ap-southeast-2"] = Region("ap-southeast-2",
            { 
                "https://vpc.ap-southeast-2.myhuaweicloud.com"
            });
        regions["cn-north-9"] = Region("cn-north-9",
            { 
                "https://vpc.cn-north-9.myhuaweicloud.com"
            });
        regions["ap-southeast-1"] = Region("ap-southeast-1",
            { 
                "https://vpc.ap-southeast-1.myhuaweicloud.com"
            });
        regions["ap-southeast-3"] = Region("ap-southeast-3",
            { 
                "https://vpc.ap-southeast-3.myhuaweicloud.com"
            });
        regions["sa-brazil-1"] = Region("sa-brazil-1",
            { 
                "https://vpc.sa-brazil-1.myhuaweicloud.com"
            });
        regions["la-north-2"] = Region("la-north-2",
            { 
                "https://vpc.la-north-2.myhuaweicloud.com"
            });
        regions["cn-south-2"] = Region("cn-south-2",
            { 
                "https://vpc.cn-south-2.myhuaweicloud.com"
            });
        regions["cn-north-2"] = Region("cn-north-2",
            { 
                "https://vpc.cn-north-2.myhuaweicloud.com"
            });
        regions["la-south-2"] = Region("la-south-2",
            { 
                "https://vpc.la-south-2.myhuaweicloud.com"
            });
        regions["na-mexico-1"] = Region("na-mexico-1",
            { 
                "https://vpc.na-mexico-1.myhuaweicloud.com"
            });
        regions["ap-southeast-4"] = Region("ap-southeast-4",
            { 
                "https://vpc.ap-southeast-4.myhuaweicloud.com"
            });
        regions["tr-west-1"] = Region("tr-west-1",
            { 
                "https://vpc.tr-west-1.myhuaweicloud.com"
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

#endif // HUAWEICLOUD_SDK_VPC_V2_VpcRegion_H_