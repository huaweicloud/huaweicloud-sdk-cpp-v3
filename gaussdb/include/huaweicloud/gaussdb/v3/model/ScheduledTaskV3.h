
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ScheduledTaskV3_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ScheduledTaskV3_H_


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
/// 定时任务详情信息
/// </summary>
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  ScheduledTaskV3
    : public ModelBase
{
public:
    ScheduledTaskV3();
    virtual ~ScheduledTaskV3();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ScheduledTaskV3 members

    /// <summary>
    /// **参数解释**：  任务创建时间。  **取值范围**： 不涉及。
    /// </summary>

    int64_t getCreateTime() const;
    bool createTimeIsSet() const;
    void unsetcreateTime();
    void setCreateTime(int64_t value);

    /// <summary>
    /// **参数解释**：  任务结束时间。  **取值范围**： 不涉及。
    /// </summary>

    int64_t getEndTime() const;
    bool endTimeIsSet() const;
    void unsetendTime();
    void setEndTime(int64_t value);

    /// <summary>
    /// **参数解释**：  任务绑定的实例ID。  **取值范围**： 不涉及。
    /// </summary>

    std::string getInstanceId() const;
    bool instanceIdIsSet() const;
    void unsetinstanceId();
    void setInstanceId(const std::string& value);

    /// <summary>
    /// **参数解释**：  租户项目ID。  **取值范围**： 不涉及。
    /// </summary>

    std::string getProjectId() const;
    bool projectIdIsSet() const;
    void unsetprojectId();
    void setProjectId(const std::string& value);

    /// <summary>
    /// **参数解释**：  任务使用的数据库代理ID。  **取值范围**： 不涉及。
    /// </summary>

    std::string getProxyId() const;
    bool proxyIdIsSet() const;
    void unsetproxyId();
    void setProxyId(const std::string& value);

    /// <summary>
    /// **参数解释**：  任务使用的数据库代理名称。  **取值范围**： 不涉及。
    /// </summary>

    std::string getProxyName() const;
    bool proxyNameIsSet() const;
    void unsetproxyName();
    void setProxyName(const std::string& value);

    /// <summary>
    /// **参数解释**：  任务开始时间。  **取值范围**： 不涉及。
    /// </summary>

    int64_t getStartTime() const;
    bool startTimeIsSet() const;
    void unsetstartTime();
    void setStartTime(int64_t value);

    /// <summary>
    /// **参数解释**：  任务ID，此参数是任务的唯一标识。  **取值范围**： 不涉及。
    /// </summary>

    std::string getTaskId() const;
    bool taskIdIsSet() const;
    void unsettaskId();
    void setTaskId(const std::string& value);

    /// <summary>
    /// **参数解释**：  任务名称。  **取值范围**： 不涉及。
    /// </summary>

    std::string getTaskName() const;
    bool taskNameIsSet() const;
    void unsettaskName();
    void setTaskName(const std::string& value);

    /// <summary>
    /// **参数解释**：  任务状态。  **取值范围**： - RUNNING：任务正在执行。 - SUCCESS：任务执行成功。 - FAIL：任务执行失败。 - CANCELED：任务被取消。 - WAITING：任务等待执行。
    /// </summary>

    std::string getTaskStatus() const;
    bool taskStatusIsSet() const;
    void unsettaskStatus();
    void setTaskStatus(const std::string& value);


protected:
    int64_t createTime_;
    bool createTimeIsSet_;
    int64_t endTime_;
    bool endTimeIsSet_;
    std::string instanceId_;
    bool instanceIdIsSet_;
    std::string projectId_;
    bool projectIdIsSet_;
    std::string proxyId_;
    bool proxyIdIsSet_;
    std::string proxyName_;
    bool proxyNameIsSet_;
    int64_t startTime_;
    bool startTimeIsSet_;
    std::string taskId_;
    bool taskIdIsSet_;
    std::string taskName_;
    bool taskNameIsSet_;
    std::string taskStatus_;
    bool taskStatusIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ScheduledTaskV3_H_
