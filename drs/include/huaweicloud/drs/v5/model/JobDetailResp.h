
#ifndef HUAWEICLOUD_SDK_DRS_V5_MODEL_JobDetailResp_H_
#define HUAWEICLOUD_SDK_DRS_V5_MODEL_JobDetailResp_H_


#include <huaweicloud/drs/v5/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/drs/v5/model/ConnectionManagement.h>
#include <huaweicloud/drs/v5/model/SpeedLimitInfo.h>
#include <huaweicloud/drs/v5/model/QueryMetricResult.h>
#include <huaweicloud/drs/v5/model/QueryNetworkResult.h>
#include <huaweicloud/drs/v5/model/TaskLogInfo.h>
#include <string>
#include <huaweicloud/drs/v5/model/JobNodeInfo.h>
#include <huaweicloud/drs/v5/model/JobProgressInfo.h>
#include <huaweicloud/drs/v5/model/SupportImportFileResult.h>
#include <vector>
#include <huaweicloud/drs/v5/model/QueryMigrationObjectProgressInfo.h>
#include <huaweicloud/drs/v5/model/DbParamInfo.h>
#include <huaweicloud/drs/v5/model/UserMigrationInfo.h>
#include <huaweicloud/drs/v5/model/JobEndpointInfo.h>
#include <huaweicloud/drs/v5/model/CompareResultInfo.h>
#include <huaweicloud/drs/v5/model/QueryPreCheckResult.h>
#include <huaweicloud/drs/v5/model/TuningParamInfo.h>
#include <huaweicloud/drs/v5/model/FailedToBindEipChildInfo.h>
#include <huaweicloud/drs/v5/model/PeriodOrderInfo.h>
#include <map>
#include <huaweicloud/drs/v5/model/JobBaseInfo.h>
#include <huaweicloud/drs/v5/model/AlarmNotifyConfig.h>
#include <huaweicloud/drs/v5/model/PolicyConfig.h>
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
    /// 任务状态。
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

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V5_MODEL_JobDetailResp_H_
