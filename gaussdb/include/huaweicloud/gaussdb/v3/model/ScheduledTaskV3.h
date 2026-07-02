
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ScheduledTaskV3_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ScheduledTaskV3_H_


#include <huaweicloud/gaussdb/v3/GaussDBExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <cpprest/details/basic_types.h>
#include <map>
#include <vector>

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

    utility::datetime getCreateTime() const;
    bool createTimeIsSet() const;
    void unsetcreateTime();
    void setCreateTime(const utility::datetime& value);

    /// <summary>
    /// **参数解释**：  数据库类型。  **取值范围**： 目前只支持gaussdb-mysql。
    /// </summary>

    std::string getDatastoreType() const;
    bool datastoreTypeIsSet() const;
    void unsetdatastoreType();
    void setDatastoreType(const std::string& value);

    /// <summary>
    /// **参数解释**：  任务结束时间。  **取值范围**： 不涉及。
    /// </summary>

    utility::datetime getEndTime() const;
    bool endTimeIsSet() const;
    void unsetendTime();
    void setEndTime(const utility::datetime& value);

    /// <summary>
    /// **参数解释**：  任务绑定的实例ID。  **取值范围**： 不涉及。
    /// </summary>

    std::string getInstanceId() const;
    bool instanceIdIsSet() const;
    void unsetinstanceId();
    void setInstanceId(const std::string& value);

    /// <summary>
    /// **参数解释**：  任务绑定的实例名称。  **取值范围**： 不涉及。
    /// </summary>

    std::string getInstanceName() const;
    bool instanceNameIsSet() const;
    void unsetinstanceName();
    void setInstanceName(const std::string& value);

    /// <summary>
    /// **参数解释**：  任务绑定的实例状态。  **取值范围**： - NORMAL：实例正常状态。 - BACKING_UP：实例备份中状态。 - MODIFYING：实例修改中状态。 - REBUILDING：实例重建中状态。 - RESTORING：实例恢复中状态。 - FROZEN：实例已冻结状态。 - FAILED：实例状态异常。 - DELETING：实例删除中状态。 - CREATE_FAILED：实例创建失败状态。
    /// </summary>

    std::string getInstanceStatus() const;
    bool instanceStatusIsSet() const;
    void unsetinstanceStatus();
    void setInstanceStatus(const std::string& value);

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

    utility::datetime getStartTime() const;
    bool startTimeIsSet() const;
    void unsetstartTime();
    void setStartTime(const utility::datetime& value);

    /// <summary>
    /// **参数解释**：  任务的目标端配置信息，以键值对形式存储。  **取值范围**： 不涉及。
    /// </summary>

    std::map<std::string, std::string>& getTargetConfig();
    bool targetConfigIsSet() const;
    void unsettargetConfig();
    void setTargetConfig(const std::map<std::string, std::string>& value);

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
    /// **参数解释**：  任务执行顺序。  **取值范围**： 不涉及。
    /// </summary>

    int32_t getTaskOrder() const;
    bool taskOrderIsSet() const;
    void unsettaskOrder();
    void setTaskOrder(int32_t value);

    /// <summary>
    /// **参数解释**：  任务状态。  **取值范围**： - RUNNING：任务正在执行。 - SUCCESS：任务执行成功。 - FAIL：任务执行失败。 - CANCELED：任务被取消。 - WAITING：任务等待执行。
    /// </summary>

    std::string getTaskStatus() const;
    bool taskStatusIsSet() const;
    void unsettaskStatus();
    void setTaskStatus(const std::string& value);


protected:
    utility::datetime createTime_;
    bool createTimeIsSet_;
    std::string datastoreType_;
    bool datastoreTypeIsSet_;
    utility::datetime endTime_;
    bool endTimeIsSet_;
    std::string instanceId_;
    bool instanceIdIsSet_;
    std::string instanceName_;
    bool instanceNameIsSet_;
    std::string instanceStatus_;
    bool instanceStatusIsSet_;
    std::string projectId_;
    bool projectIdIsSet_;
    std::string proxyId_;
    bool proxyIdIsSet_;
    std::string proxyName_;
    bool proxyNameIsSet_;
    utility::datetime startTime_;
    bool startTimeIsSet_;
    std::map<std::string, std::string> targetConfig_;
    bool targetConfigIsSet_;
    std::string taskId_;
    bool taskIdIsSet_;
    std::string taskName_;
    bool taskNameIsSet_;
    int32_t taskOrder_;
    bool taskOrderIsSet_;
    std::string taskStatus_;
    bool taskStatusIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ScheduledTaskV3_H_
