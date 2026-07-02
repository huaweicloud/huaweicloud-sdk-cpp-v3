
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_TaurusDbChargeInfo_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_TaurusDbChargeInfo_H_


#include <huaweicloud/gaussdb/v3/GaussDBExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// **参数解释**：  计费类型信息。  **约束限制**：  不涉及。
/// </summary>
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  TaurusDbChargeInfo
    : public ModelBase
{
public:
    TaurusDbChargeInfo();
    virtual ~TaurusDbChargeInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// TaurusDbChargeInfo members

    /// <summary>
    /// **参数解释**：  订购周期类型。  **约束限制**：  不涉及。  **取值范围**：  - month：包月。 - year：包年。  **默认取值**：  不涉及。
    /// </summary>

    std::string getPeriodType() const;
    bool periodTypeIsSet() const;
    void unsetperiodType();
    void setPeriodType(const std::string& value);

    /// <summary>
    /// **参数解释**：  订购时间长度。  **约束限制**：  需要和period_type允许的订购时间长度对应。  **取值范围**：  - \&quot;period_type\&quot;为\&quot;month\&quot;时，取值为1~9。 - \&quot;period_type\&quot;为\&quot;year\&quot;时，取值为1~3。  **默认取值**：  不涉及。
    /// </summary>

    int32_t getPeriodNum() const;
    bool periodNumIsSet() const;
    void unsetperiodNum();
    void setPeriodNum(int32_t value);

    /// <summary>
    /// **参数解释**：  是否自动续订，续订的周期和原周期相同，且续订时会自动支付。  **约束限制**：  不涉及。  **取值范围**：  - true：自动续订。 - false：不自动续订。  **默认取值**：  false。
    /// </summary>

    bool isIsAutoRenew() const;
    bool isAutoRenewIsSet() const;
    void unsetisAutoRenew();
    void setIsAutoRenew(bool value);

    /// <summary>
    /// **参数解释**：  是否自动从客户的账户中支付，此字段不影响自动续订的支付方式。  **约束限制**：  不涉及。  **取值范围**：  - true：自动支付。 - false：手动支付。  **默认取值**：  false。
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

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_TaurusDbChargeInfo_H_
