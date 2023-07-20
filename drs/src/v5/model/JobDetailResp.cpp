

#include "huaweicloud/drs/v5/model/JobDetailResp.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




JobDetailResp::JobDetailResp()
{
    id_ = "";
    idIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    createTime_ = "";
    createTimeIsSet_ = false;
    totalCount_ = 0;
    totalCountIsSet_ = false;
    masterJobId_ = "";
    masterJobIdIsSet_ = false;
    baseInfoIsSet_ = false;
    sourceEndpointIsSet_ = false;
    targetEndpointIsSet_ = false;
    alarmNotifyIsSet_ = false;
    speedLimitIsSet_ = false;
    userMigrationIsSet_ = false;
    policyConfigIsSet_ = false;
    dbParamIsSet_ = false;
    tuningParamsIsSet_ = false;
    periodOrderIsSet_ = false;
    nodeInfoIsSet_ = false;
    logsIsSet_ = false;
    networkResultsIsSet_ = false;
    precheckResultIsSet_ = false;
    progressInfoIsSet_ = false;
    migrationObjectProgressInfoIsSet_ = false;
    metricsIsSet_ = false;
    compareResultIsSet_ = false;
    supportImportFileRespIsSet_ = false;
    instanceFeaturesIsSet_ = false;
    taskVersion_ = "";
    taskVersionIsSet_ = false;
}

JobDetailResp::~JobDetailResp() = default;

void JobDetailResp::validate()
{
}

web::json::value JobDetailResp::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(createTimeIsSet_) {
        val[utility::conversions::to_string_t("create_time")] = ModelBase::toJson(createTime_);
    }
    if(totalCountIsSet_) {
        val[utility::conversions::to_string_t("total_count")] = ModelBase::toJson(totalCount_);
    }
    if(masterJobIdIsSet_) {
        val[utility::conversions::to_string_t("master_job_id")] = ModelBase::toJson(masterJobId_);
    }
    if(baseInfoIsSet_) {
        val[utility::conversions::to_string_t("base_info")] = ModelBase::toJson(baseInfo_);
    }
    if(sourceEndpointIsSet_) {
        val[utility::conversions::to_string_t("source_endpoint")] = ModelBase::toJson(sourceEndpoint_);
    }
    if(targetEndpointIsSet_) {
        val[utility::conversions::to_string_t("target_endpoint")] = ModelBase::toJson(targetEndpoint_);
    }
    if(alarmNotifyIsSet_) {
        val[utility::conversions::to_string_t("alarm_notify")] = ModelBase::toJson(alarmNotify_);
    }
    if(speedLimitIsSet_) {
        val[utility::conversions::to_string_t("speed_limit")] = ModelBase::toJson(speedLimit_);
    }
    if(userMigrationIsSet_) {
        val[utility::conversions::to_string_t("user_migration")] = ModelBase::toJson(userMigration_);
    }
    if(policyConfigIsSet_) {
        val[utility::conversions::to_string_t("policy_config")] = ModelBase::toJson(policyConfig_);
    }
    if(dbParamIsSet_) {
        val[utility::conversions::to_string_t("db_param")] = ModelBase::toJson(dbParam_);
    }
    if(tuningParamsIsSet_) {
        val[utility::conversions::to_string_t("tuning_params")] = ModelBase::toJson(tuningParams_);
    }
    if(periodOrderIsSet_) {
        val[utility::conversions::to_string_t("period_order")] = ModelBase::toJson(periodOrder_);
    }
    if(nodeInfoIsSet_) {
        val[utility::conversions::to_string_t("node_info")] = ModelBase::toJson(nodeInfo_);
    }
    if(logsIsSet_) {
        val[utility::conversions::to_string_t("logs")] = ModelBase::toJson(logs_);
    }
    if(networkResultsIsSet_) {
        val[utility::conversions::to_string_t("network_results")] = ModelBase::toJson(networkResults_);
    }
    if(precheckResultIsSet_) {
        val[utility::conversions::to_string_t("precheck_result")] = ModelBase::toJson(precheckResult_);
    }
    if(progressInfoIsSet_) {
        val[utility::conversions::to_string_t("progress_info")] = ModelBase::toJson(progressInfo_);
    }
    if(migrationObjectProgressInfoIsSet_) {
        val[utility::conversions::to_string_t("migration_object_progress_info")] = ModelBase::toJson(migrationObjectProgressInfo_);
    }
    if(metricsIsSet_) {
        val[utility::conversions::to_string_t("metrics")] = ModelBase::toJson(metrics_);
    }
    if(compareResultIsSet_) {
        val[utility::conversions::to_string_t("compare_result")] = ModelBase::toJson(compareResult_);
    }
    if(supportImportFileRespIsSet_) {
        val[utility::conversions::to_string_t("support_import_file_resp")] = ModelBase::toJson(supportImportFileResp_);
    }
    if(instanceFeaturesIsSet_) {
        val[utility::conversions::to_string_t("instance_features")] = ModelBase::toJson(instanceFeatures_);
    }
    if(taskVersionIsSet_) {
        val[utility::conversions::to_string_t("task_version")] = ModelBase::toJson(taskVersion_);
    }

    return val;
}

