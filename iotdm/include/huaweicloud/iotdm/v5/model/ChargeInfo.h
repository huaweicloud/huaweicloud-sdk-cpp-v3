
#ifndef HUAWEICLOUD_SDK_IOTDM_V5_MODEL_ChargeInfo_H_
#define HUAWEICLOUD_SDK_IOTDM_V5_MODEL_ChargeInfo_H_


#include <huaweicloud/iotdm/v5/IoTDMExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Iotdm {
namespace V5 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// **参数说明**：设备接入实例计费信息 
/// </summary>
class HUAWEICLOUD_IOTDM_V5_EXPORT  ChargeInfo
    : public ModelBase
{
public:
    ChargeInfo();
    virtual ~ChargeInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ChargeInfo members

    /// <summary>
    /// **参数说明**：实例的付费方式。 **取值范围**： - prePaid：包年/包月 - postPaid：按需计费 
    /// </summary>

    std::string getChargeMode() const;
    bool chargeModeIsSet() const;
    void unsetchargeMode();
    void setChargeMode(const std::string& value);

    /// <summary>
    /// **参数说明**：订购设备接入实例的周期类型（包年、包月等）。charge_mode为prePaid时生效，且为必选值。 **取值范围**： - month：包月 - year：包年 
    /// </summary>

    std::string getPeriodType() const;
    bool periodTypeIsSet() const;
    void unsetperiodType();
    void setPeriodType(const std::string& value);

    /// <summary>
    /// **参数说明**：订购设备接入实例的周期数。charge_mode为prePaid时生效，且为必选值。 **取值范围**：period_type&#x3D;month（周期类型为月）时，取值为[1，9]；period_type&#x3D;year（周期类型为年）时，取值为[1，3]\&quot;。 
    /// </summary>

    int32_t getPeriodNum() const;
    bool periodNumIsSet() const;
    void unsetperiodNum();
    void setPeriodNum(int32_t value);

    /// <summary>
    /// **参数说明**：创建包年/包月实例时可指定，表示是否自动续订，续订的周期和原周期相同，且续订时会自动支付。 **取值范围**： - true：自动续订 - false：默认值，不自动续订 
    /// </summary>

    bool isIsAutoRenew() const;
    bool isAutoRenewIsSet() const;
    void unsetisAutoRenew();
    void setIsAutoRenew(bool value);

    /// <summary>
    /// **参数说明**：创建包年/包月实例时可指定，表示是否自动从客户的账户中支付，此字段不影响自动续订的支付方式。 **取值范围**：true - 自动支付，从账户余额自动扣费; false - 默认值，只提交订单不支付。[需要客户参考[支付包年/包月产品订单](https://support.huaweicloud.com/api-bpconsole/api_order_00016.html#section0)进行支付，或者在华为云官网页面使用进行支付。](tag:hws) 
    /// </summary>

    bool isIsAutoPay() const;
    bool isAutoPayIsSet() const;
    void unsetisAutoPay();
    void setIsAutoPay(bool value);

    /// <summary>
    /// **参数说明**：促销信息。 
    /// </summary>

    std::string getPromotionInfos() const;
    bool promotionInfosIsSet() const;
    void unsetpromotionInfos();
    void setPromotionInfos(const std::string& value);


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
    std::string promotionInfos_;
    bool promotionInfosIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IOTDM_V5_MODEL_ChargeInfo_H_
