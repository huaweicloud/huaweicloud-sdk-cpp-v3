#ifndef HUAWEICLOUD_SDK_CLOUDTABLE_V2_CloudTableRegion_H_
#define HUAWEICLOUD_SDK_CLOUDTABLE_V2_CloudTableRegion_H_

#include <huaweicloud/core/auth/Region.h>
#include <huaweicloud/core/exception/SdkException.h>
#include <huaweicloud/cloudtable/v2/CloudtableExport.h>
#include <map>
#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtable {
namespace V2 {
using namespace HuaweiCloud::Sdk::Core::Auth;

class HUAWEICLOUD_CLOUDTABLE_V2_EXPORT CloudTableRegion {
public:
    CloudTableRegion();
    virtual ~CloudTableRegion();

    static Region valueOf(std::string regionId);

    static std::map<std::string, Region> initRegions() {
        std::map<std::string, Region> regions;
        regions["cn-north-4"] = Region("cn-north-4",
            { 
                "https://cloudtable.cn-north-4.myhuaweicloud.com"
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

#endif // HUAWEICLOUD_SDK_CLOUDTABLE_V2_CloudTableRegion_H_