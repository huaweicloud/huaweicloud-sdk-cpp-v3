#ifndef HUAWEICLOUD_SDK_CODEARTSBUILD_V3_CodeArtsBuildRegion_H_
#define HUAWEICLOUD_SDK_CODEARTSBUILD_V3_CodeArtsBuildRegion_H_

#include <huaweicloud/core/auth/Region.h>
#include <huaweicloud/core/exception/SdkException.h>
#include <huaweicloud/codeartsbuild/v3/CodeArtsBuildExport.h>
#include <map>
#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
using namespace HuaweiCloud::Sdk::Core::Auth;

class HUAWEICLOUD_CODEARTSBUILD_V3_EXPORT CodeArtsBuildRegion {
public:
    CodeArtsBuildRegion();
    virtual ~CodeArtsBuildRegion();

    static Region valueOf(std::string regionId);

    static std::map<std::string, Region> initRegions() {
        std::map<std::string, Region> regions;
        regions["cn-north-4"] = Region("cn-north-4",
            { 
                "https://cloudbuild-ext.cn-north-4.myhuaweicloud.com"
            });
        regions["cn-north-1"] = Region("cn-north-1",
            { 
                "https://cloudbuild-ext.cn-north-1.myhuaweicloud.com"
            });
        regions["cn-east-2"] = Region("cn-east-2",
            { 
                "https://cloudbuild-ext.cn-east-2.myhuaweicloud.com"
            });
        regions["cn-south-1"] = Region("cn-south-1",
            { 
                "https://cloudbuild-ext.cn-south-1.myhuaweicloud.com"
            });
        regions["cn-east-3"] = Region("cn-east-3",
            { 
                "https://cloudbuild-ext.cn-east-3.myhuaweicloud.com"
            });
        regions["cn-south-2"] = Region("cn-south-2",
            { 
                "https://cloudbuild-ext.cn-south-2.myhuaweicloud.com"
            });
        regions["cn-southwest-2"] = Region("cn-southwest-2",
            { 
                "https://cloudbuild-ext.cn-southwest-2.myhuaweicloud.com"
            });
        regions["ap-southeast-3"] = Region("ap-southeast-3",
            { 
                "https://cloudbuild-ext.ap-southeast-3.myhuaweicloud.com"
            });
        regions["sa-brazil-1"] = Region("sa-brazil-1",
            { 
                "https://cloudbuild-ext.sa-brazil-1.myhuaweicloud.com"
            });
        regions["la-north-2"] = Region("la-north-2",
            { 
                "https://cloudbuild-ext.la-north-2.myhuaweicloud.com"
            });
        regions["la-south-2"] = Region("la-south-2",
            { 
                "https://cloudbuild-ext.la-south-2.myhuaweicloud.com"
            });
        regions["tr-west-1"] = Region("tr-west-1",
            { 
                "https://cloudbuild-ext.tr-west-1.myhuaweicloud.com"
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

#endif // HUAWEICLOUD_SDK_CODEARTSBUILD_V3_CodeArtsBuildRegion_H_