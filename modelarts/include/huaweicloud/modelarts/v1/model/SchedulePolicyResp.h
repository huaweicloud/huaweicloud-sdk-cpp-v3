
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_SchedulePolicyResp_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_SchedulePolicyResp_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/modelarts/v1/model/RequiredAffinityResp.h>

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
class HUAWEICLOUD_MODELARTS_V1_EXPORT  SchedulePolicyResp
    : public ModelBase
{
public:
    SchedulePolicyResp();
    virtual ~SchedulePolicyResp();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// SchedulePolicyResp members

    /// <summary>
    /// 
    /// </summary>

    RequiredAffinityResp getRequiredAffinity() const;
    bool requiredAffinityIsSet() const;
    void unsetrequiredAffinity();
    void setRequiredAffinity(const RequiredAffinityResp& value);

    /// <summary>
    /// **参数解释**：训练作业优先级。 **取值范围**：0-3
    /// </summary>

    int32_t getPriority() const;
    bool priorityIsSet() const;
    void unsetpriority();
    void setPriority(int32_t value);

    /// <summary>
    /// **参数解释**：是否可以被抢占。 **取值范围**： - true：可以被抢占 - false：不可以被抢占
    /// </summary>

    bool isPreemptible() const;
    bool preemptibleIsSet() const;
    void unsetpreemptible();
    void setPreemptible(bool value);


protected:
    RequiredAffinityResp requiredAffinity_;
    bool requiredAffinityIsSet_;
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

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_SchedulePolicyResp_H_
