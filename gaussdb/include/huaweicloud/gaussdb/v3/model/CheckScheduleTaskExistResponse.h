
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_CheckScheduleTaskExistResponse_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_CheckScheduleTaskExistResponse_H_


#include <huaweicloud/gaussdb/v3/GaussDBExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/gaussdb/v3/model/ScheduledTaskV3.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  CheckScheduleTaskExistResponse
    : public ModelBase, public HttpResponse
{
public:
    CheckScheduleTaskExistResponse();
    virtual ~CheckScheduleTaskExistResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CheckScheduleTaskExistResponse members

    /// <summary>
    /// **参数解释**：  定时任务类型是否存在。 **取值范围**： - true：指定的定时任务类型已存在。 - false：指定的定时任务类型不存在。
    /// </summary>

    bool isExist() const;
    bool existIsSet() const;
    void unsetexist();
    void setExist(bool value);

    /// <summary>
    /// **参数解释**：  定时任务详情列表。当 &#x60;exist&#x60; 为 true 时，此列表包含已存在的任务信息。  **取值范围**： 不涉及。
    /// </summary>

    std::vector<ScheduledTaskV3>& getScheduledTasks();
    bool scheduledTasksIsSet() const;
    void unsetscheduledTasks();
    void setScheduledTasks(const std::vector<ScheduledTaskV3>& value);


protected:
    bool exist_;
    bool existIsSet_;
    std::vector<ScheduledTaskV3> scheduledTasks_;
    bool scheduledTasksIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_CheckScheduleTaskExistResponse_H_
