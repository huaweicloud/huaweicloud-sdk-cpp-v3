#ifndef HUAWEICLOUD_SDK_IDENTITYCENTERSTORE_V1_IdentityCenterStoreRegion_H_
#define HUAWEICLOUD_SDK_IDENTITYCENTERSTORE_V1_IdentityCenterStoreRegion_H_

#include <huaweicloud/core/auth/Region.h>
#include <huaweicloud/core/exception/SdkException.h>
#include <huaweicloud/identitycenterstore/v1/IdentityCenterStoreExport.h>
#include <map>
#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenterstore {
namespace V1 {
using namespace HuaweiCloud::Sdk::Core::Auth;

class HUAWEICLOUD_IDENTITYCENTERSTORE_V1_EXPORT IdentityCenterStoreRegion {
public:
    IdentityCenterStoreRegion();
    virtual ~IdentityCenterStoreRegion();

    static Region valueOf(std::string regionId);

    static std::map<std::string, Region> initRegions() {
        std::map<std::string, Region> regions;
        regions["cn-east-3"] = Region("cn-east-3",
            { 
                "https://identitystore.cn-east-3.myhuaweicloud.com"
            });
        regions["cn-north-4"] = Region("cn-north-4",
            { 
                "https://identitystore.cn-north-4.myhuaweicloud.com"
            });
        regions["ap-southeast-4"] = Region("ap-southeast-4",
            { 
                "https://identitystore.ap-southeast-4.myhuaweicloud.com"
            });
        regions["ap-southeast-3"] = Region("ap-southeast-3",
            { 
                "https://identitystore.ap-southeast-3.myhuaweicloud.com"
            });
        regions["ap-southeast-2"] = Region("ap-southeast-2",
            { 
                "https://identitystore.ap-southeast-2.myhuaweicloud.com"
            });
        regions["la-south-2"] = Region("la-south-2",
            { 
                "https://identitystore.la-south-2.myhuaweicloud.com"
            });
        regions["af-south-1"] = Region("af-south-1",
            { 
                "https://identitystore.af-south-1.myhuaweicloud.com"
            });
        regions["ap-southeast-1"] = Region("ap-southeast-1",
            { 
                "https://identitystore.ap-southeast-1.myhuaweicloud.com"
            });
        regions["cn-south-4"] = Region("cn-south-4",
            { 
                "https://identitystore.cn-south-4.myhuaweicloud.com"
            });
        regions["me-east-1"] = Region("me-east-1",
            { 
                "https://identitystore.me-east-1.myhuaweicloud.com"
            });
        regions["tr-west-1"] = Region("tr-west-1",
            { 
                "https://identitystore.tr-west-1.myhuaweicloud.com"
            });
        regions["la-north-2"] = Region("la-north-2",
            { 
                "https://identitystore.la-north-2.myhuaweicloud.com"
            });
        regions["sa-brazil-1"] = Region("sa-brazil-1",
            { 
                "https://identitystore.sa-brazil-1.myhuaweicloud.com"
            });
        regions["cn-south-1"] = Region("cn-south-1",
            { 
                "https://identitystore.cn-south-1.myhuaweicloud.com"
            });
        regions["cn-southwest-2"] = Region("cn-southwest-2",
            { 
                "https://identitystore.cn-southwest-2.myhuaweicloud.com"
            });
        regions["af-north-1"] = Region("af-north-1",
            { 
                "https://identitystore.af-north-1.myhuaweicloud.com"
            });
        regions["ap-southeast-5"] = Region("ap-southeast-5",
            { 
                "https://identitystore.ap-southeast-5.myhuaweicloud.com"
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

#endif // HUAWEICLOUD_SDK_IDENTITYCENTERSTORE_V1_IdentityCenterStoreRegion_H_