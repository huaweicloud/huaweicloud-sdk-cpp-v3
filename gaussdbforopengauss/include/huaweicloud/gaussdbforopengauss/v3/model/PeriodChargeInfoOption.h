
#ifndef HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_PeriodChargeInfoOption_H_
#define HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_PeriodChargeInfoOption_H_


#include <huaweicloud/gaussdbforopengauss/v3/GaussDBforopenGaussExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// **参数解释**: 包周期相关信息。 **约束限制**: 不涉及。
/// </summary>
class HUAWEICLOUD_GAUSSDBFOROPENGAUSS_V3_EXPORT  PeriodChargeInfoOption
    : public ModelBase
{
public:
    PeriodChargeInfoOption();
    virtual ~PeriodChargeInfoOption();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// PeriodChargeInfoOption members

    /// <summary>
    /// **参数解释**: 周期单位类型。 **约束限制**: 不涉及。 **取值范围**: - year：包年。 - month：包月。  **默认取值**: 不涉及。
    /// </summary>

    std::string getPeriodType() const;
    bool periodTypeIsSet() const;
    void unsetperiodType();
    void setPeriodType(const std::string& value);

    /// <summary>
    /// **参数解释**: 周期单位数量。 **约束限制**: 不涉及。 **取值范围**: - 当“period_type”为“month”时，取值为1~9。 - 当“period_type”为“year”时，取值为1~3。  当传入浮点型时，会自动截取为整型。 **默认取值**: 不涉及。
    /// </summary>

    int32_t getPeriodNum() const;
    bool periodNumIsSet() const;
    void unsetperiodNum();
    void setPeriodNum(int32_t value);

    /// <summary>
    /// **参数解释**: 是否自动续费。 **约束限制**: 不涉及。 **取值范围**: - true：自动续订。 - false：不自动续订。  **默认取值**: false
    /// </summary>

    bool isIsAutoRenew() const;
    bool isAutoRenewIsSet() const;
    void unsetisAutoRenew();
    void setIsAutoRenew(bool value);

    /// <summary>
    /// **参数解释**: 是否自动支付。 **约束限制**: 不涉及。 **取值范围**: - true：自动支付。 - false：手动支付。  **默认取值**: false
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

#endif // HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_PeriodChargeInfoOption_H_
