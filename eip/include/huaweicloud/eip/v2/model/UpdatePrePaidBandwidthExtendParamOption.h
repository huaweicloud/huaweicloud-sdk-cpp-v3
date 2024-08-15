
#ifndef HUAWEICLOUD_SDK_EIP_V2_MODEL_UpdatePrePaidBandwidthExtendParamOption_H_
#define HUAWEICLOUD_SDK_EIP_V2_MODEL_UpdatePrePaidBandwidthExtendParamOption_H_


#include <huaweicloud/eip/v2/EipExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Eip {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 扩展参数，用于包周期资源变更
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
    /// - 功能说明：变更资源的周期类型（包年、包月等）,可选字段。 - 取值范围：    - month-月    - year-年 - 约束：只有在资源续费降配的时候必须传，其他场景不需要传，如果传入默认忽略。
    /// </summary>

    std::string getPeriodType() const;
    bool periodTypeIsSet() const;
    void unsetperiodType();
    void setPeriodType(const std::string& value);

    /// <summary>
    /// - 功能说明：订购周期数，和period_type同步传入，可选字段 - 取值范围：(后续会随运营策略变化)    - period_type为month时，为[1,9]    - period_type为year时，为[1,3] - 约束：只有在资源续费降配的时候必须传，其他场景不需要传，如果传入默认忽略。该字段需要和period_type同步传入或同步不传
    /// </summary>

    int32_t getPeriodNum() const;
    bool periodNumIsSet() const;
    void unsetperiodNum();
    void setPeriodNum(int32_t value);

    /// <summary>
    /// - 功能说明：下单订购后，是否自动从客户的账户中支付，而不需要客户手动去进行支付；系统默认是“非自动支付”。 - 取值范围：    - true：是（自动支付，从账户余额自动扣费）    - false：否（默认值，需要客户手动去支付） - 约束：资源升配或续费降配时，该参数为必传字段。自动支付时，只能使用账户的现金支付；如果要使用代金券，请选择不自动支付，然后在用户费用中心，选择代金券支付。
    /// </summary>

    bool isIsAutoPay() const;
    bool isAutoPayIsSet() const;
    void unsetisAutoPay();
    void setIsAutoPay(bool value);


protected:
    std::string periodType_;
    bool periodTypeIsSet_;
    int32_t periodNum_;
    bool periodNumIsSet_;
    bool isAutoPay_;
    bool isAutoPayIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_EIP_V2_MODEL_UpdatePrePaidBandwidthExtendParamOption_H_
