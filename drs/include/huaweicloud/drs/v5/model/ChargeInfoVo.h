
#ifndef HUAWEICLOUD_SDK_DRS_V5_MODEL_ChargeInfoVo_H_
#define HUAWEICLOUD_SDK_DRS_V5_MODEL_ChargeInfoVo_H_


#include <huaweicloud/drs/v5/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_DRS_V5_EXPORT  ChargeInfoVo
    : public ModelBase
{
public:
    ChargeInfoVo();
    virtual ~ChargeInfoVo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ChargeInfoVo members

    /// <summary>
    /// 计费模式，取值：  - on_demand: 按需  - period: 包周期
    /// </summary>

    std::string getChargeMode() const;
    bool chargeModeIsSet() const;
    void unsetchargeMode();
    void setChargeMode(const std::string& value);

    /// <summary>
    /// 订购周期类型，“charge_mode”为“period”时生效，且为必选值。取值：  - month: 包月  - year: 包年
    /// </summary>

    std::string getPeriodType() const;
    bool periodTypeIsSet() const;
    void unsetperiodType();
    void setPeriodType(const std::string& value);

    /// <summary>
    /// 订购时长，“charge_mode”为“period”时生效，且为必选值，指定订购的时间。 当“period_type”为“month”时，取值为1~9。 当“period_type”为“year”时，取值为1~3和5。
    /// </summary>

    int32_t getPeriodNum() const;
    bool periodNumIsSet() const;
    void unsetperiodNum();
    void setPeriodNum(int32_t value);

    /// <summary>
    /// 是否自动续订，创建包周期实例时可指定，表示是否自动续订，续订的周期和原周期相同，且续订时会自动支付。取值：  - true: 自动续订  - false: 不自动续订
    /// </summary>

    bool isIsAutoRenew() const;
    bool isAutoRenewIsSet() const;
    void unsetisAutoRenew();
    void setIsAutoRenew(bool value);

    /// <summary>
    /// 是否自动支付，创建包周期时可指定，表示是否自动从客户的账户中支付，此字段不影响自动续订的支付方式。  - true: 自动支付  - false: 手动支付
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

#endif // HUAWEICLOUD_SDK_DRS_V5_MODEL_ChargeInfoVo_H_
