#ifndef HUAWEICLOUD_SDK_EVS_V2_EvsRegion_H_
#define HUAWEICLOUD_SDK_EVS_V2_EvsRegion_H_

#include <huaweicloud/core/auth/Region.h>
#include <huaweicloud/core/exception/SdkException.h>
#include <huaweicloud/evs/v2/EvsExport.h>
#include <map>
#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Evs {
namespace V2 {
using namespace HuaweiCloud::Sdk::Core::Auth;

class HUAWEICLOUD_EVS_V2_EXPORT EvsRegion {
public:
    EvsRegion();
    virtual ~EvsRegion();

    static Region valueOf(std::string regionId);

    static std::map<std::string, Region> initRegions() {
        std::map<std::string, Region> regions;
        regions["af-south-1"] = Region("af-south-1","https://evs.af-south-1.myhuaweicloud.com") ;
        regions["cn-north-4"] = Region("cn-north-4","https://evs.cn-north-4.myhuaweicloud.com") ;
        regions["cn-north-1"] = Region("cn-north-1","https://evs.cn-north-1.myhuaweicloud.com") ;
        regions["cn-east-2"] = Region("cn-east-2","https://evs.cn-east-2.myhuaweicloud.com") ;
        regions["cn-east-3"] = Region("cn-east-3","https://evs.cn-east-3.myhuaweicloud.com") ;
        regions["cn-south-1"] = Region("cn-south-1","https://evs.cn-south-1.myhuaweicloud.com") ;
        regions["cn-south-2"] = Region("cn-south-2","https://evs.cn-south-2.myhuaweicloud.com") ;
        regions["cn-southwest-2"] = Region("cn-southwest-2","https://evs.cn-southwest-2.myhuaweicloud.com") ;
        regions["ap-southeast-2"] = Region("ap-southeast-2","https://evs.ap-southeast-2.myhuaweicloud.com") ;
        regions["ap-southeast-1"] = Region("ap-southeast-1","https://evs.ap-southeast-1.myhuaweicloud.com") ;
        regions["ap-southeast-3"] = Region("ap-southeast-3","https://evs.ap-southeast-3.myhuaweicloud.com") ;
        return regions;
    }
private:
    static std::map<std::string, Region> regions;
};

}
}
}
}

#endif // HUAWEICLOUD_SDK_EVS_V2_EvsRegion_H_