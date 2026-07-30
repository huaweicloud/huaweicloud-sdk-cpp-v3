
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_SchedulePolicy_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_SchedulePolicy_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/modelarts/v1/model/PreferredAffinity.h>
#include <huaweicloud/modelarts/v1/model/RequiredAffinity.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 训练作业调度策略
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  SchedulePolicy
    : public ModelBase
{
public:
    SchedulePolicy();
    virtual ~SchedulePolicy();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// SchedulePolicy members

    /// <summary>
    /// 
    /// </summary>

    RequiredAffinity getRequiredAffinity() const;
    bool requiredAffinityIsSet() const;
    void unsetrequiredAffinity();
    void setRequiredAffinity(const RequiredAffinity& value);

    /// <summary>
    /// 
    /// </summary>

    PreferredAffinity getPreferredAffinity() const;
    bool preferredAffinityIsSet() const;
    void unsetpreferredAffinity();
    void setPreferredAffinity(const PreferredAffinity& value);

    /// <summary>
    /// **参数解释**：训练作业优先级。 **约束限制**： - 仅使用专属资源池训练时才支持设置训练作业优先级。 - 作业优先级取值为1~3，默认优先级为1，最高优先级为3。 默认用户权限可选择优先级1和2，配置了“设置作业为高优先级权限”的用户可选择优先级1~3。  **取值范围**：0-3 **默认取值**：不涉及。
    /// </summary>

    int32_t getPriority() const;
    bool priorityIsSet() const;
    void unsetpriority();
    void setPriority(int32_t value);

    /// <summary>
    /// **参数解释**：是否可以被抢占。 **约束限制**：不涉及。 **取值范围**： - true：可以被抢占 - false：不可以被抢占  **默认取值**：不涉及。
    /// </summary>

    bool isPreemptible() const;
    bool preemptibleIsSet() const;
    void unsetpreemptible();
    void setPreemptible(bool value);


protected:
    RequiredAffinity requiredAffinity_;
    bool requiredAffinityIsSet_;
    PreferredAffinity preferredAffinity_;
    bool preferredAffinityIsSet_;
    int32_t priority_;
    bool priorityIsSet_;
    bool preemptible_;
    bool preemptibleIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_SchedulePolicy_H_
