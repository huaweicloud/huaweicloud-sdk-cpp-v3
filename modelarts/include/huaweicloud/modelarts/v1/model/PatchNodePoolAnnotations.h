
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_PatchNodePoolAnnotations_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_PatchNodePoolAnnotations_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 更新节点池metadata的注释信息。
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  PatchNodePoolAnnotations
    : public ModelBase
{
public:
    PatchNodePoolAnnotations();
    virtual ~PatchNodePoolAnnotations();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// PatchNodePoolAnnotations members

    /// <summary>
    /// **参数解释**：计费模式，不指定时新创节点沿用资源池计费模式。 **取值范围**：可选值如下： - 0：按需计费 - [1：包周期计费](tag:hc)
    /// </summary>

    std::string getOsModelartsBillingMode() const;
    bool osModelartsBillingModeIsSet() const;
    void unsetosModelartsBillingMode();
    void setOsModelartsBillingMode(const std::string& value);

    /// <summary>
    /// **参数解释**：包周期订购周期，比如2。当计费模式为包周期时该参数必传。 **取值范围**：不涉及。
    /// </summary>

    std::string getOsModelartsPeriodNum() const;
    bool osModelartsPeriodNumIsSet() const;
    void unsetosModelartsPeriodNum();
    void setOsModelartsPeriodNum(const std::string& value);

    /// <summary>
    /// **参数解释**：包周期订购类型。当计费模式为包周期时该参数必传。 **取值范围**：可选值如下： - 2：月 - 3：年
    /// </summary>

    std::string getOsModelartsPeriodType() const;
    bool osModelartsPeriodTypeIsSet() const;
    void unsetosModelartsPeriodType();
    void setOsModelartsPeriodType(const std::string& value);

    /// <summary>
    /// **参数解释**：是否自动续费，不指定时新创节点沿用资源池自动续费属性。 **取值范围**：可选值如下： - 0：不自动续费，默认值 - 1：自动续费
    /// </summary>

    std::string getOsModelartsAutoRenew() const;
    bool osModelartsAutoRenewIsSet() const;
    void unsetosModelartsAutoRenew();
    void setOsModelartsAutoRenew(const std::string& value);

    /// <summary>
    /// **参数解释**：用户在运营平台选择的折扣信息。 **取值范围**：不涉及。
    /// </summary>

    std::string getOsModelartsPromotionInfo() const;
    bool osModelartsPromotionInfoIsSet() const;
    void unsetosModelartsPromotionInfo();
    void setOsModelartsPromotionInfo(const std::string& value);

    /// <summary>
    /// **参数解释**：订购订单支付完成后跳转的url地址。 **取值范围**：不涉及。
    /// </summary>

    std::string getOsModelartsServiceConsoleUrl() const;
    bool osModelartsServiceConsoleUrlIsSet() const;
    void unsetosModelartsServiceConsoleUrl();
    void setOsModelartsServiceConsoleUrl(const std::string& value);

    /// <summary>
    /// **参数解释**：订单id，包周期资源创建或者计费模式变更的时候该参数必需。 **取值范围**：不涉及。
    /// </summary>

    std::string getOsModelartsOrderId() const;
    bool osModelartsOrderIdIsSet() const;
    void unsetosModelartsOrderId();
    void setOsModelartsOrderId(const std::string& value);


protected:
    std::string osModelartsBillingMode_;
    bool osModelartsBillingModeIsSet_;
    std::string osModelartsPeriodNum_;
    bool osModelartsPeriodNumIsSet_;
    std::string osModelartsPeriodType_;
    bool osModelartsPeriodTypeIsSet_;
    std::string osModelartsAutoRenew_;
    bool osModelartsAutoRenewIsSet_;
    std::string osModelartsPromotionInfo_;
    bool osModelartsPromotionInfoIsSet_;
    std::string osModelartsServiceConsoleUrl_;
    bool osModelartsServiceConsoleUrlIsSet_;
    std::string osModelartsOrderId_;
    bool osModelartsOrderIdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_PatchNodePoolAnnotations_H_
