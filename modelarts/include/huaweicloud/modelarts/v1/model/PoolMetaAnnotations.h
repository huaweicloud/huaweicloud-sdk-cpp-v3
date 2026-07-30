
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_PoolMetaAnnotations_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_PoolMetaAnnotations_H_


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
/// 资源池metadata的注释信息。
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  PoolMetaAnnotations
    : public ModelBase
{
public:
    PoolMetaAnnotations();
    virtual ~PoolMetaAnnotations();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// PoolMetaAnnotations members

    /// <summary>
    /// **参数解释**：资源池的描述信息。 **约束限制**：不涉及。 **取值范围**：不涉及。 **默认取值**：不涉及。
    /// </summary>

    std::string getOsModelartsDescription() const;
    bool osModelartsDescriptionIsSet() const;
    void unsetosModelartsDescription();
    void setOsModelartsDescription(const std::string& value);

    /// <summary>
    /// **参数解释**：计费模式。 **约束限制**：不涉及。 **取值范围**：可选值如下： - 0：按需计费 - 1：包周期计费 **默认取值**：不涉及。
    /// </summary>

    std::string getOsModelartsBillingMode() const;
    bool osModelartsBillingModeIsSet() const;
    void unsetosModelartsBillingMode();
    void setOsModelartsBillingMode(const std::string& value);

    /// <summary>
    /// **参数解释**：包周期资源池的订购周期。 **约束限制**：和os.modelarts/period.type字段配合使用。 **取值范围**：不涉及。 **默认取值**：不涉及。
    /// </summary>

    std::string getOsModelartsPeriodNum() const;
    bool osModelartsPeriodNumIsSet() const;
    void unsetosModelartsPeriodNum();
    void setOsModelartsPeriodNum(const std::string& value);

    /// <summary>
    /// **参数解释**：包周期资源池的订购类型。 **约束限制**：和os.modelarts/period.num字段配合使用。 **取值范围**：可选值如下： - 2：包月。 - 3：包年。 **默认取值**：不涉及。
    /// </summary>

    std::string getOsModelartsPeriodType() const;
    bool osModelartsPeriodTypeIsSet() const;
    void unsetosModelartsPeriodType();
    void setOsModelartsPeriodType(const std::string& value);

    /// <summary>
    /// **参数解释**：包周期资源池的自动续费类型。 **约束限制**：不涉及。 **取值范围**：可选值如下： - 0：不自动续费。 - 1：自动续费。 **默认取值**：0。
    /// </summary>

    std::string getOsModelartsAutoRenew() const;
    bool osModelartsAutoRenewIsSet() const;
    void unsetosModelartsAutoRenew();
    void setOsModelartsAutoRenew(const std::string& value);

    /// <summary>
    /// **参数解释**：包周期资源池购买时选择的折扣信息。 **约束限制**：不涉及。 **取值范围**：不涉及。 **默认取值**：不涉及。
    /// </summary>

    std::string getOsModelartsPromotionInfo() const;
    bool osModelartsPromotionInfoIsSet() const;
    void unsetosModelartsPromotionInfo();
    void setOsModelartsPromotionInfo(const std::string& value);

    /// <summary>
    /// **参数解释**：购买包周期资源在订单支付完成后跳转地址。 **约束限制**：不涉及。 **取值范围**：不涉及。 **默认取值**：不涉及。
    /// </summary>

    std::string getOsModelartsServiceConsoleUrl() const;
    bool osModelartsServiceConsoleUrlIsSet() const;
    void unsetosModelartsServiceConsoleUrl();
    void setOsModelartsServiceConsoleUrl(const std::string& value);

    /// <summary>
    /// **参数解释**：包周期资源池购买时传递的订单ID。 **约束限制**：不涉及。 **取值范围**：不涉及。 **默认取值**：不涉及。
    /// </summary>

    std::string getOsModelartsOrderId() const;
    bool osModelartsOrderIdIsSet() const;
    void unsetosModelartsOrderId();
    void setOsModelartsOrderId(const std::string& value);

    /// <summary>
    /// **参数解释**：包周期资源池中资源规格对应的资源ID。 **约束限制**：不涉及。 **取值范围**：不涉及。 **默认取值**：不涉及。
    /// </summary>

    std::string getOsModelartsFlavorResourceIds() const;
    bool osModelartsFlavorResourceIdsIsSet() const;
    void unsetosModelartsFlavorResourceIds();
    void setOsModelartsFlavorResourceIds(const std::string& value);

    /// <summary>
    /// **参数解释**：资源池上的资源标签。 **约束限制**：不涉及。 **取值范围**：不涉及。 **默认取值**：不涉及。
    /// </summary>

    std::string getOsModelartsTmsTags() const;
    bool osModelartsTmsTagsIsSet() const;
    void unsetosModelartsTmsTags();
    void setOsModelartsTmsTags(const std::string& value);

    /// <summary>
    /// **参数解释**：资源池调度队列的策略，用于定义任务调度的规则。 **约束限制**：不涉及。 **取值范围**：不涉及。 **默认取值**：不涉及。
    /// </summary>

    std::string getOsModelartsPoolSchedulerQueueStrategy() const;
    bool osModelartsPoolSchedulerQueueStrategyIsSet() const;
    void unsetosModelartsPoolSchedulerQueueStrategy();
    void setOsModelartsPoolSchedulerQueueStrategy(const std::string& value);

    /// <summary>
    /// **参数解释**：资源池包含的逻辑子池的数量。 **约束限制**：不涉及。 **取值范围**：不涉及。 **默认取值**：不涉及。
    /// </summary>

    std::string getOsModelartsPoolSubpoolsCount() const;
    bool osModelartsPoolSubpoolsCountIsSet() const;
    void unsetosModelartsPoolSubpoolsCount();
    void setOsModelartsPoolSubpoolsCount(const std::string& value);

    /// <summary>
    /// **参数解释**：资源池的租户账号 **约束限制**：不涉及。 **取值范围**：不涉及。 **默认取值**：不涉及。
    /// </summary>

    std::string getOsModelartsTenantDomainName() const;
    bool osModelartsTenantDomainNameIsSet() const;
    void unsetosModelartsTenantDomainName();
    void setOsModelartsTenantDomainName(const std::string& value);

    /// <summary>
    /// **参数解释**：训练外部依赖标识 **约束限制**：不涉及。 **取值范围**：不涉及。 **默认取值**：不涉及。
    /// </summary>

    std::string getOsModelartsPoolScopeExternalDependencyTrain() const;
    bool osModelartsPoolScopeExternalDependencyTrainIsSet() const;
    void unsetosModelartsPoolScopeExternalDependencyTrain();
    void setOsModelartsPoolScopeExternalDependencyTrain(const std::string& value);


protected:
    std::string osModelartsDescription_;
    bool osModelartsDescriptionIsSet_;
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
    std::string osModelartsFlavorResourceIds_;
    bool osModelartsFlavorResourceIdsIsSet_;
    std::string osModelartsTmsTags_;
    bool osModelartsTmsTagsIsSet_;
    std::string osModelartsPoolSchedulerQueueStrategy_;
    bool osModelartsPoolSchedulerQueueStrategyIsSet_;
    std::string osModelartsPoolSubpoolsCount_;
    bool osModelartsPoolSubpoolsCountIsSet_;
    std::string osModelartsTenantDomainName_;
    bool osModelartsTenantDomainNameIsSet_;
    std::string osModelartsPoolScopeExternalDependencyTrain_;
    bool osModelartsPoolScopeExternalDependencyTrainIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_PoolMetaAnnotations_H_
