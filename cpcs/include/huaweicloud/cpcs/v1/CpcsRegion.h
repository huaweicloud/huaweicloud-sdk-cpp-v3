#ifndef HUAWEICLOUD_SDK_CPCS_V1_CpcsRegion_H_
#define HUAWEICLOUD_SDK_CPCS_V1_CpcsRegion_H_

#include <huaweicloud/core/auth/Region.h>
#include <huaweicloud/core/exception/SdkException.h>
#include <huaweicloud/cpcs/v1/CpcsExport.h>
#include <map>
#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Cpcs {
namespace V1 {
using namespace HuaweiCloud::Sdk::Core::Auth;

class HUAWEICLOUD_CPCS_V1_EXPORT CpcsRegion {
public:
    CpcsRegion();
    virtual ~CpcsRegion();

    static Region valueOf(std::string regionId);

    static std::map<std::string, Region> initRegions() {
        std::map<std::string, Region> regions;
        regions["cn-north-9"] = Region("cn-north-9",
            { 
                "https://kms.cn-north-9.myhuaweicloud.com"
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

#endif // HUAWEICLOUD_SDK_CPCS_V1_CpcsRegion_H_