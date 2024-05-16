#ifndef HUAWEICLOUD_SDK_KVS_V1_KvsRegion_H_
#define HUAWEICLOUD_SDK_KVS_V1_KvsRegion_H_

#include <huaweicloud/core/auth/Region.h>
#include <huaweicloud/core/exception/SdkException.h>
#include <huaweicloud/kvs/v1/KvsExport.h>
#include <map>
#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Kvs {
namespace V1 {
using namespace HuaweiCloud::Sdk::Core::Auth;

class HUAWEICLOUD_KVS_V1_EXPORT KvsRegion {
public:
    KvsRegion();
    virtual ~KvsRegion();

    static Region valueOf(std::string regionId);

    static std::map<std::string, Region> initRegions() {
        std::map<std::string, Region> regions;
        regions["cn-north-4"] = Region("cn-north-4",
            { 
                "https://kvs.cn-north-4.myhuaweicloud.com"
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

#endif // HUAWEICLOUD_SDK_KVS_V1_KvsRegion_H_