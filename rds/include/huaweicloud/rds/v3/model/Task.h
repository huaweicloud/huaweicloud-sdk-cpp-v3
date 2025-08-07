
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_Task_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_Task_H_


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
/// 
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  Task
    : public ModelBase
{
public:
    Task();
    virtual ~Task();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// Task members

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
    /// 订单ID。
    /// </summary>

    std::string getOrderId() const;
    bool orderIdIsSet() const;
    void unsetorderId();
    void setOrderId(const std::string& value);

    /// <summary>
    /// 任务进度，单位百分比，取值范围：0-100。当任务成功或者失败状态下，该值为空字符串。
    /// </summary>

    std::string getProcess() const;
    bool processIsSet() const;
    void unsetprocess();
    void setProcess(const std::string& value);

    /// <summary>
    /// 失败原因。
    /// </summary>

    std::string getFailReason() const;
    bool failReasonIsSet() const;
    void unsetfailReason();
    void setFailReason(const std::string& value);

    /// <summary>
    /// 任务创建时间，格式为“yyyy-mm-ddThh:mm:ssZ”。  其中，T指某个时间的开始；Z指时区偏移量，例如北京时间偏移显示为+0800。
    /// </summary>

    std::string getCreateTime() const;
    bool createTimeIsSet() const;
    void unsetcreateTime();
    void setCreateTime(const std::string& value);

    /// <summary>
    /// 任务计划结束时间，格式为“yyyy-mm-ddThh:mm:ssZ”。  其中，T指某个时间的开始；Z指时区偏移量，例如北京时间偏移显示为+0800。
    /// </summary>

    std::string getEndTime() const;
    bool endTimeIsSet() const;
    void unsetendTime();
    void setEndTime(const std::string& value);

    /// <summary>
    /// 任务状态。取值范围如下： Running:运行中 Completed:已完成 Failed:已失败
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);


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
    std::string orderId_;
    bool orderIdIsSet_;
    std::string process_;
    bool processIsSet_;
    std::string failReason_;
    bool failReasonIsSet_;
    std::string createTime_;
    bool createTimeIsSet_;
    std::string endTime_;
    bool endTimeIsSet_;
    std::string status_;
    bool statusIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_Task_H_
