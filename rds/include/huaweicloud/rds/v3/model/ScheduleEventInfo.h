
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_ScheduleEventInfo_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_ScheduleEventInfo_H_


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
/// 事件详情
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  ScheduleEventInfo
    : public ModelBase
{
public:
    ScheduleEventInfo();
    virtual ~ScheduleEventInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ScheduleEventInfo members

    /// <summary>
    /// **参数解释**：  事件ID。  **约束限制**：  不涉及。
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// **参数解释**：  实例ID。  **约束限制**：  不涉及。
    /// </summary>

    std::string getInstanceId() const;
    bool instanceIdIsSet() const;
    void unsetinstanceId();
    void setInstanceId(const std::string& value);

    /// <summary>
    /// **参数解释**：  实例名称。  **约束限制**：  不涉及。
    /// </summary>

    std::string getInstanceName() const;
    bool instanceNameIsSet() const;
    void unsetinstanceName();
    void setInstanceName(const std::string& value);

    /// <summary>
    /// **参数解释**：  数据库类型。  **约束限制**：  不涉及。
    /// </summary>

    std::string getDbType() const;
    bool dbTypeIsSet() const;
    void unsetdbType();
    void setDbType(const std::string& value);

    /// <summary>
    /// **参数解释**：  事件创建的时间。  **约束限制**：  不涉及。
    /// </summary>

    std::string getCreatedTime() const;
    bool createdTimeIsSet() const;
    void unsetcreatedTime();
    void setCreatedTime(const std::string& value);

    /// <summary>
    /// **参数解释**：  事件更新的时间。  **约束限制**：  不涉及。
    /// </summary>

    std::string getUpdateTime() const;
    bool updateTimeIsSet() const;
    void unsetupdateTime();
    void setUpdateTime(const std::string& value);

    /// <summary>
    /// **参数解释**：  事件类型。  **约束限制**：  不涉及。
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// **参数解释**：  事件对系统的影响。  **约束限制**：  不涉及。
    /// </summary>

    std::string getImpact() const;
    bool impactIsSet() const;
    void unsetimpact();
    void setImpact(const std::string& value);

    /// <summary>
    /// **参数解释**：  事件状态。  **约束限制**：  不涉及。
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// **参数解释**：  事件发生的原因。  **约束限制**：  不涉及。
    /// </summary>

    std::string getReason() const;
    bool reasonIsSet() const;
    void unsetreason();
    void setReason(const std::string& value);

    /// <summary>
    /// **参数解释**：  事件的严重级别。  **约束限制**：  不涉及。
    /// </summary>

    std::string getLevel() const;
    bool levelIsSet() const;
    void unsetlevel();
    void setLevel(const std::string& value);

    /// <summary>
    /// **参数解释**：  事件执行的时间。  **约束限制**：  不涉及。
    /// </summary>

    std::string getExecuteTime() const;
    bool executeTimeIsSet() const;
    void unsetexecuteTime();
    void setExecuteTime(const std::string& value);

    /// <summary>
    /// **参数解释**：  事件最近一次执行的时间。  **约束限制**：  不涉及。
    /// </summary>

    std::string getLatestExecutionTime() const;
    bool latestExecutionTimeIsSet() const;
    void unsetlatestExecutionTime();
    void setLatestExecutionTime(const std::string& value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string instanceId_;
    bool instanceIdIsSet_;
    std::string instanceName_;
    bool instanceNameIsSet_;
    std::string dbType_;
    bool dbTypeIsSet_;
    std::string createdTime_;
    bool createdTimeIsSet_;
    std::string updateTime_;
    bool updateTimeIsSet_;
    std::string type_;
    bool typeIsSet_;
    std::string impact_;
    bool impactIsSet_;
    std::string status_;
    bool statusIsSet_;
    std::string reason_;
    bool reasonIsSet_;
    std::string level_;
    bool levelIsSet_;
    std::string executeTime_;
    bool executeTimeIsSet_;
    std::string latestExecutionTime_;
    bool latestExecutionTimeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_ScheduleEventInfo_H_
