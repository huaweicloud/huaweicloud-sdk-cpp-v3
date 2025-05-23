#ifndef HUAWEICLOUD_SDK_OCR_V1_OcrRegion_H_
#define HUAWEICLOUD_SDK_OCR_V1_OcrRegion_H_

#include <huaweicloud/core/auth/Region.h>
#include <huaweicloud/core/exception/SdkException.h>
#include <huaweicloud/ocr/v1/OcrExport.h>
#include <map>
#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Ocr {
namespace V1 {
using namespace HuaweiCloud::Sdk::Core::Auth;

class HUAWEICLOUD_OCR_V1_EXPORT OcrRegion {
public:
    OcrRegion();
    virtual ~OcrRegion();

    static Region valueOf(std::string regionId);

    static std::map<std::string, Region> initRegions() {
        std::map<std::string, Region> regions;
        regions["cn-north-4"] = Region("cn-north-4",
            { 
                "https://ocr.cn-north-4.myhuaweicloud.com",

                "https://ocr.cn-north-4.myhuaweicloud.cn"
            });
        regions["cn-south-1"] = Region("cn-south-1",
            { 
                "https://ocr.cn-south-1.myhuaweicloud.com",

                "https://ocr.cn-south-1.myhuaweicloud.cn"
            });
        regions["cn-east-3"] = Region("cn-east-3",
            { 
                "https://ocr.cn-east-3.myhuaweicloud.com",

                "https://ocr.cn-east-3.myhuaweicloud.cn"
            });
        regions["cn-north-1"] = Region("cn-north-1",
            { 
                "https://ocr.cn-north-1.myhuaweicloud.com",

                "https://ocr.cn-north-1.myhuaweicloud.cn"
            });
        regions["ap-southeast-2"] = Region("ap-southeast-2",
            { 
                "https://ocr.ap-southeast-2.myhuaweicloud.com",

                "https://ocr.ap-southeast-2.myhuaweicloud.cn"
            });
        regions["cn-southwest-2"] = Region("cn-southwest-2",
            { 
                "https://ocr.cn-southwest-2.myhuaweicloud.com",

                "https://ocr.cn-southwest-2.myhuaweicloud.cn"
            });
        regions["ap-southeast-1"] = Region("ap-southeast-1",
            { 
                "https://ocr.ap-southeast-1.myhuaweicloud.com",

                "https://ocr.ap-southeast-1.myhuaweicloud.cn"
            });
        regions["ap-southeast-3"] = Region("ap-southeast-3",
            { 
                "https://ocr.ap-southeast-3.myhuaweicloud.com",

                "https://ocr.ap-southeast-3.myhuaweicloud.cn"
            });
        regions["la-south-2"] = Region("la-south-2",
            { 
                "https://ocr.la-south-2.myhuaweicloud.com",

                "https://ocr.la-south-2.myhuaweicloud.cn"
            });
        regions["af-south-1"] = Region("af-south-1",
            { 
                "https://ocr.af-south-1.myhuaweicloud.com",

                "https://ocr.af-south-1.myhuaweicloud.cn"
            });
        regions["la-north-2"] = Region("la-north-2",
            { 
                "https://ocr.la-north-2.myhuaweicloud.com"
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

#endif // HUAWEICLOUD_SDK_OCR_V1_OcrRegion_H_