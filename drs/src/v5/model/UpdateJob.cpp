

#include "huaweicloud/drs/v5/model/UpdateJob.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




UpdateJob::UpdateJob()
{
    jobId_ = "";
    jobIdIsSet_ = false;
    baseInfoIsSet_ = false;
    sourceEndpointIsSet_ = false;
    targetEndpointIsSet_ = false;
    alarmNotifyIsSet_ = false;
    speedLimitIsSet_ = false;
    userMigrationIsSet_ = false;
    policyConfigIsSet_ = false;
    dbObjectIsSet_ = false;
    dbParamIsSet_ = false;
    tuningParamsIsSet_ = false;
    periodOrderIsSet_ = false;
    nodeInfoIsSet_ = false;
}

UpdateJob::~UpdateJob() = default;

void UpdateJob::validate()
{
}

web::json::value UpdateJob::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
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
    if(dbObjectIsSet_) {
        val[utility::conversions::to_string_t("db_object")] = ModelBase::toJson(dbObject_);
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

    return val;
}

bool UpdateJob::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("job_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("job_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setJobId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("db_object"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("db_object"));
        if(!fieldValue.is_null())
        {
            DbObject refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDbObject(refVal);
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
            ModifyTuningParams refVal;
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
    return ok;
}

std::string UpdateJob::getJobId() const
{
    return jobId_;
}

void UpdateJob::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool UpdateJob::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void UpdateJob::unsetjobId()
{
    jobIdIsSet_ = false;
}

JobBaseInfo UpdateJob::getBaseInfo() const
{
    return baseInfo_;
}

void UpdateJob::setBaseInfo(const JobBaseInfo& value)
{
    baseInfo_ = value;
    baseInfoIsSet_ = true;
}

bool UpdateJob::baseInfoIsSet() const
{
    return baseInfoIsSet_;
}

void UpdateJob::unsetbaseInfo()
{
    baseInfoIsSet_ = false;
}

std::vector<JobEndpointInfo>& UpdateJob::getSourceEndpoint()
{
    return sourceEndpoint_;
}

void UpdateJob::setSourceEndpoint(const std::vector<JobEndpointInfo>& value)
{
    sourceEndpoint_ = value;
    sourceEndpointIsSet_ = true;
}

bool UpdateJob::sourceEndpointIsSet() const
{
    return sourceEndpointIsSet_;
}

void UpdateJob::unsetsourceEndpoint()
{
    sourceEndpointIsSet_ = false;
}

std::vector<JobEndpointInfo>& UpdateJob::getTargetEndpoint()
{
    return targetEndpoint_;
}

void UpdateJob::setTargetEndpoint(const std::vector<JobEndpointInfo>& value)
{
    targetEndpoint_ = value;
    targetEndpointIsSet_ = true;
}

bool UpdateJob::targetEndpointIsSet() const
{
    return targetEndpointIsSet_;
}

void UpdateJob::unsettargetEndpoint()
{
    targetEndpointIsSet_ = false;
}

AlarmNotifyConfig UpdateJob::getAlarmNotify() const
{
    return alarmNotify_;
}

void UpdateJob::setAlarmNotify(const AlarmNotifyConfig& value)
{
    alarmNotify_ = value;
    alarmNotifyIsSet_ = true;
}

bool UpdateJob::alarmNotifyIsSet() const
{
    return alarmNotifyIsSet_;
}

void UpdateJob::unsetalarmNotify()
{
    alarmNotifyIsSet_ = false;
}

std::vector<SpeedLimitInfo>& UpdateJob::getSpeedLimit()
{
    return speedLimit_;
}

void UpdateJob::setSpeedLimit(const std::vector<SpeedLimitInfo>& value)
{
    speedLimit_ = value;
    speedLimitIsSet_ = true;
}

bool UpdateJob::speedLimitIsSet() const
{
    return speedLimitIsSet_;
}

void UpdateJob::unsetspeedLimit()
{
    speedLimitIsSet_ = false;
}

UserMigrationInfo UpdateJob::getUserMigration() const
{
    return userMigration_;
}

void UpdateJob::setUserMigration(const UserMigrationInfo& value)
{
    userMigration_ = value;
    userMigrationIsSet_ = true;
}

bool UpdateJob::userMigrationIsSet() const
{
    return userMigrationIsSet_;
}

void UpdateJob::unsetuserMigration()
{
    userMigrationIsSet_ = false;
}

PolicyConfig UpdateJob::getPolicyConfig() const
{
    return policyConfig_;
}

void UpdateJob::setPolicyConfig(const PolicyConfig& value)
{
    policyConfig_ = value;
    policyConfigIsSet_ = true;
}

bool UpdateJob::policyConfigIsSet() const
{
    return policyConfigIsSet_;
}

void UpdateJob::unsetpolicyConfig()
{
    policyConfigIsSet_ = false;
}

DbObject UpdateJob::getDbObject() const
{
    return dbObject_;
}

void UpdateJob::setDbObject(const DbObject& value)
{
    dbObject_ = value;
    dbObjectIsSet_ = true;
}

bool UpdateJob::dbObjectIsSet() const
{
    return dbObjectIsSet_;
}

void UpdateJob::unsetdbObject()
{
    dbObjectIsSet_ = false;
}

DbParamInfo UpdateJob::getDbParam() const
{
    return dbParam_;
}

void UpdateJob::setDbParam(const DbParamInfo& value)
{
    dbParam_ = value;
    dbParamIsSet_ = true;
}

bool UpdateJob::dbParamIsSet() const
{
    return dbParamIsSet_;
}

void UpdateJob::unsetdbParam()
{
    dbParamIsSet_ = false;
}

ModifyTuningParams UpdateJob::getTuningParams() const
{
    return tuningParams_;
}

void UpdateJob::setTuningParams(const ModifyTuningParams& value)
{
    tuningParams_ = value;
    tuningParamsIsSet_ = true;
}

bool UpdateJob::tuningParamsIsSet() const
{
    return tuningParamsIsSet_;
}

void UpdateJob::unsettuningParams()
{
    tuningParamsIsSet_ = false;
}

PeriodOrderInfo UpdateJob::getPeriodOrder() const
{
    return periodOrder_;
}

void UpdateJob::setPeriodOrder(const PeriodOrderInfo& value)
{
    periodOrder_ = value;
    periodOrderIsSet_ = true;
}

bool UpdateJob::periodOrderIsSet() const
{
    return periodOrderIsSet_;
}

void UpdateJob::unsetperiodOrder()
{
    periodOrderIsSet_ = false;
}

JobNodeInfo UpdateJob::getNodeInfo() const
{
    return nodeInfo_;
}

void UpdateJob::setNodeInfo(const JobNodeInfo& value)
{
    nodeInfo_ = value;
    nodeInfoIsSet_ = true;
}

bool UpdateJob::nodeInfoIsSet() const
{
    return nodeInfoIsSet_;
}

void UpdateJob::unsetnodeInfo()
{
    nodeInfoIsSet_ = false;
}

}
}
}
}
}


