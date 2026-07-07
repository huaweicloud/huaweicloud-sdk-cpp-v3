
#ifndef HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_ScheduleEventInfoResult_H_
#define HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_ScheduleEventInfoResult_H_


#include <huaweicloud/gaussdbforopengauss/v3/GaussDBforopenGaussExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/gaussdbforopengauss/v3/model/ExecuteWindowResult.h>
#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// **参数解释**: 事件详情。
/// </summary>
class HUAWEICLOUD_GAUSSDBFOROPENGAUSS_V3_EXPORT  ScheduleEventInfoResult
    : public ModelBase
{
public:
    ScheduleEventInfoResult();
    virtual ~ScheduleEventInfoResult();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ScheduleEventInfoResult members

    /// <summary>
    /// **参数解释**: 事件ID。 **取值范围**: 不涉及。
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// **参数解释**: 实例ID。 **取值范围**: 不涉及。
    /// </summary>

    std::string getInstanceId() const;
    bool instanceIdIsSet() const;
    void unsetinstanceId();
    void setInstanceId(const std::string& value);

    /// <summary>
    /// **参数解释**: 实例名称。 **取值范围**: 不涉及。
    /// </summary>

    std::string getInstanceName() const;
    bool instanceNameIsSet() const;
    void unsetinstanceName();
    void setInstanceName(const std::string& value);

    /// <summary>
    /// **参数解释**: 数据库类型。 **取值范围**: 不涉及。
    /// </summary>

    std::string getDbType() const;
    bool dbTypeIsSet() const;
    void unsetdbType();
    void setDbType(const std::string& value);

    /// <summary>
    /// **参数解释**: 创建时间，格式为\&quot;yyyy-mm-ddThh:mm:ssZ\&quot;。其中，T指某个时间的开始；Z指时区偏移量，例如北京时间偏移显示为+0800。 **取值范围**: 不涉及。
    /// </summary>

    std::string getCreatedTime() const;
    bool createdTimeIsSet() const;
    void unsetcreatedTime();
    void setCreatedTime(const std::string& value);

    /// <summary>
    /// **参数解释**: 更新时间，格式为\&quot;yyyy-mm-ddThh:mm:ssZ\&quot;。其中，T指某个时间的开始；Z指时区偏移量，例如北京时间偏移显示为+0800。 **取值范围**: 不涉及。
    /// </summary>

    std::string getUpdateTime() const;
    bool updateTimeIsSet() const;
    void unsetupdateTime();
    void setUpdateTime(const std::string& value);

    /// <summary>
    /// **参数解释**: 事件类型。 **取值范围**: - RESTAT_NODE：重启实例节点
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// **参数解释**: 事件对业务的影响。 **取值范围**: 不涉及。
    /// </summary>

    std::string getImpact() const;
    bool impactIsSet() const;
    void unsetimpact();
    void setImpact(const std::string& value);

    /// <summary>
    /// **参数解释**: 事件状态。 **取值范围**: - WAITING：等待中 - INQUIRING：待授权 - SCHEDULED：待执行 - EXECUTING：执行中 - COMPLETED：已完成 - FAILED：失败 - CANCELED：已取消
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// **参数解释**: 事件发生的原因。 **取值范围**: 不涉及。
    /// </summary>

    std::string getReason() const;
    bool reasonIsSet() const;
    void unsetreason();
    void setReason(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    ExecuteWindowResult getExecutionTimeWindow() const;
    bool executionTimeWindowIsSet() const;
    void unsetexecutionTimeWindow();
    void setExecutionTimeWindow(const ExecuteWindowResult& value);

    /// <summary>
    /// **参数解释**: 事件级别。 **取值范围**: - CRITICAL：紧急 - MAJOR：重要 - MINOR：一般 - INFO：提示
    /// </summary>

    std::string getLevel() const;
    bool levelIsSet() const;
    void unsetlevel();
    void setLevel(const std::string& value);

    /// <summary>
    /// **参数解释**: 事件执行时间，格式为\&quot;yyyy-mm-ddThh:mm:ssZ\&quot;。其中，T指某个时间的开始；Z指时区偏移量，例如北京时间偏移显示为+0800。 **取值范围**: 不涉及。
    /// </summary>

    std::string getExecuteTime() const;
    bool executeTimeIsSet() const;
    void unsetexecuteTime();
    void setExecuteTime(const std::string& value);

    /// <summary>
    /// **参数解释**: 最晚执行时间，事件将在该时间之前执行。格式为\&quot;yyyy-mm-ddThh:mm:ssZ\&quot;。其中，T指某个时间的开始；Z指时区偏移量，例如北京时间偏移显示为+0800。 **取值范围**: 不涉及。
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
    ExecuteWindowResult executionTimeWindow_;
    bool executionTimeWindowIsSet_;
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

#endif // HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_ScheduleEventInfoResult_H_
