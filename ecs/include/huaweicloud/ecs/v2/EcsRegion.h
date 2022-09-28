#ifndef HUAWEICLOUD_SDK_ECS_V2_EcsRegion_H_
#define HUAWEICLOUD_SDK_ECS_V2_EcsRegion_H_

#include <huaweicloud/core/auth/Region.h>
#include <huaweicloud/core/exception/SdkException.h>
#include <huaweicloud/ecs/v2/EcsExport.h>
#include <map>
#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
using namespace HuaweiCloud::Sdk::Core::Auth;

class HUAWEICLOUD_ECS_V2_EXPORT EcsRegion {
public:
    EcsRegion();
    virtual ~EcsRegion();

    static Region valueOf(std::string regionId);

    static std::map<std::string, Region> initRegions() {
        std::map<std::string, Region> regions;
        regions["cn-north-1"] = Region("cn-north-1","https://ecs.cn-north-1.myhuaweicloud.com") ;
        regions["cn-north-4"] = Region("cn-north-4","https://ecs.cn-north-4.myhuaweicloud.com") ;
        regions["cn-south-1"] = Region("cn-south-1","https://ecs.cn-south-1.myhuaweicloud.com") ;
        regions["cn-east-2"] = Region("cn-east-2","https://ecs.cn-east-2.myhuaweicloud.com") ;
        regions["cn-east-3"] = Region("cn-east-3","https://ecs.cn-east-3.myhuaweicloud.com") ;
        regions["cn-southwest-2"] = Region("cn-southwest-2","https://ecs.cn-southwest-2.myhuaweicloud.com") ;
        regions["ap-southeast-1"] = Region("ap-southeast-1","https://ecs.ap-southeast-1.myhuaweicloud.com") ;
        regions["ap-southeast-2"] = Region("ap-southeast-2","https://ecs.ap-southeast-2.myhuaweicloud.com") ;
        regions["ap-southeast-3"] = Region("ap-southeast-3","https://ecs.ap-southeast-3.myhuaweicloud.com") ;
        regions["af-south-1"] = Region("af-south-1","https://ecs.af-south-1.myhuaweicloud.com") ;
        regions["sa-brazil-1"] = Region("sa-brazil-1","https://ecs.sa-brazil-1.myhuaweicloud.com") ;
        regions["la-north-2"] = Region("la-north-2","https://ecs.la-north-2.myhuaweicloud.com") ;
        regions["cn-south-4"] = Region("cn-south-4","https://ecs.cn-south-4.myhuaweicloud.com") ;
        regions["na-mexico-1"] = Region("na-mexico-1","https://ecs.na-mexico-1.myhuaweicloud.com") ;
        regions["la-south-2"] = Region("la-south-2","https://ecs.la-south-2.myhuaweicloud.com") ;
        regions["cn-south-2"] = Region("cn-south-2","https://ecs.cn-south-2.myhuaweicloud.com") ;
        regions["cn-north-9"] = Region("cn-north-9","https://ecs.cn-north-9.myhuaweicloud.com") ;
        regions["cn-north-2"] = Region("cn-north-2","https://ecs.cn-north-2.myhuaweicloud.com") ;
        return regions;
    }
private:
    static std::map<std::string, Region> regions;
};

}
}
}
}

#endif // HUAWEICLOUD_SDK_ECS_V2_EcsRegion_H_