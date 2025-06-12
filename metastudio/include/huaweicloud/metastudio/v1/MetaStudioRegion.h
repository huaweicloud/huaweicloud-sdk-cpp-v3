#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MetaStudioRegion_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MetaStudioRegion_H_

#include <huaweicloud/core/auth/Region.h>
#include <huaweicloud/core/exception/SdkException.h>
#include <huaweicloud/metastudio/v1/MetaStudioExport.h>
#include <map>
#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
using namespace HuaweiCloud::Sdk::Core::Auth;

class HUAWEICLOUD_METASTUDIO_V1_EXPORT MetaStudioRegion {
public:
    MetaStudioRegion();
    virtual ~MetaStudioRegion();

    static Region valueOf(std::string regionId);

    static std::map<std::string, Region> initRegions() {
        std::map<std::string, Region> regions;
        regions["cn-north-4"] = Region("cn-north-4",
            { 
                "https://metastudio.cn-north-4.myhuaweicloud.com"
            });
        regions["cn-east-3"] = Region("cn-east-3",
            { 
                "https://metastudio.cn-east-3.myhuaweicloud.com"
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

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MetaStudioRegion_H_