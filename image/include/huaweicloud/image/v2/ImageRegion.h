#ifndef HUAWEICLOUD_SDK_IMAGE_V2_ImageRegion_H_
#define HUAWEICLOUD_SDK_IMAGE_V2_ImageRegion_H_

#include <huaweicloud/core/auth/Region.h>
#include <huaweicloud/core/exception/SdkException.h>
#include <huaweicloud/image/v2/ImageExport.h>
#include <map>
#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Image {
namespace V2 {
using namespace HuaweiCloud::Sdk::Core::Auth;

class HUAWEICLOUD_IMAGE_V2_EXPORT ImageRegion {
public:
    ImageRegion();
    virtual ~ImageRegion();

    static Region valueOf(std::string regionId);

    static std::map<std::string, Region> initRegions() {
        std::map<std::string, Region> regions;
        regions["cn-north-4"] = Region("cn-north-4",
            { 
                "https://image.cn-north-4.myhuaweicloud.com",

                "https://image.cn-north-4.myhuaweicloud.cn"
            });
        regions["cn-north-1"] = Region("cn-north-1",
            { 
                "https://image.cn-north-1.myhuaweicloud.com",

                "https://image.cn-north-1.myhuaweicloud.cn"
            });
        regions["ap-southeast-1"] = Region("ap-southeast-1",
            { 
                "https://image.ap-southeast-1.myhuaweicloud.com",

                "https://image.ap-southeast-1.myhuaweicloud.cn"
            });
        regions["ap-southeast-3"] = Region("ap-southeast-3",
            { 
                "https://image.ap-southeast-3.myhuaweicloud.com",

                "https://image.ap-southeast-3.myhuaweicloud.cn"
            });
        regions["cn-east-3"] = Region("cn-east-3",
            { 
                "https://image.cn-east-3.myhuaweicloud.com",

                "https://image.cn-east-3.myhuaweicloud.cn"
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

#endif // HUAWEICLOUD_SDK_IMAGE_V2_ImageRegion_H_