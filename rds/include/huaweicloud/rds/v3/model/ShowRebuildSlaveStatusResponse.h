
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_ShowRebuildSlaveStatusResponse_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_ShowRebuildSlaveStatusResponse_H_


#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  ShowRebuildSlaveStatusResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowRebuildSlaveStatusResponse();
    virtual ~ShowRebuildSlaveStatusResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowRebuildSlaveStatusResponse members

    /// <summary>
    /// **参数解释**：  实例ID  **约束限制**：  不涉及。  **取值范围**：  不涉及。  **默认取值**：  不涉及。
    /// </summary>

    std::string getInstanceId() const;
    bool instanceIdIsSet() const;
    void unsetinstanceId();
    void setInstanceId(const std::string& value);

    /// <summary>
    /// **参数解释**：  任务流ID  **约束限制**：  不涉及。  **取值范围**：  不涉及。  **默认取值**：  不涉及。
    /// </summary>

    std::string getWorkflowId() const;
    bool workflowIdIsSet() const;
    void unsetworkflowId();
    void setWorkflowId(const std::string& value);

    /// <summary>
    /// **参数解释**：  上一次重建的时间  **约束限制**：  不涉及。  **取值范围**：  不涉及。  **默认取值**：  不涉及。
    /// </summary>

    std::string getLastRebuildTime() const;
    bool lastRebuildTimeIsSet() const;
    void unsetlastRebuildTime();
    void setLastRebuildTime(const std::string& value);

    /// <summary>
    /// **参数解释**：  下次允许重建的时间  **约束限制**：  不涉及。  **取值范围**：  不涉及。  **默认取值**：  不涉及。
    /// </summary>

    std::string getNextRebuildTime() const;
    bool nextRebuildTimeIsSet() const;
    void unsetnextRebuildTime();
    void setNextRebuildTime(const std::string& value);


protected:
    std::string instanceId_;
    bool instanceIdIsSet_;
    std::string workflowId_;
    bool workflowIdIsSet_;
    std::string lastRebuildTime_;
    bool lastRebuildTimeIsSet_;
    std::string nextRebuildTime_;
    bool nextRebuildTimeIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_ShowRebuildSlaveStatusResponse_H_
