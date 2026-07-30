
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_Task_task_resource_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_Task_task_resource_H_


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
/// **参数解释**：训练作业资源规格信息。 **约束限制**：不涉及。
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  Task_task_resource
    : public ModelBase
{
public:
    Task_task_resource();
    virtual ~Task_task_resource();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// Task_task_resource members

    /// <summary>
    /// **参数解释**：训练作业选择的资源规格ID。 **约束限制**：不涉及。 **取值范围**：不涉及。 **默认取值**：不涉及。
    /// </summary>

    std::string getFlavorId() const;
    bool flavorIdIsSet() const;
    void unsetflavorId();
    void setFlavorId(const std::string& value);

    /// <summary>
    /// **参数解释**：训练作业选择的资源副本数。 **约束限制**：不涉及。 **取值范围**：不涉及。 **默认取值**：不涉及。
    /// </summary>

    int32_t getNodeCount() const;
    bool nodeCountIsSet() const;
    void unsetnodeCount();
    void setNodeCount(int32_t value);

    /// <summary>
    /// **参数解释**：训练任务选择的资源池ID。 **约束限制**：不涉及。 **取值范围**：不涉及。 **默认取值**：不涉及。
    /// </summary>

    std::string getPoolId() const;
    bool poolIdIsSet() const;
    void unsetpoolId();
    void setPoolId(const std::string& value);


protected:
    std::string flavorId_;
    bool flavorIdIsSet_;
    int32_t nodeCount_;
    bool nodeCountIsSet_;
    std::string poolId_;
    bool poolIdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_Task_task_resource_H_
