
#ifndef HUAWEICLOUD_SDK_DRS_V5_MODEL_ExportJobsReq_H_
#define HUAWEICLOUD_SDK_DRS_V5_MODEL_ExportJobsReq_H_


#include <huaweicloud/drs/v5/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 导出任务列表请求体
/// </summary>
class HUAWEICLOUD_DRS_V5_EXPORT  ExportJobsReq
    : public ModelBase
{
public:
    ExportJobsReq();
    virtual ~ExportJobsReq();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ExportJobsReq members

    /// <summary>
    /// DRS任务的业务场景类型。用于筛选导出特定业务场景类型的任务列表。 取值： - migration 实时迁移 - sync 实时同步 - backupMigration 备份迁移 - subscription 订阅 - cloudDataGuard 实时灾备
    /// </summary>

    std::string getJobType() const;
    bool jobTypeIsSet() const;
    void unsetjobType();
    void setJobType(const std::string& value);

    /// <summary>
    /// 任务名称。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 任务状态。默认查询所有状态的任务 - 当job_type取值：migration,sync,cloudDataGuard     对应的任务状态取值如下：     CREATING：创建中。     CREATE_FAILED：创建失败。     CONFIGURATION：配置中。     STARTJOBING：启动中。     WAITING_FOR_START：等待启动中。     START_JOB_FAILED：任务启动失败。     FULL_TRANSFER_STARTED：全量迁移中，灾备场景为初始化。     FULL_TRANSFER_FAILED：全量迁移失败，灾备场景为初始化失败。     FULL_TRANSFER_COMPLETE：全量迁移完成，灾备场景为初始化完成。     INCRE_TRANSFER_STARTED：增量迁移中，灾备场景为灾备中。     INCRE_TRANSFER_FAILED：增量迁移失败，灾备场景为灾备异常。     RELEASE_RESOURCE_STARTED：结束任务中。     RELEASE_RESOURCE_FAILED：结束任务失败。     RELEASE_RESOURCE_COMPLETE：已结束。     CHANGE_JOB_STARTED：任务变更中。     CHANGE_JOB_FAILED：任务变更失败。     CHILD_TRANSFER_STARTING：子任务启动中。     CHILD_TRANSFER_STARTED：子任务迁移中。     CHILD_TRANSFER_COMPLETE：子任务迁移完成。     CHILD_TRANSFER_FAILED：子任务迁移失败。     RELEASE_CHILD_TRANSFER_STARTED：子任务结束中。     RELEASE_CHILD_TRANSFER_COMPLETE：子任务已结束。其中，异常状态可单独查询，也可以通过以下方式查询全部异常任务：CREATE_FAILED，START_JOB_FAILED，FULL_TRANSFER_FAILED，INCRE_TRANSFER_FAILED，RELEASE_RESOURCE_FAILED，CHANGE_JOB_FAILED，CHILD_TRANSFER_FAILED。 - 当job_type取值：backupMigration   对应的任务状态取值如下：     SUBSCRIPTION_STARTED：创建中。     CREATE_FAILED：创建失败。     SUBSCRIPTION_FAILED：订阅失败。     CONFIGURATION：配置中。     STARTJOBING：启动中。     REBUILD_NODE_STARTED：故障恢复。     REBUILD_NODE_FAILED：故障恢复失败。     START_JOB_FAILED：任务启动失败。 - 当job_type取值：subscription   对应的任务状态取值如下：     SUCCESS：成功。     TRANSFERRING：备份迁移中。     FAILED：失败。     PRECHECK FAILED：预检查失败。
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// 数据库实例ID，最大数量为10。
    /// </summary>

    std::vector<std::string>& getDbsInstanceIds();
    bool dbsInstanceIdsIsSet() const;
    void unsetdbsInstanceIds();
    void setDbsInstanceIds(const std::vector<std::string>& value);

    /// <summary>
    /// 描述。
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// 创建时间。 当job_type取值：migration,sync,cloudDataGuard， 任务创建时间，比如\&quot;2026-05-25T13:41:00.127Z|2026-05-28T13:41:00.999Z\&quot; 当job_type取值：backupMigration， 表示任务创建时间，比如\&quot;2026-05-25T13:41:00.127Z|2026-05-28T13:41:00.999Z\&quot; 当job_type取值：subscription，表示消费时间点，比如\&quot;2026-05-25T13:25:46.383Z|2026-05-28T13:25:46.999Z\&quot;
    /// </summary>

    std::string getCreateAt() const;
    bool createAtIsSet() const;
    void unsetcreateAt();
    void setCreateAt(const std::string& value);

    /// <summary>
    /// 完成时间。在job_type是backupMigration时支持该参数填写， 表示任务完成时间，比如\&quot;2026-05-25T13:41:00.127Z|2026-05-28T13:41:00.999Z\&quot;
    /// </summary>

    std::string getCompletedAt() const;
    bool completedAtIsSet() const;
    void unsetcompletedAt();
    void setCompletedAt(const std::string& value);

    /// <summary>
    /// 企业项目ID。
    /// </summary>

    std::string getEnterpriseProjectId() const;
    bool enterpriseProjectIdIsSet() const;
    void unsetenterpriseProjectId();
    void setEnterpriseProjectId(const std::string& value);

    /// <summary>
    /// 引擎类型。当job_type取值：migration,sync,cloudDataGuard，该参数支持填写。当job_type取值：backupMigration 时，该参数默认值是sqlserver
    /// </summary>

    std::string getEngineType() const;
    bool engineTypeIsSet() const;
    void unsetengineType();
    void setEngineType(const std::string& value);

    /// <summary>
    /// 网络类型。取值： eip：公网网络。 vpc：VPC网络。 vpn：VPN、专线网络。 当job_type取值：migration,sync,cloudDataGuard，该参数支持填写。
    /// </summary>

    std::string getNetType() const;
    bool netTypeIsSet() const;
    void unsetnetType();
    void setNetType(const std::string& value);

    /// <summary>
    /// 计费标识。当job_type取值：migration,sync,cloudDataGuard,subscription，该参数支持填写。取值\&quot;0\&quot;表示计费中，\&quot;1\&quot;表示未计费
    /// </summary>

    std::string getBillingTag() const;
    bool billingTagIsSet() const;
    void unsetbillingTag();
    void setBillingTag(const std::string& value);

    /// <summary>
    /// 计费模式。当job_type取值：migration,sync,cloudDataGuard，支持该参数填写。取值：\&quot;1\&quot;表示包年包月，\&quot;0\&quot;表示按需计费
    /// </summary>

    std::string getBillingMode() const;
    bool billingModeIsSet() const;
    void unsetbillingMode();
    void setBillingMode(const std::string& value);

    /// <summary>
    /// 实例绑定的公网IP。当job_type取值：migration,sync,cloudDataGuard，支持该参数填写。
    /// </summary>

    std::string getPublicIp() const;
    bool publicIpIsSet() const;
    void unsetpublicIp();
    void setPublicIp(const std::string& value);

    /// <summary>
    /// DRS绑定的数据库实例IP。当job_type取值：migration,sync,cloudDataGuard，支持该参数填写。
    /// </summary>

    std::string getInstanceIp() const;
    bool instanceIpIsSet() const;
    void unsetinstanceIp();
    void setInstanceIp(const std::string& value);

    /// <summary>
    /// DRS绑定的内网IP。当job_type取值：migration,sync,cloudDataGuard，支持该参数填写。
    /// </summary>

    std::string getInnerIp() const;
    bool innerIpIsSet() const;
    void unsetinnerIp();
    void setInnerIp(const std::string& value);

    /// <summary>
    /// 规格类型。当job_type取值：migration,sync,cloudDataGuard，支持该参数填写。 取值如下： 2xlarge：极大规格。 xlarge：超大规格。 high：大规格。 medium：中规格。 small：小规格。 micro：极小规格。
    /// </summary>

    std::string getSpecType() const;
    bool specTypeIsSet() const;
    void unsetspecType();
    void setSpecType(const std::string& value);

    /// <summary>
    /// 数据流动方向。 当job_type取值migration,sync时支持传值。 取值： - up：入云 - down：出云 - non-dbs：自建 - multiWrite：双向同步。 当job_type取值cloudDataGuard时支持传值， 取值： - up：本云为备 - down：本云为主 - multiWrite：双主灾备
    /// </summary>

    std::string getDirection() const;
    bool directionIsSet() const;
    void unsetdirection();
    void setDirection(const std::string& value);

    /// <summary>
    /// 同步类型。当job_type取值migration,sync时支持传值。
    /// </summary>

    std::string getTaskType() const;
    bool taskTypeIsSet() const;
    void unsettaskType();
    void setTaskType(const std::string& value);

    /// <summary>
    /// 返回结果按该关键字排序，默认为“create_time”。 当前支持排序的关键字： name status create_time net_type job_direction pay_mode
    /// </summary>

    std::string getSortKey() const;
    bool sortKeyIsSet() const;
    void unsetsortKey();
    void setSortKey(const std::string& value);

    /// <summary>
    /// 降序或升序（分别对应desc和asc，默认为“desc”）。
    /// </summary>

    std::string getSortDir() const;
    bool sortDirIsSet() const;
    void unsetsortDir();
    void setSortDir(const std::string& value);

    /// <summary>
    /// 标签
    /// </summary>

    std::string getTag() const;
    bool tagIsSet() const;
    void unsettag();
    void setTag(const std::string& value);


protected:
    std::string jobType_;
    bool jobTypeIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string status_;
    bool statusIsSet_;
    std::vector<std::string> dbsInstanceIds_;
    bool dbsInstanceIdsIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    std::string createAt_;
    bool createAtIsSet_;
    std::string completedAt_;
    bool completedAtIsSet_;
    std::string enterpriseProjectId_;
    bool enterpriseProjectIdIsSet_;
    std::string engineType_;
    bool engineTypeIsSet_;
    std::string netType_;
    bool netTypeIsSet_;
    std::string billingTag_;
    bool billingTagIsSet_;
    std::string billingMode_;
    bool billingModeIsSet_;
    std::string publicIp_;
    bool publicIpIsSet_;
    std::string instanceIp_;
    bool instanceIpIsSet_;
    std::string innerIp_;
    bool innerIpIsSet_;
    std::string specType_;
    bool specTypeIsSet_;
    std::string direction_;
    bool directionIsSet_;
    std::string taskType_;
    bool taskTypeIsSet_;
    std::string sortKey_;
    bool sortKeyIsSet_;
    std::string sortDir_;
    bool sortDirIsSet_;
    std::string tag_;
    bool tagIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V5_MODEL_ExportJobsReq_H_
