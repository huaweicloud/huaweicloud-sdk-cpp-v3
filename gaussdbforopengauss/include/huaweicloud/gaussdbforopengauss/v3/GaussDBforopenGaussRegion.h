#ifndef HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_GaussDBforopenGaussRegion_H_
#define HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_GaussDBforopenGaussRegion_H_

#include <huaweicloud/core/auth/Region.h>
#include <huaweicloud/core/exception/SdkException.h>
#include <huaweicloud/gaussdbforopengauss/v3/GaussDBforopenGaussExport.h>
#include <map>
#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
using namespace HuaweiCloud::Sdk::Core::Auth;

class HUAWEICLOUD_GAUSSDBFOROPENGAUSS_V3_EXPORT GaussDBforopenGaussRegion {
public:
    GaussDBforopenGaussRegion();
    virtual ~GaussDBforopenGaussRegion();

    static Region valueOf(std::string regionId);

    static std::map<std::string, Region> initRegions() {
        std::map<std::string, Region> regions;
        regions["cn-north-4"] = Region("cn-north-4",
            { 
                "https://gaussdb-opengauss.cn-north-4.myhuaweicloud.com"
            });
        regions["cn-southwest-2"] = Region("cn-southwest-2",
            { 
                "https://gaussdb-opengauss.cn-southwest-2.myhuaweicloud.com"
            });
        regions["cn-south-1"] = Region("cn-south-1",
            { 
                "https://gaussdb-opengauss.cn-south-1.myhuaweicloud.com"
            });
        regions["ru-northwest-2"] = Region("ru-northwest-2",
            { 
                "https://gaussdb-opengauss.ru-northwest-2.myhuaweicloud.com"
            });
        regions["ap-southeast-3"] = Region("ap-southeast-3",
            { 
                "https://gaussdb-opengauss.ap-southeast-3.myhuaweicloud.com"
            });
        regions["cn-north-2"] = Region("cn-north-2",
            { 
                "https://gaussdb-opengauss.cn-north-2.myhuaweicloud.com"
            });
        regions["ap-southeast-2"] = Region("ap-southeast-2",
            { 
                "https://gaussdb-opengauss.ap-southeast-2.myhuaweicloud.com"
            });
        regions["ap-southeast-1"] = Region("ap-southeast-1",
            { 
                "https://gaussdb-opengauss.ap-southeast-1.myhuaweicloud.com"
            });
        regions["cn-east-3"] = Region("cn-east-3",
            { 
                "https://gaussdb-opengauss.cn-east-3.myhuaweicloud.com"
            });
        regions["sa-brazil-1"] = Region("sa-brazil-1",
            { 
                "https://gaussdb-opengauss.sa-brazil-1.myhuaweicloud.com"
            });
        regions["la-south-2"] = Region("la-south-2",
            { 
                "https://gaussdb-opengauss.la-south-2.myhuaweicloud.com"
            });
        regions["la-north-2"] = Region("la-north-2",
            { 
                "https://gaussdb-opengauss.la-north-2.myhuaweicloud.com"
            });
        regions["af-south-1"] = Region("af-south-1",
            { 
                "https://gaussdb-opengauss.af-south-1.myhuaweicloud.com"
            });
        regions["cn-north-9"] = Region("cn-north-9",
            { 
                "https://gaussdb-opengauss.cn-north-9.myhuaweicloud.com"
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

#endif // HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_GaussDBforopenGaussRegion_H_