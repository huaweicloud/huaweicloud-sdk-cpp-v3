
#ifndef HUAWEICLOUD_SDK_EIP_V2_MODEL_UpdateBandwidthRequestBody_H_
#define HUAWEICLOUD_SDK_EIP_V2_MODEL_UpdateBandwidthRequestBody_H_

#include <huaweicloud/eip/v2/EipExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/eip/v2/model/UpdateBandwidthOption.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Eip {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;

/// <summary>
/// 更新带宽对象的请求体(name,size必须有一个参数)
/// </summary>
class HUAWEICLOUD_EIP_V2_EXPORT  UpdateBandwidthRequestBody
    : public ModelBase
{
public:
    UpdateBandwidthRequestBody();
    virtual ~UpdateBandwidthRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// UpdateBandwidthRequestBody members

    /// <summary>
    /// 
    /// </summary>

    UpdateBandwidthOption getBandwidth() const;
    bool bandwidthIsSet() const;
    void unsetbandwidth();
    void setBandwidth(const UpdateBandwidthOption& value);


protected:
    UpdateBandwidthOption bandwidth_;
    bool bandwidthIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_EIP_V2_MODEL_UpdateBandwidthRequestBody_H_
