
#ifndef HUAWEICLOUD_SDK_DRS_V5_MODEL_JobDetailResp_H_
#define HUAWEICLOUD_SDK_DRS_V5_MODEL_JobDetailResp_H_


#include <huaweicloud/drs/v5/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/drs/v5/model/SpeedLimitInfo.h>
#include <huaweicloud/drs/v5/model/QueryDiagnosisResult.h>
#include <huaweicloud/drs/v5/model/DbParamInfo.h>
#include <huaweicloud/drs/v5/model/JobEndpointInfo.h>
#include <huaweicloud/drs/v5/model/QueryRepairDetailResp.h>
#include <huaweicloud/drs/v5/model/TuningParamInfo.h>
#include <huaweicloud/drs/v5/model/FailedToBindEipChildInfo.h>
#include <map>
#include <huaweicloud/drs/v5/model/AlarmNotifyConfig.h>
#include <huaweicloud/drs/v5/model/PolicyConfig.h>
#include <huaweicloud/drs/v5/model/ConnectionManagement.h>
#include <huaweicloud/drs/v5/model/QueryMetricResult.h>
#include <huaweicloud/drs/v5/model/QueryNetworkResult.h>
#include <huaweicloud/drs/v5/model/TaskLogInfo.h>
#include <string>
#include <huaweicloud/drs/v5/model/JobNodeInfo.h>
#include <huaweicloud/drs/v5/model/JobProgressInfo.h>
#include <huaweicloud/drs/v5/model/SupportImportFileResult.h>
#include <vector>
#include <huaweicloud/drs/v5/model/QueryMigrationObjectProgressInfo.h>
#include <huaweicloud/drs/v5/model/UserMigrationInfo.h>
#include <huaweicloud/drs/v5/model/CompareResultInfo.h>
#include <huaweicloud/drs/v5/model/QueryPreCheckResult.h>
#include <huaweicloud/drs/v5/model/JobDetailResp_repair_progress_info.h>
#include <huaweicloud/drs/v5/model/PeriodOrderInfo.h>
#include <huaweicloud/drs/v5/model/JobBaseInfo.h>
#include <huaweicloud/drs/v5/model/PublicIpConfig.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 任务详情响应体。
/// </summary>
class HUAWEICLOUD_DRS_V5_EXPORT  JobDetailResp
    : public ModelBase
{
public:
    JobDetailResp();
    virtual ~JobDetailResp();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// JobDetailResp members

    /// <summary>
    /// 任务ID。
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 任务状态。 - CREATING：创建中 - CREATE_FAILED：创建失败 - CONFIGURATION：配置中 - STARTJOBING：启动中 - WAITING_FOR_START：等待启动中 - START_JOB_FAILED：启动失败 - PAUSING：已暂停 - FULL_TRANSFER_STARTED：全量开始，灾备场景下为初始化 - FULL_TRANSFER_FAILED：全量失败，灾备场景下为初始化失败 - FULL_TRANSFER_COMPLETE：全量完成，灾备场景下为初始化完成 - INCRE_TRANSFER_STARTED：增量开始，灾备场景下为灾备中 - INCRE_TRANSFER_FAILED：增量失败，灾备场景下为灾备异常 - RELEASE_RESOURCE_STARTED：结束任务中 - RELEASE_RESOURCE_FAILED：结束任务失败 - RELEASE_RESOURCE_COMPLETE：已结束 - REBUILD_NODE_STARTED：故障恢复中 - REBUILD_NODE_FAILED：故障恢复失败 - CHANGE_JOB_STARTED：任务变更中 - CHANGE_JOB_FAILED：任务变更失败 - DELETED：已删除 - CHILD_TRANSFER_STARTING：再编辑子任务启动中 - CHILD_TRANSFER_STARTED：再编辑子任务迁移中 - CHILD_TRANSFER_COMPLETE：再编辑子任务迁移完成 - CHILD_TRANSFER_FAILED：再编辑子任务迁移失败 - RELEASE_CHILD_TRANSFER_STARTED：再编辑子任务结束中 - RELEASE_CHILD_TRANSFER_COMPLETE：再编辑子任务已结束 - NODE_UPGRADE_START：升级开始 - NODE_UPGRADE_COMPLETE：升级完成 - NODE_UPGRADE_FAILED：升级失败
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// 任务创建时间。
    /// </summary>

    std::string getCreateTime() const;
    bool createTimeIsSet() const;
    void unsetcreateTime();
    void setCreateTime(const std::string& value);

    /// <summary>
    /// 列表中的项目总数，与分页无关。
    /// </summary>

    int32_t getTotalCount() const;
    bool totalCountIsSet() const;
    void unsettotalCount();
    void setTotalCount(int32_t value);

    /// <summary>
    /// 多任务主节点的任务ID。
    /// </summary>

    std::string getMasterJobId() const;
    bool masterJobIdIsSet() const;
    void unsetmasterJobId();
    void setMasterJobId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    JobBaseInfo getBaseInfo() const;
    bool baseInfoIsSet() const;
    void unsetbaseInfo();
    void setBaseInfo(const JobBaseInfo& value);

    /// <summary>
    /// 任务源数据库信息体。
    /// </summary>

    std::vector<JobEndpointInfo>& getSourceEndpoint();
    bool sourceEndpointIsSet() const;
    void unsetsourceEndpoint();
    void setSourceEndpoint(const std::vector<JobEndpointInfo>& value);

    /// <summary>
    /// 任务目标数据库信息体。
    /// </summary>

    std::vector<JobEndpointInfo>& getTargetEndpoint();
    bool targetEndpointIsSet() const;
    void unsettargetEndpoint();
    void setTargetEndpoint(const std::vector<JobEndpointInfo>& value);

    /// <summary>
    /// 
    /// </summary>

    AlarmNotifyConfig getAlarmNotify() const;
    bool alarmNotifyIsSet() const;
    void unsetalarmNotify();
    void setAlarmNotify(const AlarmNotifyConfig& value);

    /// <summary>
    /// 限速信息体。 - 限速：自定义的最大迁移速度，迁移过程中的迁移速度将不会超过该速度。  - 不限速：对迁移速度不进行限制，通常会最大化使用源数据库的出口带宽。该流速模式同时会对源数据库造成读消耗，消耗取决于源数据库的出口带宽。比如：源数据库的出口带宽为100MB/s，假设高速模式使用了80%带宽，则迁移对源数据库将造成80MB/s的读操作IO消耗。
    /// </summary>

    std::vector<SpeedLimitInfo>& getSpeedLimit();
    bool speedLimitIsSet() const;
    void unsetspeedLimit();
    void setSpeedLimit(const std::vector<SpeedLimitInfo>& value);

    /// <summary>
    /// 
    /// </summary>

    UserMigrationInfo getUserMigration() const;
    bool userMigrationIsSet() const;
    void unsetuserMigration();
    void setUserMigration(const UserMigrationInfo& value);

    /// <summary>
    /// 
    /// </summary>

    PolicyConfig getPolicyConfig() const;
    bool policyConfigIsSet() const;
    void unsetpolicyConfig();
    void setPolicyConfig(const PolicyConfig& value);

    /// <summary>
    /// 
    /// </summary>

    DbParamInfo getDbParam() const;
    bool dbParamIsSet() const;
    void unsetdbParam();
    void setDbParam(const DbParamInfo& value);

    /// <summary>
    /// 
    /// </summary>

    TuningParamInfo getTuningParams() const;
    bool tuningParamsIsSet() const;
    void unsettuningParams();
    void setTuningParams(const TuningParamInfo& value);

    /// <summary>
    /// 
    /// </summary>

    PeriodOrderInfo getPeriodOrder() const;
    bool periodOrderIsSet() const;
    void unsetperiodOrder();
    void setPeriodOrder(const PeriodOrderInfo& value);

    /// <summary>
    /// 
    /// </summary>

    JobNodeInfo getNodeInfo() const;
    bool nodeInfoIsSet() const;
    void unsetnodeInfo();
    void setNodeInfo(const JobNodeInfo& value);

    /// <summary>
    /// 日志查询结果信息体。
    /// </summary>

    std::vector<TaskLogInfo>& getLogs();
    bool logsIsSet() const;
    void unsetlogs();
    void setLogs(const std::vector<TaskLogInfo>& value);

    /// <summary>
    /// 网络打通测试结果信息体。
    /// </summary>

    std::vector<QueryNetworkResult>& getNetworkResults();
    bool networkResultsIsSet() const;
    void unsetnetworkResults();
    void setNetworkResults(const std::vector<QueryNetworkResult>& value);

    /// <summary>
    /// 
    /// </summary>

    QueryPreCheckResult getPrecheckResult() const;
    bool precheckResultIsSet() const;
    void unsetprecheckResult();
    void setPrecheckResult(const QueryPreCheckResult& value);

    /// <summary>
    /// 
    /// </summary>

    JobProgressInfo getProgressInfo() const;
    bool progressInfoIsSet() const;
    void unsetprogressInfo();
    void setProgressInfo(const JobProgressInfo& value);

    /// <summary>
    /// 
    /// </summary>

    QueryMigrationObjectProgressInfo getMigrationObjectProgressInfo() const;
    bool migrationObjectProgressInfoIsSet() const;
    void unsetmigrationObjectProgressInfo();
    void setMigrationObjectProgressInfo(const QueryMigrationObjectProgressInfo& value);

    /// <summary>
    /// 
    /// </summary>

    QueryMetricResult getMetrics() const;
    bool metricsIsSet() const;
    void unsetmetrics();
    void setMetrics(const QueryMetricResult& value);

    /// <summary>
    /// 
    /// </summary>

    CompareResultInfo getCompareResult() const;
    bool compareResultIsSet() const;
    void unsetcompareResult();
    void setCompareResult(const CompareResultInfo& value);

    /// <summary>
    /// 
    /// </summary>

    SupportImportFileResult getSupportImportFileResp() const;
    bool supportImportFileRespIsSet() const;
    void unsetsupportImportFileResp();
    void setSupportImportFileResp(const SupportImportFileResult& value);

    /// <summary>
    /// 由开关和版本共同控制的任务级别的功能列表。
    /// </summary>

    std::map<std::string, std::string>& getInstanceFeatures();
    bool instanceFeaturesIsSet() const;
    void unsetinstanceFeatures();
    void setInstanceFeatures(const std::map<std::string, std::string>& value);

    /// <summary>
    /// 任务版本。
    /// </summary>

    std::string getTaskVersion() const;
    bool taskVersionIsSet() const;
    void unsettaskVersion();
    void setTaskVersion(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    ConnectionManagement getConnectionManagement() const;
    bool connectionManagementIsSet() const;
    void unsetconnectionManagement();
    void setConnectionManagement(const ConnectionManagement& value);

    /// <summary>
    /// 指定公网IP的信息
    /// </summary>

    std::vector<PublicIpConfig>& getPublicIpList();
    bool publicIpListIsSet() const;
    void unsetpublicIpList();
    void setPublicIpList(const std::vector<PublicIpConfig>& value);

    /// <summary>
    /// 是否成功绑定公网IP
    /// </summary>

    std::string getBindPublicIpState() const;
    bool bindPublicIpStateIsSet() const;
    void unsetbindPublicIpState();
    void setBindPublicIpState(const std::string& value);

    /// <summary>
    /// 多任务时，存在子任务绑定失败时，返回子任务的信息
    /// </summary>

    std::vector<FailedToBindEipChildInfo>& getChildren();
    bool childrenIsSet() const;
    void unsetchildren();
    void setChildren(const std::vector<FailedToBindEipChildInfo>& value);

    /// <summary>
    /// 解除目标库只读操作后，目标库解除只读是否成功。 - pending：目标库解除操作进行中。 - success：目标库解除只读操作成功。
    /// </summary>

    std::string getIsWritable() const;
    bool isWritableIsSet() const;
    void unsetisWritable();
    void setIsWritable(const std::string& value);

    /// <summary>
    /// 一键诊断结果。
    /// </summary>

    std::vector<QueryDiagnosisResult>& getDiagnoses();
    bool diagnosesIsSet() const;
    void unsetdiagnoses();
    void setDiagnoses(const std::vector<QueryDiagnosisResult>& value);

    /// <summary>
    /// 
    /// </summary>

    JobDetailResp_repair_progress_info getRepairProgressInfo() const;
    bool repairProgressInfoIsSet() const;
    void unsetrepairProgressInfo();
    void setRepairProgressInfo(const JobDetailResp_repair_progress_info& value);

    /// <summary>
    /// 
    /// </summary>

    QueryRepairDetailResp getRepairDetailInfo() const;
    bool repairDetailInfoIsSet() const;
    void unsetrepairDetailInfo();
    void setRepairDetailInfo(const QueryRepairDetailResp& value);

    /// <summary>
    /// 修复SQL导出状态。
    /// </summary>

    std::string getRepairExportStatus() const;
    bool repairExportStatusIsSet() const;
    void unsetrepairExportStatus();
    void setRepairExportStatus(const std::string& value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string status_;
    bool statusIsSet_;
    std::string createTime_;
    bool createTimeIsSet_;
    int32_t totalCount_;
    bool totalCountIsSet_;
    std::string masterJobId_;
    bool masterJobIdIsSet_;
    JobBaseInfo baseInfo_;
    bool baseInfoIsSet_;
    std::vector<JobEndpointInfo> sourceEndpoint_;
    bool sourceEndpointIsSet_;
    std::vector<JobEndpointInfo> targetEndpoint_;
    bool targetEndpointIsSet_;
    AlarmNotifyConfig alarmNotify_;
    bool alarmNotifyIsSet_;
    std::vector<SpeedLimitInfo> speedLimit_;
    bool speedLimitIsSet_;
    UserMigrationInfo userMigration_;
    bool userMigrationIsSet_;
    PolicyConfig policyConfig_;
    bool policyConfigIsSet_;
    DbParamInfo dbParam_;
    bool dbParamIsSet_;
    TuningParamInfo tuningParams_;
    bool tuningParamsIsSet_;
    PeriodOrderInfo periodOrder_;
    bool periodOrderIsSet_;
    JobNodeInfo nodeInfo_;
    bool nodeInfoIsSet_;
    std::vector<TaskLogInfo> logs_;
    bool logsIsSet_;
    std::vector<QueryNetworkResult> networkResults_;
    bool networkResultsIsSet_;
    QueryPreCheckResult precheckResult_;
    bool precheckResultIsSet_;
    JobProgressInfo progressInfo_;
    bool progressInfoIsSet_;
    QueryMigrationObjectProgressInfo migrationObjectProgressInfo_;
    bool migrationObjectProgressInfoIsSet_;
    QueryMetricResult metrics_;
    bool metricsIsSet_;
    CompareResultInfo compareResult_;
    bool compareResultIsSet_;
    SupportImportFileResult supportImportFileResp_;
    bool supportImportFileRespIsSet_;
    std::map<std::string, std::string> instanceFeatures_;
    bool instanceFeaturesIsSet_;
    std::string taskVersion_;
    bool taskVersionIsSet_;
    ConnectionManagement connectionManagement_;
    bool connectionManagementIsSet_;
    std::vector<PublicIpConfig> publicIpList_;
    bool publicIpListIsSet_;
    std::string bindPublicIpState_;
    bool bindPublicIpStateIsSet_;
    std::vector<FailedToBindEipChildInfo> children_;
    bool childrenIsSet_;
    std::string isWritable_;
    bool isWritableIsSet_;
    std::vector<QueryDiagnosisResult> diagnoses_;
    bool diagnosesIsSet_;
    JobDetailResp_repair_progress_info repairProgressInfo_;
    bool repairProgressInfoIsSet_;
    QueryRepairDetailResp repairDetailInfo_;
    bool repairDetailInfoIsSet_;
    std::string repairExportStatus_;
    bool repairExportStatusIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V5_MODEL_JobDetailResp_H_
