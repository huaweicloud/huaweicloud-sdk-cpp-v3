#ifndef HUAWEICLOUD_SDK_CSMS_V1_CsmsRegion_H_
#define HUAWEICLOUD_SDK_CSMS_V1_CsmsRegion_H_

#include <huaweicloud/core/auth/Region.h>
#include <huaweicloud/core/exception/SdkException.h>
#include <huaweicloud/csms/v1/CsmsExport.h>
#include <map>
#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Csms {
namespace V1 {
using namespace HuaweiCloud::Sdk::Core::Auth;

class HUAWEICLOUD_CSMS_V1_EXPORT CsmsRegion {
public:
    CsmsRegion();
    virtual ~CsmsRegion();

    static Region valueOf(std::string regionId);

    static std::map<std::string, Region> initRegions() {
        std::map<std::string, Region> regions;
        regions["cn-north-4"] = Region("cn-north-4","https://kms.cn-north-4.myhuaweicloud.com") ;
        regions["cn-north-1"] = Region("cn-north-1","https://kms.cn-north-1.myhuaweicloud.com") ;
        regions["cn-east-2"] = Region("cn-east-2","https://kms.cn-east-2.myhuaweicloud.com") ;
        regions["cn-east-3"] = Region("cn-east-3","https://kms.cn-east-3.myhuaweicloud.com") ;
        regions["cn-south-1"] = Region("cn-south-1","https://kms.cn-south-1.myhuaweicloud.com") ;
        regions["cn-southwest-2"] = Region("cn-southwest-2","https://kms.cn-southwest-2.myhuaweicloud.com") ;
        regions["ap-southeast-1"] = Region("ap-southeast-1","https://kms.ap-southeast-1.myhuaweicloud.com") ;
        regions["ap-southeast-3"] = Region("ap-southeast-3","https://kms.ap-southeast-3.myhuaweicloud.com") ;
        return regions;
    }
private:
    static std::map<std::string, Region> regions;
};

}
}
}
}

#endif // HUAWEICLOUD_SDK_CSMS_V1_CsmsRegion_H_