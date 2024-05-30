#ifndef HUAWEICLOUD_SDK_ORGANIZATIONS_V1_OrganizationsRegion_H_
#define HUAWEICLOUD_SDK_ORGANIZATIONS_V1_OrganizationsRegion_H_

#include <huaweicloud/core/auth/Region.h>
#include <huaweicloud/core/exception/SdkException.h>
#include <huaweicloud/organizations/v1/OrganizationsExport.h>
#include <map>
#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Organizations {
namespace V1 {
using namespace HuaweiCloud::Sdk::Core::Auth;

class HUAWEICLOUD_ORGANIZATIONS_V1_EXPORT OrganizationsRegion {
public:
    OrganizationsRegion();
    virtual ~OrganizationsRegion();

    static Region valueOf(std::string regionId);

    static std::map<std::string, Region> initRegions() {
        std::map<std::string, Region> regions;
        regions["cn-north-4"] = Region("cn-north-4",
            { 
                "https://organizations.myhuaweicloud.com"
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

#endif // HUAWEICLOUD_SDK_ORGANIZATIONS_V1_OrganizationsRegion_H_