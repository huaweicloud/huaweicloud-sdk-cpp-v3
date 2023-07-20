
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ScheduleTask_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ScheduleTask_H_

#include <huaweicloud/gaussdb/v3/GaussDBExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/core/utils/Object.h>
#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  ScheduleTask
    : public ModelBase
{
public:
    ScheduleTask();
    virtual ~ScheduleTask();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ScheduleTask members

    /// <summary>
    /// 任务ID。
    /// </summary>

    std::string getJobId() const;
    bool jobIdIsSet() const;
    void unsetjobId();
    void setJobId(const std::string& value);

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
    /// 实例状态。 取值： - 值为“createfail”，表示实例创建失败。 - 值为“creating”，表示实例创建中。 - 值为“normal”，表示实例正常。 - 值为“abnormal”，表示实例异常。 - 值为“deleted”，表示实例已删除。
    /// </summary>

    std::string getInstanceStatus() const;
    bool instanceStatusIsSet() const;
    void unsetinstanceStatus();
    void setInstanceStatus(const std::string& value);

    /// <summary>
    /// 租户在某一region下的project ID。
    /// </summary>

    std::string getProjectId() const;
    bool projectIdIsSet() const;
    void unsetprojectId();
    void setProjectId(const std::string& value);

    /// <summary>
    /// 任务名称。取值有：    - \&quot;CreateGaussDBforMySQLInstance\&quot;表示创建实例。    - \&quot;RestoreGaussDBforMySQLNewInstance\&quot;表示恢复新实例。    - \&quot;AddGaussDBforMySQLNodes\&quot;表示添加节点。    - \&quot;DeleteGaussDBforMySQLNode\&quot;表示删除节点。    - \&quot;RebootGaussDBforMySQLInstance\&quot;表示重启实例。    - \&quot;ModifyGaussDBforMySQLPort\&quot;表示修改实例端口。    - \&quot;ModifyGaussDBforMySQLSecurityGroup\&quot;表示修改实例安全组。    - \&quot;ResizeGaussDBforMySQLFlavor\&quot;表示实例规格变更。    - \&quot;SwitchoverGaussDBforMySQLMasterNode\&quot;表示只读升主。    - \&quot;GaussDBforMySQLBindEIP\&quot;表示绑定弹性公网IP。    - \&quot;GaussDBforMySQLUnbindEIP\&quot;表示解绑弹性公网IP。    - \&quot;RenameGaussDBforMySQLInstance\&quot;表示修改实例名称。    - \&quot;DeleteGaussDBforMySQLInstance\&quot;表示删除实例集群。    - \&quot;UpgradeGaussDBforMySQLDatabaseVersion\&quot;表示版本升级。    - \&quot;EnlargeGaussDBforMySQLProxy\&quot;表示实例的数据库代理节点扩容。    - \&quot;OpenGaussDBforMySQLProxy\&quot;表示开启实例的数据库代理。    - \&quot;CloseGaussDBforMySQLProxy\&quot;表示关闭实例的数据库代理。    - \&quot;GaussdbforMySQLModifyProxyIp\&quot;表示修改数据库代理ip。    - \&quot;ScaleGaussDBforMySQLProxy\&quot;表示实例的数据库代理节点规格变更。    - \&quot;GaussDBforMySQLModifyInstanceMetricExtend\&quot;表示实例秒级监控。    - \&quot;GaussDBforMySQLModifyInstanceDataVip\&quot;表示修改实例数据Vip。    - \&quot;GaussDBforMySQLSwitchSSL\&quot;表示切换实例SSL开关。    - \&quot;GaussDBforMySQLModifyProxyConsist\&quot;表示修改代理一致性。    - \&quot;GaussDBforMySQLModifyProxyWeight\&quot;表示修改代理权重。
    /// </summary>

    std::string getJobName() const;
    bool jobNameIsSet() const;
    void unsetjobName();
    void setJobName(const std::string& value);

    /// <summary>
    /// 任务创建时间，格式为\&quot;yyyy-mm-ddThh:mm:ssZ\&quot;。 其中，T指某个时间的开始；Z指时区偏移量，例如偏移1个小时显示为+0100。 说明：创建时返回值为空，数据库实例创建成功后该值不为空
    /// </summary>

    std::string getCreateTime() const;
    bool createTimeIsSet() const;
    void unsetcreateTime();
    void setCreateTime(const std::string& value);

    /// <summary>
    /// 任务开始时间，格式为\&quot;yyyy-mm-ddThh:mm:ssZ\&quot;。 其中，T指某个时间的开始；Z指时区偏移量，例如偏移1个小时显示为+0100。 说明：创建时返回值为空，数据库实例创建成功后该值不为空
    /// </summary>

    std::string getStartTime() const;
    bool startTimeIsSet() const;
    void unsetstartTime();
    void setStartTime(const std::string& value);

    /// <summary>
    /// 任务结束时间，格式为\&quot;yyyy-mm-ddThh:mm:ssZ\&quot;。 其中，T指某个时间的开始；Z指时区偏移量，例如偏移1个小时显示为+0100。 说明：创建时返回值为空，数据库实例创建成功后该值不为空
    /// </summary>

    std::string getEndTime() const;
    bool endTimeIsSet() const;
    void unsetendTime();
    void setEndTime(const std::string& value);

    /// <summary>
    /// 任务执行状态。 取值： - 值为“Pending”，表示延时任务，未执行。 - 值为“Running”，表示任务正在执行。 - 值为“Completed”，表示任务执行成功。 - 值为“Failed”，表示任务执行失败。
    /// </summary>

    std::string getJobStatus() const;
    bool jobStatusIsSet() const;
    void unsetjobStatus();
    void setJobStatus(const std::string& value);

    /// <summary>
    /// 数据库类型。
    /// </summary>

    std::string getDatastoreType() const;
    bool datastoreTypeIsSet() const;
    void unsetdatastoreType();
    void setDatastoreType(const std::string& value);

    /// <summary>
    /// 实例配置相关信息，比如规格等。
    /// </summary>

    Object getTargetConfig() const;
    bool targetConfigIsSet() const;
    void unsettargetConfig();
    void setTargetConfig(const Object& value);


protected:
    std::string jobId_;
    bool jobIdIsSet_;
    std::string instanceId_;
    bool instanceIdIsSet_;
    std::string instanceName_;
    bool instanceNameIsSet_;
    std::string instanceStatus_;
    bool instanceStatusIsSet_;
    std::string projectId_;
    bool projectIdIsSet_;
    std::string jobName_;
    bool jobNameIsSet_;
    std::string createTime_;
    bool createTimeIsSet_;
    std::string startTime_;
    bool startTimeIsSet_;
    std::string endTime_;
    bool endTimeIsSet_;
    std::string jobStatus_;
    bool jobStatusIsSet_;
    std::string datastoreType_;
    bool datastoreTypeIsSet_;
    Object targetConfig_;
    bool targetConfigIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ScheduleTask_H_
