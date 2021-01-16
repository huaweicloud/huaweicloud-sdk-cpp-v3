
#ifndef HUAWEICLOUD_SDK_EIP_V2_MODEL_UpdatePrePaidBandwidthRequestBody_H_
#define HUAWEICLOUD_SDK_EIP_V2_MODEL_UpdatePrePaidBandwidthRequestBody_H_

#include <huaweicloud/eip/v2/EipExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/eip/v2/model/UpdatePrePaidBandwidthOption.h>
#include <huaweicloud/eip/v2/model/UpdatePrePaidBandwidthExtendParamOption.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Eip {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;

/// <summary>
/// 更新带宽的请求体
/// </summary>
class HUAWEICLOUD_EIP_V2_EXPORT  UpdatePrePaidBandwidthRequestBody
    : public ModelBase
{
public:
    UpdatePrePaidBandwidthRequestBody();
    virtual ~UpdatePrePaidBandwidthRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// UpdatePrePaidBandwidthRequestBody members

    /// <summary>
    /// 
    /// </summary>

    UpdatePrePaidBandwidthOption getBandwidth() const;
    bool bandwidthIsSet() const;
    void unsetbandwidth();
    void setBandwidth(const UpdatePrePaidBandwidthOption& value);

    /// <summary>
    /// 
    /// </summary>

    UpdatePrePaidBandwidthExtendParamOption getExtendParam() const;
    bool extendParamIsSet() const;
    void unsetextendParam();
    void setExtendParam(const UpdatePrePaidBandwidthExtendParamOption& value);


protected:
    UpdatePrePaidBandwidthOption bandwidth_;
    bool bandwidthIsSet_;
    UpdatePrePaidBandwidthExtendParamOption extendParam_;
    bool extendParamIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_EIP_V2_MODEL_UpdatePrePaidBandwidthRequestBody_H_
