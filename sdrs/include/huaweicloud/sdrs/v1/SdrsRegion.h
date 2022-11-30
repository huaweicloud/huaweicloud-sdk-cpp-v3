#ifndef HUAWEICLOUD_SDK_SDRS_V1_SdrsRegion_H_
#define HUAWEICLOUD_SDK_SDRS_V1_SdrsRegion_H_

#include <huaweicloud/core/auth/Region.h>
#include <huaweicloud/core/exception/SdkException.h>
#include <huaweicloud/sdrs/v1/SdrsExport.h>
#include <map>
#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Sdrs {
namespace V1 {
using namespace HuaweiCloud::Sdk::Core::Auth;

class HUAWEICLOUD_SDRS_V1_EXPORT SdrsRegion {
public:
    SdrsRegion();
    virtual ~SdrsRegion();

    static Region valueOf(std::string regionId);

    static std::map<std::string, Region> initRegions() {
        std::map<std::string, Region> regions;
        regions["ap-southeast-3"] = Region("ap-southeast-3","https://sdrs.ap-southeast-3.myhuaweicloud.com") ;
        regions["cn-north-4"] = Region("cn-north-4","https://sdrs.cn-north-4.myhuaweicloud.com") ;
        regions["ap-southeast-2"] = Region("ap-southeast-2","https://sdrs.ap-southeast-3.myhuaweicloud.com") ;
        regions["cn-south-1"] = Region("cn-south-1","https://sdrs.cn-south-1.myhuaweicloud.com") ;
        regions["cn-east-2"] = Region("cn-east-2","https://sdrs.cn-east-2.myhuaweicloud.com") ;
        regions["cn-east-3"] = Region("cn-east-3","https://sdrs.cn-east-3.myhuaweicloud.com") ;
        regions["af-south-1"] = Region("af-south-1","https://sdrs.af-south-1.myhuaweicloud.com") ;
        return regions;
    }
private:
    static std::map<std::string, Region> regions;
};

}
}
}
}

#endif // HUAWEICLOUD_SDK_SDRS_V1_SdrsRegion_H_