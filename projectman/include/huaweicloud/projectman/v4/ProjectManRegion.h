#ifndef HUAWEICLOUD_SDK_PROJECTMAN_V4_ProjectManRegion_H_
#define HUAWEICLOUD_SDK_PROJECTMAN_V4_ProjectManRegion_H_

#include <huaweicloud/core/auth/Region.h>
#include <huaweicloud/core/exception/SdkException.h>
#include <huaweicloud/projectman/v4/ProjectManExport.h>
#include <map>
#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
using namespace HuaweiCloud::Sdk::Core::Auth;

class HUAWEICLOUD_PROJECTMAN_V4_EXPORT ProjectManRegion {
public:
    ProjectManRegion();
    virtual ~ProjectManRegion();

    static Region valueOf(std::string regionId);

    static std::map<std::string, Region> initRegions() {
        std::map<std::string, Region> regions;
        regions["cn-north-4"] = Region("cn-north-4",
            { 
                "https://projectman-ext.cn-north-4.myhuaweicloud.com"
            });
        regions["cn-north-1"] = Region("cn-north-1",
            { 
                "https://projectman-ext.cn-north-1.myhuaweicloud.com"
            });
        regions["cn-east-2"] = Region("cn-east-2",
            { 
                "https://projectman-ext.cn-east-2.myhuaweicloud.com"
            });
        regions["cn-south-1"] = Region("cn-south-1",
            { 
                "https://projectman-ext.cn-south-1.myhuaweicloud.com"
            });
        regions["cn-southwest-2"] = Region("cn-southwest-2",
            { 
                "https://projectman-ext.cn-southwest-2.myhuaweicloud.com"
            });
        regions["cn-east-3"] = Region("cn-east-3",
            { 
                "https://projectman-ext.cn-east-3.myhuaweicloud.com"
            });
        regions["ap-southeast-3"] = Region("ap-southeast-3",
            { 
                "https://projectman-ext.ap-southeast-3.myhuaweicloud.com"
            });
        regions["la-north-2"] = Region("la-north-2",
            { 
                "https://projectman-ext.la-north-2.myhuaweicloud.com"
            });
        regions["sa-brazil-1"] = Region("sa-brazil-1",
            { 
                "https://projectman-ext.sa-brazil-1.myhuaweicloud.com"
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

#endif // HUAWEICLOUD_SDK_PROJECTMAN_V4_ProjectManRegion_H_