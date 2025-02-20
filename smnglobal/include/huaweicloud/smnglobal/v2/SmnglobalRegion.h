#ifndef HUAWEICLOUD_SDK_SMNGLOBAL_V2_SmnglobalRegion_H_
#define HUAWEICLOUD_SDK_SMNGLOBAL_V2_SmnglobalRegion_H_

#include <huaweicloud/core/auth/Region.h>
#include <huaweicloud/core/exception/SdkException.h>
#include <huaweicloud/smnglobal/v2/SmnglobalExport.h>
#include <map>
#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Smnglobal {
namespace V2 {
using namespace HuaweiCloud::Sdk::Core::Auth;

class HUAWEICLOUD_SMNGLOBAL_V2_EXPORT SmnglobalRegion {
public:
    SmnglobalRegion();
    virtual ~SmnglobalRegion();

    static Region valueOf(std::string regionId);

    static std::map<std::string, Region> initRegions() {
        std::map<std::string, Region> regions;
        regions["cn-north-4"] = Region("cn-north-4",
            { 
                "https://smn-global.myhuaweicloud.com"
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

#endif // HUAWEICLOUD_SDK_SMNGLOBAL_V2_SmnglobalRegion_H_