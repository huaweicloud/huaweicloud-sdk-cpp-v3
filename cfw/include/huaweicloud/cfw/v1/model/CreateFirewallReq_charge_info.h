
#ifndef HUAWEICLOUD_SDK_CFW_V1_MODEL_CreateFirewallReq_charge_info_H_
#define HUAWEICLOUD_SDK_CFW_V1_MODEL_CreateFirewallReq_charge_info_H_


#include <huaweicloud/cfw/v1/CfwExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 计费类型信息，支持包年/包月和按需，默认为按需。
/// </summary>
class HUAWEICLOUD_CFW_V1_EXPORT  CreateFirewallReq_charge_info
    : public ModelBase
{
public:
    CreateFirewallReq_charge_info();
    virtual ~CreateFirewallReq_charge_info();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateFirewallReq_charge_info members

    /// <summary>
    /// 计费模式。  取值范围：  prePaid：预付费，即包年/包月。 postPaid：后付费，即按需付费。
    /// </summary>

    std::string getChargeMode() const;
    bool chargeModeIsSet() const;
    void unsetchargeMode();
    void setChargeMode(const std::string& value);

    /// <summary>
    /// 订购周期类型。  取值范围：  month：包月。 year：包年。 说明：“charge_mode”为“prePaid”时生效，且为必选值。
    /// </summary>

    std::string getPeriodType() const;
    bool periodTypeIsSet() const;
    void unsetperiodType();
    void setPeriodType(const std::string& value);

    /// <summary>
    /// “charge_mode”为“prePaid”时生效，且为必选值，指定订购的时间。  取值范围：  当“period_type”为“month”时，取值为1~9。 当“period_type”为“year”时，取值为1~3。
    /// </summary>

    int32_t getPeriodNum() const;
    bool periodNumIsSet() const;
    void unsetperiodNum();
    void setPeriodNum(int32_t value);

    /// <summary>
    /// 创建包周期实例时可指定，表示是否自动续订，续订的周期和原周期相同，且续订时会自动支付。  true，为自动续订。 false，为不自动续订，默认该方式。
    /// </summary>

    bool isIsAutoRenew() const;
    bool isAutoRenewIsSet() const;
    void unsetisAutoRenew();
    void setIsAutoRenew(bool value);

    /// <summary>
    /// 创建包周期时可指定，表示是否自动从客户的账户中支付，此字段不影响自动续订的支付方式。  true，为自动支付。（会自动选择折扣和优惠券进行优惠，然后自动从客户华为云账户中支付），自动支付失败后会生成订单成功(该订单应付金额是优惠后金额)、但订单状态为“待支付”，等待客户手动支付(手动支付时，客户还可以修改系统自动选择的折扣和优惠券) false，为手动支付，默认该方式。（需要客户手动去支付，客户可以选择折扣和优惠券）
    /// </summary>

    bool isIsAutoPay() const;
    bool isAutoPayIsSet() const;
    void unsetisAutoPay();
    void setIsAutoPay(bool value);


protected:
    std::string chargeMode_;
    bool chargeModeIsSet_;
    std::string periodType_;
    bool periodTypeIsSet_;
    int32_t periodNum_;
    bool periodNumIsSet_;
    bool isAutoRenew_;
    bool isAutoRenewIsSet_;
    bool isAutoPay_;
    bool isAutoPayIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CFW_V1_MODEL_CreateFirewallReq_charge_info_H_
