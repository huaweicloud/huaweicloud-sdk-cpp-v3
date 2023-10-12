
#ifndef HUAWEICLOUD_SDK_LIVE_V2_MODEL_TranscodeSummary_H_
#define HUAWEICLOUD_SDK_LIVE_V2_MODEL_TranscodeSummary_H_


#include <huaweicloud/live/v2/LiveExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_LIVE_V2_EXPORT  TranscodeSummary
    : public ModelBase
{
public:
    TranscodeSummary();
    virtual ~TranscodeSummary();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// TranscodeSummary members

    /// <summary>
    /// 转码规格，格式是“编码格式_分辨率档位”（未开启高清低码）和“编码格式_PVC_分辨率档位”（开启高清低码）。  其中编码格式包括H264、H265，分辨率档位包括：  4K（3840 x 2160）及以下，2K（2560 x 1440）及以下，FHD（1920 x 1080）及以下，HD（1280 x 720）及以下，SD（640 x 480）及以下。 
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// 总转码时长，单位为分钟，保留两位小数。
    /// </summary>

    double getValue() const;
    bool valueIsSet() const;
    void unsetvalue();
    void setValue(double value);


protected:
    std::string type_;
    bool typeIsSet_;
    double value_;
    bool valueIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_LIVE_V2_MODEL_TranscodeSummary_H_
