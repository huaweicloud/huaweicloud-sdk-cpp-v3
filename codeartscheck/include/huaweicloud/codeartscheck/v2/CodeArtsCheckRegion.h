#ifndef HUAWEICLOUD_SDK_CODEARTSCHECK_V2_CodeArtsCheckRegion_H_
#define HUAWEICLOUD_SDK_CODEARTSCHECK_V2_CodeArtsCheckRegion_H_

#include <huaweicloud/core/auth/Region.h>
#include <huaweicloud/core/exception/SdkException.h>
#include <huaweicloud/codeartscheck/v2/CodeArtsCheckExport.h>
#include <map>
#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartscheck {
namespace V2 {
using namespace HuaweiCloud::Sdk::Core::Auth;

class HUAWEICLOUD_CODEARTSCHECK_V2_EXPORT CodeArtsCheckRegion {
public:
    CodeArtsCheckRegion();
    virtual ~CodeArtsCheckRegion();

    static Region valueOf(std::string regionId);

    static std::map<std::string, Region> initRegions() {
        std::map<std::string, Region> regions;
        regions["cn-north-4"] = Region("cn-north-4",
            { 
                "https://codearts-check.cn-north-4.myhuaweicloud.com",

                "https://codearts-check.cn-north-4.myhuaweicloud.cn"
            });
        regions["cn-north-1"] = Region("cn-north-1",
            { 
                "https://codearts-check.cn-north-1.myhuaweicloud.com",

                "https://codearts-check.cn-north-1.myhuaweicloud.cn"
            });
        regions["cn-east-2"] = Region("cn-east-2",
            { 
                "https://codearts-check.cn-east-2.myhuaweicloud.com",

                "https://codearts-check.cn-east-2.myhuaweicloud.cn"
            });
        regions["cn-south-1"] = Region("cn-south-1",
            { 
                "https://codearts-check.cn-south-1.myhuaweicloud.com",

                "https://codearts-check.cn-south-1.myhuaweicloud.cn"
            });
        regions["cn-east-3"] = Region("cn-east-3",
            { 
                "https://codearts-check.cn-east-3.myhuaweicloud.com",

                "https://codearts-check.cn-east-3.myhuaweicloud.cn"
            });
        regions["la-north-2"] = Region("la-north-2",
            { 
                "https://codearts-check.la-north-2.myhuaweicloud.com"
            });
        regions["sa-brazil-1"] = Region("sa-brazil-1",
            { 
                "https://codearts-check.sa-brazil-1.myhuaweicloud.com"
            });
        regions["ap-southeast-3"] = Region("ap-southeast-3",
            { 
                "https://codearts-check.ap-southeast-3.myhuaweicloud.com"
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

#endif // HUAWEICLOUD_SDK_CODEARTSCHECK_V2_CodeArtsCheckRegion_H_