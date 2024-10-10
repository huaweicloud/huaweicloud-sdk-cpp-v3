
#ifndef HUAWEICLOUD_SDK_AAD_V2_MODEL_ListWafBandwidthResponse_H_
#define HUAWEICLOUD_SDK_AAD_V2_MODEL_ListWafBandwidthResponse_H_


#include <huaweicloud/aad/v2/AadExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <vector>
#include <huaweicloud/aad/v2/model/Curve.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Aad {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_AAD_V2_EXPORT  ListWafBandwidthResponse
    : public ModelBase, public HttpResponse
{
public:
    ListWafBandwidthResponse();
    virtual ~ListWafBandwidthResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListWafBandwidthResponse members

    /// <summary>
    /// 曲线
    /// </summary>

    std::vector<Curve>& getCurve();
    bool curveIsSet() const;
    void unsetcurve();
    void setCurve(const std::vector<Curve>& value);


protected:
    std::vector<Curve> curve_;
    bool curveIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_AAD_V2_MODEL_ListWafBandwidthResponse_H_
