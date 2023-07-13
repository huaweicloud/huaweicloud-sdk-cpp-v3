
#ifndef HUAWEICLOUD_SDK_EIP_V2_MODEL_UpdatePrePaidBandwidthExtendParamOption_H_
#define HUAWEICLOUD_SDK_EIP_V2_MODEL_UpdatePrePaidBandwidthExtendParamOption_H_

#include <huaweicloud/eip/v2/EipExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Eip {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 扩展参数，用于包周期资源申请
/// </summary>
class HUAWEICLOUD_EIP_V2_EXPORT  UpdatePrePaidBandwidthExtendParamOption
    : public ModelBase
{
public:
    UpdatePrePaidBandwidthExtendParamOption();
    virtual ~UpdatePrePaidBandwidthExtendParamOption();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// UpdatePrePaidBandwidthExtendParamOption members

    /// <summary>
    /// 功能说明：下单订购后，是否自动从客户的账户中支付，而不需要客户手动去进行支付；系统默认是“非自动支付”。  取值范围：  true：是（自动支付）  false：否（默认值，需要客户手动去支付）  约束：自动支付时，只能使用账户的现金支付；如果要使用代金券，请选择不自动支付，然后在用户费用中心，选择代金券支付。
    /// </summary>

    bool isIsAutoPay() const;
    bool isAutoPayIsSet() const;
    void unsetisAutoPay();
    void setIsAutoPay(bool value);


protected:
    bool isAutoPay_;
    bool isAutoPayIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_EIP_V2_MODEL_UpdatePrePaidBandwidthExtendParamOption_H_
