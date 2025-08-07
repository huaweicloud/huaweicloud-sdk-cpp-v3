
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_ScheduleTaskInfo_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_ScheduleTaskInfo_H_


#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/rds/v3/model/TargetConfig.h>
#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  ScheduleTaskInfo
    : public ModelBase
{
public:
    ScheduleTaskInfo();
    virtual ~ScheduleTaskInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ScheduleTaskInfo members

    /// <summary>
    /// 任务ID。
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 任务名称。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 实例ID。
    /// </summary>

    std::string getInstanceId() const;
    bool instanceIdIsSet() const;
    void unsetinstanceId();
    void setInstanceId(const std::string& value);

    /// <summary>
    /// 实例名称。
    /// </summary>

    std::string getInstanceName() const;
    bool instanceNameIsSet() const;
    void unsetinstanceName();
    void setInstanceName(const std::string& value);

    /// <summary>
    /// 实例状态。 - 值为“BUILD”，表示实例正在创建。 - 值为“CREATE FAIL”，表示实例创建失败。 - 值为“ACTIVE”，表示实例正常。 - 值为“FAILED”，表示实例异常。 - 值为“FROZEN”，表示实例冻结。 - 值为“MODIFYING”，表示实例正在扩容。 - 值为“REBOOTING”，表示实例正在重启。 - 值为“RESTORING”，表示实例正在恢复。 - 值为“MODIFYING INSTANCE TYPE”，表示实例正在转主备。 - 值为“SWITCHOVER”，表示实例正在主备切换。 - 值为“MIGRATING”，表示实例正在迁移。 - 值为“BACKING UP”，表示实例正在进行备份。 - 值为“MODIFYING DATABASE PORT”，表示实例正在修改数据库端口。 - 值为“STORAGE FULL”，表示实例磁盘空间满。
    /// </summary>

    std::string getInstanceStatus() const;
    bool instanceStatusIsSet() const;
    void unsetinstanceStatus();
    void setInstanceStatus(const std::string& value);

    /// <summary>
    /// 项目ID。
    /// </summary>

    std::string getProjectId() const;
    bool projectIdIsSet() const;
    void unsetprojectId();
    void setProjectId(const std::string& value);

    /// <summary>
    /// 任务创建时间，格式为“yyyy-mm-ddThh:mm:ssZ”。  其中，T指某个时间的开始；Z指时区偏移量，例如北京时间偏移显示为+0800。
    /// </summary>

    std::string getCreateTime() const;
    bool createTimeIsSet() const;
    void unsetcreateTime();
    void setCreateTime(const std::string& value);

    /// <summary>
    /// 任务计划开始时间，格式为“yyyy-mm-ddThh:mm:ssZ”。  其中，T指某个时间的开始；Z指时区偏移量，例如北京时间偏移显示为+0800。
    /// </summary>

    std::string getStartTime() const;
    bool startTimeIsSet() const;
    void unsetstartTime();
    void setStartTime(const std::string& value);

    /// <summary>
    /// 任务计划结束时间，格式为“yyyy-mm-ddThh:mm:ssZ”。  其中，T指某个时间的开始；Z指时区偏移量，例如北京时间偏移显示为+0800。
    /// </summary>

    std::string getEndTime() const;
    bool endTimeIsSet() const;
    void unsetendTime();
    void setEndTime(const std::string& value);

    /// <summary>
    /// 任务优先级，整数取值范围1-100，数值越小优先级越高。
    /// </summary>

    std::string getOrder() const;
    bool orderIsSet() const;
    void unsetorder();
    void setOrder(const std::string& value);

    /// <summary>
    /// 任务状态。取值范围如下： Initing:初始化中 Pending:挂起 Running:运行中 Completed:已完成 Failed:已失败 Unauthorized:未授权 Canceled:已取消
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// 数据库类型。
    /// </summary>

    std::string getDatastoreType() const;
    bool datastoreTypeIsSet() const;
    void unsetdatastoreType();
    void setDatastoreType(const std::string& value);

    /// <summary>
    /// 磁盘类型。
    /// </summary>

    std::string getVolumeType() const;
    bool volumeTypeIsSet() const;
    void unsetvolumeType();
    void setVolumeType(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    TargetConfig getTargetConfig() const;
    bool targetConfigIsSet() const;
    void unsettargetConfig();
    void setTargetConfig(const TargetConfig& value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string instanceId_;
    bool instanceIdIsSet_;
    std::string instanceName_;
    bool instanceNameIsSet_;
    std::string instanceStatus_;
    bool instanceStatusIsSet_;
    std::string projectId_;
    bool projectIdIsSet_;
    std::string createTime_;
    bool createTimeIsSet_;
    std::string startTime_;
    bool startTimeIsSet_;
    std::string endTime_;
    bool endTimeIsSet_;
    std::string order_;
    bool orderIsSet_;
    std::string status_;
    bool statusIsSet_;
    std::string datastoreType_;
    bool datastoreTypeIsSet_;
    std::string volumeType_;
    bool volumeTypeIsSet_;
    TargetConfig targetConfig_;
    bool targetConfigIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_ScheduleTaskInfo_H_
