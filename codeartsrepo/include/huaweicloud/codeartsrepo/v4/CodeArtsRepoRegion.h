#ifndef HUAWEICLOUD_SDK_CODEARTSREPO_V4_CodeArtsRepoRegion_H_
#define HUAWEICLOUD_SDK_CODEARTSREPO_V4_CodeArtsRepoRegion_H_

#include <huaweicloud/core/auth/Region.h>
#include <huaweicloud/core/exception/SdkException.h>
#include <huaweicloud/codeartsrepo/v4/CodeArtsRepoExport.h>
#include <map>
#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
using namespace HuaweiCloud::Sdk::Core::Auth;

class HUAWEICLOUD_CODEARTSREPO_V4_EXPORT CodeArtsRepoRegion {
public:
    CodeArtsRepoRegion();
    virtual ~CodeArtsRepoRegion();

    static Region valueOf(std::string regionId);

    static std::map<std::string, Region> initRegions() {
        std::map<std::string, Region> regions;
        regions["cn-east-2"] = Region("cn-east-2",
            { 
                "https://codehub-ext.cn-east-2.myhuaweicloud.com"
            });
        regions["cn-south-1"] = Region("cn-south-1",
            { 
                "https://codehub-ext.cn-south-1.myhuaweicloud.com"
            });
        regions["cn-east-3"] = Region("cn-east-3",
            { 
                "https://codehub-ext.cn-east-3.myhuaweicloud.com"
            });
        regions["cn-north-4"] = Region("cn-north-4",
            { 
                "https://codehub-ext.cn-north-4.myhuaweicloud.com"
            });
        regions["cn-north-1"] = Region("cn-north-1",
            { 
                "https://codehub-ext.cn-north-1.myhuaweicloud.com"
            });
        regions["cn-south-2"] = Region("cn-south-2",
            { 
                "https://codehub-ext.cn-south-2.myhuaweicloud.com"
            });
        regions["cn-southwest-2"] = Region("cn-southwest-2",
            { 
                "https://codehub-ext.cn-southwest-2.myhuaweicloud.com"
            });
        regions["sa-brazil-1"] = Region("sa-brazil-1",
            { 
                "https://codehub-ext.sa-brazil-1.myhuaweicloud.com"
            });
        regions["la-north-2"] = Region("la-north-2",
            { 
                "https://codehub-ext.la-north-2.myhuaweicloud.com"
            });
        regions["ap-southeast-3"] = Region("ap-southeast-3",
            { 
                "https://codehub-ext.ap-southeast-3.myhuaweicloud.com"
            });
        regions["la-south-2"] = Region("la-south-2",
            { 
                "https://codeartsrepo-ext.la-south-2.myhuaweicloud.com"
            });
        regions["me-east-1"] = Region("me-east-1",
            { 
                "https://repo.me-east-1.myhuaweicloud.com"
            });
        regions["tr-west-1"] = Region("tr-west-1",
            { 
                "https://codeartsrepo-ext.tr-west-1.myhuaweicloud.com"
            });
        regions["af-south-1"] = Region("af-south-1",
            { 
                "https://repo.af-south-1.myhuaweicloud.com"
            });
        regions["af-north-1"] = Region("af-north-1",
            { 
                "https://repo.af-north-1.myhuaweicloud.com"
            });
        regions["eu-west-101"] = Region("eu-west-101",
            { 
                "https://codeartsrepo-ext.eu-west-101.myhuaweicloud.com"
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

#endif // HUAWEICLOUD_SDK_CODEARTSREPO_V4_CodeArtsRepoRegion_H_