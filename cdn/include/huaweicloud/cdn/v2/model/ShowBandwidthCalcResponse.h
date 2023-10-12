
#ifndef HUAWEICLOUD_SDK_CDN_V2_MODEL_ShowBandwidthCalcResponse_H_
#define HUAWEICLOUD_SDK_CDN_V2_MODEL_ShowBandwidthCalcResponse_H_


#include <huaweicloud/cdn/v2/CdnExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/core/utils/Object.h>
#include <map>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_CDN_V2_EXPORT  ShowBandwidthCalcResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowBandwidthCalcResponse();
    virtual ~ShowBandwidthCalcResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowBandwidthCalcResponse members

    /// <summary>
    /// 95峰值，日峰值月平均线信息
    /// </summary>

    std::map<std::string, Object>& getBandwidthCalc();
    bool bandwidthCalcIsSet() const;
    void unsetbandwidthCalc();
    void setBandwidthCalc(const std::map<std::string, Object>& value);


protected:
    std::map<std::string, Object> bandwidthCalc_;
    bool bandwidthCalcIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CDN_V2_MODEL_ShowBandwidthCalcResponse_H_
