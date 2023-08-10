#ifndef HUAWEICLOUD_SDK_CODEARTSDEPLOY_V2_CodeArtsDeployRegion_H_
#define HUAWEICLOUD_SDK_CODEARTSDEPLOY_V2_CodeArtsDeployRegion_H_

#include <huaweicloud/core/auth/Region.h>
#include <huaweicloud/core/exception/SdkException.h>
#include <huaweicloud/codeartsdeploy/v2/CodeArtsDeployExport.h>
#include <map>
#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsdeploy {
namespace V2 {
using namespace HuaweiCloud::Sdk::Core::Auth;

class HUAWEICLOUD_CODEARTSDEPLOY_V2_EXPORT CodeArtsDeployRegion {
public:
    CodeArtsDeployRegion();
    virtual ~CodeArtsDeployRegion();

    static Region valueOf(std::string regionId);

    static std::map<std::string, Region> initRegions() {
        std::map<std::string, Region> regions;
        regions["ap-southeast-3"] = Region("ap-southeast-3",
            { 
                "https://codearts-deploy.ap-southeast-3.myhuaweicloud.com"
            });
        regions["cn-south-1"] = Region("cn-south-1",
            { 
                "https://codearts-deploy.cn-south-1.myhuaweicloud.com"
            });
        regions["cn-east-3"] = Region("cn-east-3",
            { 
                "https://codearts-deploy.cn-east-3.myhuaweicloud.com"
            });
        regions["cn-east-2"] = Region("cn-east-2",
            { 
                "https://codearts-deploy.cn-east-2.myhuaweicloud.com"
            });
        regions["cn-north-1"] = Region("cn-north-1",
            { 
                "https://codearts-deploy.cn-north-1.myhuaweicloud.com"
            });
        regions["cn-north-4"] = Region("cn-north-4",
            { 
                "https://codearts-deploy.cn-north-4.myhuaweicloud.com"
            });
        regions["sa-brazil-1"] = Region("sa-brazil-1",
            { 
                "https://codearts-deploy.sa-brazil-1.myhuaweicloud.com"
            });
        regions["la-north-2"] = Region("la-north-2",
            { 
                "https://codearts-deploy.la-north-2.myhuaweicloud.com"
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

#endif // HUAWEICLOUD_SDK_CODEARTSDEPLOY_V2_CodeArtsDeployRegion_H_