bool JobDetailResp::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("create_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("create_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreateTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("total_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total_count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotalCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("master_job_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("master_job_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMasterJobId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("base_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("base_info"));
        if(!fieldValue.is_null())
        {
            JobBaseInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBaseInfo(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("source_endpoint"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("source_endpoint"));
        if(!fieldValue.is_null())
        {
            std::vector<JobEndpointInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSourceEndpoint(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("target_endpoint"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("target_endpoint"));
        if(!fieldValue.is_null())
        {
            std::vector<JobEndpointInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTargetEndpoint(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("alarm_notify"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("alarm_notify"));
        if(!fieldValue.is_null())
        {
            AlarmNotifyConfig refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAlarmNotify(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("speed_limit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("speed_limit"));
        if(!fieldValue.is_null())
        {
            std::vector<SpeedLimitInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSpeedLimit(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("user_migration"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("user_migration"));
        if(!fieldValue.is_null())
        {
            UserMigrationInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUserMigration(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("policy_config"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("policy_config"));
        if(!fieldValue.is_null())
        {
            PolicyConfig refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPolicyConfig(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("db_param"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("db_param"));
        if(!fieldValue.is_null())
        {
            DbParamInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDbParam(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("tuning_params"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tuning_params"));
        if(!fieldValue.is_null())
        {
            TuningParamInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTuningParams(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("period_order"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("period_order"));
        if(!fieldValue.is_null())
        {
            PeriodOrderInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPeriodOrder(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("node_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("node_info"));
        if(!fieldValue.is_null())
        {
            JobNodeInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNodeInfo(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("logs"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("logs"));
        if(!fieldValue.is_null())
        {
            std::vector<TaskLogInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLogs(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("network_results"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("network_results"));
        if(!fieldValue.is_null())
        {
            std::vector<QueryNetworkResult> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNetworkResults(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("precheck_result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("precheck_result"));
        if(!fieldValue.is_null())
        {
            QueryPreCheckResult refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPrecheckResult(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("progress_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("progress_info"));
        if(!fieldValue.is_null())
        {
            JobProgressInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProgressInfo(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("migration_object_progress_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("migration_object_progress_info"));
        if(!fieldValue.is_null())
        {
            QueryMigrationObjectProgressInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMigrationObjectProgressInfo(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("metrics"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("metrics"));
        if(!fieldValue.is_null())
        {
            QueryMetricResult refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMetrics(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("compare_result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("compare_result"));
        if(!fieldValue.is_null())
        {
            CompareResultInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCompareResult(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("support_import_file_resp"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("support_import_file_resp"));
        if(!fieldValue.is_null())
        {
            SupportImportFileResult refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSupportImportFileResp(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("instance_features"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_features"));
        if(!fieldValue.is_null())
        {
            std::map<std::string, std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceFeatures(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("task_version"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("task_version"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTaskVersion(refVal);
        }
    }
    return ok;
}

std::string JobDetailResp::getId() const
{
    return id_;
}

void JobDetailResp::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool JobDetailResp::idIsSet() const
{
    return idIsSet_;
}

void JobDetailResp::unsetid()
{
    idIsSet_ = false;
}

std::string JobDetailResp::getStatus() const
{
    return status_;
}

void JobDetailResp::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool JobDetailResp::statusIsSet() const
{
    return statusIsSet_;
}

void JobDetailResp::unsetstatus()
{
    statusIsSet_ = false;
}

std::string JobDetailResp::getCreateTime() const
{
    return createTime_;
}

void JobDetailResp::setCreateTime(const std::string& value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool JobDetailResp::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void JobDetailResp::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

int32_t JobDetailResp::getTotalCount() const
{
    return totalCount_;
}

void JobDetailResp::setTotalCount(int32_t value)
{
    totalCount_ = value;
    totalCountIsSet_ = true;
}

bool JobDetailResp::totalCountIsSet() const
{
    return totalCountIsSet_;
}

void JobDetailResp::unsettotalCount()
{
    totalCountIsSet_ = false;
}

std::string JobDetailResp::getMasterJobId() const
{
    return masterJobId_;
}

void JobDetailResp::setMasterJobId(const std::string& value)
{
    masterJobId_ = value;
    masterJobIdIsSet_ = true;
}

bool JobDetailResp::masterJobIdIsSet() const
{
    return masterJobIdIsSet_;
}

void JobDetailResp::unsetmasterJobId()
{
    masterJobIdIsSet_ = false;
}

JobBaseInfo JobDetailResp::getBaseInfo() const
{
    return baseInfo_;
}

void JobDetailResp::setBaseInfo(const JobBaseInfo& value)
{
    baseInfo_ = value;
    baseInfoIsSet_ = true;
}

bool JobDetailResp::baseInfoIsSet() const
{
    return baseInfoIsSet_;
}

void JobDetailResp::unsetbaseInfo()
{
    baseInfoIsSet_ = false;
}

std::vector<JobEndpointInfo>& JobDetailResp::getSourceEndpoint()
{
    return sourceEndpoint_;
}

void JobDetailResp::setSourceEndpoint(const std::vector<JobEndpointInfo>& value)
{
    sourceEndpoint_ = value;
    sourceEndpointIsSet_ = true;
}

bool JobDetailResp::sourceEndpointIsSet() const
{
    return sourceEndpointIsSet_;
}

void JobDetailResp::unsetsourceEndpoint()
{
    sourceEndpointIsSet_ = false;
}

std::vector<JobEndpointInfo>& JobDetailResp::getTargetEndpoint()
{
    return targetEndpoint_;
}

void JobDetailResp::setTargetEndpoint(const std::vector<JobEndpointInfo>& value)
{
    targetEndpoint_ = value;
    targetEndpointIsSet_ = true;
}

bool JobDetailResp::targetEndpointIsSet() const
{
    return targetEndpointIsSet_;
}

void JobDetailResp::unsettargetEndpoint()
{
    targetEndpointIsSet_ = false;
}

AlarmNotifyConfig JobDetailResp::getAlarmNotify() const
{
    return alarmNotify_;
}

void JobDetailResp::setAlarmNotify(const AlarmNotifyConfig& value)
{
    alarmNotify_ = value;
    alarmNotifyIsSet_ = true;
}

bool JobDetailResp::alarmNotifyIsSet() const
{
    return alarmNotifyIsSet_;
}

void JobDetailResp::unsetalarmNotify()
{
    alarmNotifyIsSet_ = false;
}

std::vector<SpeedLimitInfo>& JobDetailResp::getSpeedLimit()
{
    return speedLimit_;
}

void JobDetailResp::setSpeedLimit(const std::vector<SpeedLimitInfo>& value)
{
    speedLimit_ = value;
    speedLimitIsSet_ = true;
}

bool JobDetailResp::speedLimitIsSet() const
{
    return speedLimitIsSet_;
}

void JobDetailResp::unsetspeedLimit()
{
    speedLimitIsSet_ = false;
}

UserMigrationInfo JobDetailResp::getUserMigration() const
{
    return userMigration_;
}

void JobDetailResp::setUserMigration(const UserMigrationInfo& value)
{
    userMigration_ = value;
    userMigrationIsSet_ = true;
}

bool JobDetailResp::userMigrationIsSet() const
{
    return userMigrationIsSet_;
}

void JobDetailResp::unsetuserMigration()
{
    userMigrationIsSet_ = false;
}

PolicyConfig JobDetailResp::getPolicyConfig() const
{
    return policyConfig_;
}

void JobDetailResp::setPolicyConfig(const PolicyConfig& value)
{
    policyConfig_ = value;
    policyConfigIsSet_ = true;
}

bool JobDetailResp::policyConfigIsSet() const
{
    return policyConfigIsSet_;
}

void JobDetailResp::unsetpolicyConfig()
{
    policyConfigIsSet_ = false;
}

DbParamInfo JobDetailResp::getDbParam() const
{
    return dbParam_;
}

void JobDetailResp::setDbParam(const DbParamInfo& value)
{
    dbParam_ = value;
    dbParamIsSet_ = true;
}

bool JobDetailResp::dbParamIsSet() const
{
    return dbParamIsSet_;
}

void JobDetailResp::unsetdbParam()
{
    dbParamIsSet_ = false;
}

TuningParamInfo JobDetailResp::getTuningParams() const
{
    return tuningParams_;
}

void JobDetailResp::setTuningParams(const TuningParamInfo& value)
{
    tuningParams_ = value;
    tuningParamsIsSet_ = true;
}

bool JobDetailResp::tuningParamsIsSet() const
{
    return tuningParamsIsSet_;
}

void JobDetailResp::unsettuningParams()
{
    tuningParamsIsSet_ = false;
}

PeriodOrderInfo JobDetailResp::getPeriodOrder() const
{
    return periodOrder_;
}

void JobDetailResp::setPeriodOrder(const PeriodOrderInfo& value)
{
    periodOrder_ = value;
    periodOrderIsSet_ = true;
}

bool JobDetailResp::periodOrderIsSet() const
{
    return periodOrderIsSet_;
}

void JobDetailResp::unsetperiodOrder()
{
    periodOrderIsSet_ = false;
}

JobNodeInfo JobDetailResp::getNodeInfo() const
{
    return nodeInfo_;
}

void JobDetailResp::setNodeInfo(const JobNodeInfo& value)
{
    nodeInfo_ = value;
    nodeInfoIsSet_ = true;
}

bool JobDetailResp::nodeInfoIsSet() const
{
    return nodeInfoIsSet_;
}

void JobDetailResp::unsetnodeInfo()
{
    nodeInfoIsSet_ = false;
}

std::vector<TaskLogInfo>& JobDetailResp::getLogs()
{
    return logs_;
}

void JobDetailResp::setLogs(const std::vector<TaskLogInfo>& value)
{
    logs_ = value;
    logsIsSet_ = true;
}

bool JobDetailResp::logsIsSet() const
{
    return logsIsSet_;
}

void JobDetailResp::unsetlogs()
{
    logsIsSet_ = false;
}

std::vector<QueryNetworkResult>& JobDetailResp::getNetworkResults()
{
    return networkResults_;
}

void JobDetailResp::setNetworkResults(const std::vector<QueryNetworkResult>& value)
{
    networkResults_ = value;
    networkResultsIsSet_ = true;
}

bool JobDetailResp::networkResultsIsSet() const
{
    return networkResultsIsSet_;
}

void JobDetailResp::unsetnetworkResults()
{
    networkResultsIsSet_ = false;
}

QueryPreCheckResult JobDetailResp::getPrecheckResult() const
{
    return precheckResult_;
}

void JobDetailResp::setPrecheckResult(const QueryPreCheckResult& value)
{
    precheckResult_ = value;
    precheckResultIsSet_ = true;
}

bool JobDetailResp::precheckResultIsSet() const
{
    return precheckResultIsSet_;
}

void JobDetailResp::unsetprecheckResult()
{
    precheckResultIsSet_ = false;
}

JobProgressInfo JobDetailResp::getProgressInfo() const
{
    return progressInfo_;
}

void JobDetailResp::setProgressInfo(const JobProgressInfo& value)
{
    progressInfo_ = value;
    progressInfoIsSet_ = true;
}

bool JobDetailResp::progressInfoIsSet() const
{
    return progressInfoIsSet_;
}

void JobDetailResp::unsetprogressInfo()
{
    progressInfoIsSet_ = false;
}

QueryMigrationObjectProgressInfo JobDetailResp::getMigrationObjectProgressInfo() const
{
    return migrationObjectProgressInfo_;
}

void JobDetailResp::setMigrationObjectProgressInfo(const QueryMigrationObjectProgressInfo& value)
{
    migrationObjectProgressInfo_ = value;
    migrationObjectProgressInfoIsSet_ = true;
}

bool JobDetailResp::migrationObjectProgressInfoIsSet() const
{
    return migrationObjectProgressInfoIsSet_;
}

void JobDetailResp::unsetmigrationObjectProgressInfo()
{
    migrationObjectProgressInfoIsSet_ = false;
}

QueryMetricResult JobDetailResp::getMetrics() const
{
    return metrics_;
}

void JobDetailResp::setMetrics(const QueryMetricResult& value)
{
    metrics_ = value;
    metricsIsSet_ = true;
}

bool JobDetailResp::metricsIsSet() const
{
    return metricsIsSet_;
}

void JobDetailResp::unsetmetrics()
{
    metricsIsSet_ = false;
}

CompareResultInfo JobDetailResp::getCompareResult() const
{
    return compareResult_;
}

void JobDetailResp::setCompareResult(const CompareResultInfo& value)
{
    compareResult_ = value;
    compareResultIsSet_ = true;
}

bool JobDetailResp::compareResultIsSet() const
{
    return compareResultIsSet_;
}

void JobDetailResp::unsetcompareResult()
{
    compareResultIsSet_ = false;
}

SupportImportFileResult JobDetailResp::getSupportImportFileResp() const
{
    return supportImportFileResp_;
}

void JobDetailResp::setSupportImportFileResp(const SupportImportFileResult& value)
{
    supportImportFileResp_ = value;
    supportImportFileRespIsSet_ = true;
}

bool JobDetailResp::supportImportFileRespIsSet() const
{
    return supportImportFileRespIsSet_;
}

void JobDetailResp::unsetsupportImportFileResp()
{
    supportImportFileRespIsSet_ = false;
}

std::map<std::string, std::string>& JobDetailResp::getInstanceFeatures()
{
    return instanceFeatures_;
}

void JobDetailResp::setInstanceFeatures(const std::map<std::string, std::string>& value)
{
    instanceFeatures_ = value;
    instanceFeaturesIsSet_ = true;
}

bool JobDetailResp::instanceFeaturesIsSet() const
{
    return instanceFeaturesIsSet_;
}

void JobDetailResp::unsetinstanceFeatures()
{
    instanceFeaturesIsSet_ = false;
}

std::string JobDetailResp::getTaskVersion() const
{
    return taskVersion_;
}

void JobDetailResp::setTaskVersion(const std::string& value)
{
    taskVersion_ = value;
    taskVersionIsSet_ = true;
}

bool JobDetailResp::taskVersionIsSet() const
{
    return taskVersionIsSet_;
}

void JobDetailResp::unsettaskVersion()
{
    taskVersionIsSet_ = false;
}

}
}
}
}
}


