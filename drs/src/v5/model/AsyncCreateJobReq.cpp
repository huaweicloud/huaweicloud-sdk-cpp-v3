

#include "huaweicloud/drs/v5/model/AsyncCreateJobReq.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




AsyncCreateJobReq::AsyncCreateJobReq()
{
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

AsyncCreateJobReq::~AsyncCreateJobReq() = default;

void AsyncCreateJobReq::validate()
{
}

web::json::value AsyncCreateJobReq::toJson() const
{
    web::json::value val = web::json::value::object();

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
bool AsyncCreateJobReq::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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
    return ok;
}


JobBaseInfo AsyncCreateJobReq::getBaseInfo() const
{
    return baseInfo_;
}

void AsyncCreateJobReq::setBaseInfo(const JobBaseInfo& value)
{
    baseInfo_ = value;
    baseInfoIsSet_ = true;
}

bool AsyncCreateJobReq::baseInfoIsSet() const
{
    return baseInfoIsSet_;
}

void AsyncCreateJobReq::unsetbaseInfo()
{
    baseInfoIsSet_ = false;
}

std::vector<JobEndpointInfo>& AsyncCreateJobReq::getSourceEndpoint()
{
    return sourceEndpoint_;
}

void AsyncCreateJobReq::setSourceEndpoint(const std::vector<JobEndpointInfo>& value)
{
    sourceEndpoint_ = value;
    sourceEndpointIsSet_ = true;
}

bool AsyncCreateJobReq::sourceEndpointIsSet() const
{
    return sourceEndpointIsSet_;
}

void AsyncCreateJobReq::unsetsourceEndpoint()
{
    sourceEndpointIsSet_ = false;
}

std::vector<JobEndpointInfo>& AsyncCreateJobReq::getTargetEndpoint()
{
    return targetEndpoint_;
}

void AsyncCreateJobReq::setTargetEndpoint(const std::vector<JobEndpointInfo>& value)
{
    targetEndpoint_ = value;
    targetEndpointIsSet_ = true;
}

bool AsyncCreateJobReq::targetEndpointIsSet() const
{
    return targetEndpointIsSet_;
}

void AsyncCreateJobReq::unsettargetEndpoint()
{
    targetEndpointIsSet_ = false;
}

AlarmNotifyConfig AsyncCreateJobReq::getAlarmNotify() const
{
    return alarmNotify_;
}

void AsyncCreateJobReq::setAlarmNotify(const AlarmNotifyConfig& value)
{
    alarmNotify_ = value;
    alarmNotifyIsSet_ = true;
}

bool AsyncCreateJobReq::alarmNotifyIsSet() const
{
    return alarmNotifyIsSet_;
}

void AsyncCreateJobReq::unsetalarmNotify()
{
    alarmNotifyIsSet_ = false;
}

std::vector<SpeedLimitInfo>& AsyncCreateJobReq::getSpeedLimit()
{
    return speedLimit_;
}

void AsyncCreateJobReq::setSpeedLimit(const std::vector<SpeedLimitInfo>& value)
{
    speedLimit_ = value;
    speedLimitIsSet_ = true;
}

bool AsyncCreateJobReq::speedLimitIsSet() const
{
    return speedLimitIsSet_;
}

void AsyncCreateJobReq::unsetspeedLimit()
{
    speedLimitIsSet_ = false;
}

UserMigrationInfo AsyncCreateJobReq::getUserMigration() const
{
    return userMigration_;
}

void AsyncCreateJobReq::setUserMigration(const UserMigrationInfo& value)
{
    userMigration_ = value;
    userMigrationIsSet_ = true;
}

bool AsyncCreateJobReq::userMigrationIsSet() const
{
    return userMigrationIsSet_;
}

void AsyncCreateJobReq::unsetuserMigration()
{
    userMigrationIsSet_ = false;
}

PolicyConfig AsyncCreateJobReq::getPolicyConfig() const
{
    return policyConfig_;
}

void AsyncCreateJobReq::setPolicyConfig(const PolicyConfig& value)
{
    policyConfig_ = value;
    policyConfigIsSet_ = true;
}

bool AsyncCreateJobReq::policyConfigIsSet() const
{
    return policyConfigIsSet_;
}

void AsyncCreateJobReq::unsetpolicyConfig()
{
    policyConfigIsSet_ = false;
}

DbObject AsyncCreateJobReq::getDbObject() const
{
    return dbObject_;
}

void AsyncCreateJobReq::setDbObject(const DbObject& value)
{
    dbObject_ = value;
    dbObjectIsSet_ = true;
}

bool AsyncCreateJobReq::dbObjectIsSet() const
{
    return dbObjectIsSet_;
}

void AsyncCreateJobReq::unsetdbObject()
{
    dbObjectIsSet_ = false;
}

DbParamInfo AsyncCreateJobReq::getDbParam() const
{
    return dbParam_;
}

void AsyncCreateJobReq::setDbParam(const DbParamInfo& value)
{
    dbParam_ = value;
    dbParamIsSet_ = true;
}

bool AsyncCreateJobReq::dbParamIsSet() const
{
    return dbParamIsSet_;
}

void AsyncCreateJobReq::unsetdbParam()
{
    dbParamIsSet_ = false;
}

TuningParamInfo AsyncCreateJobReq::getTuningParams() const
{
    return tuningParams_;
}

void AsyncCreateJobReq::setTuningParams(const TuningParamInfo& value)
{
    tuningParams_ = value;
    tuningParamsIsSet_ = true;
}

bool AsyncCreateJobReq::tuningParamsIsSet() const
{
    return tuningParamsIsSet_;
}

void AsyncCreateJobReq::unsettuningParams()
{
    tuningParamsIsSet_ = false;
}

PeriodOrderInfo AsyncCreateJobReq::getPeriodOrder() const
{
    return periodOrder_;
}

void AsyncCreateJobReq::setPeriodOrder(const PeriodOrderInfo& value)
{
    periodOrder_ = value;
    periodOrderIsSet_ = true;
}

bool AsyncCreateJobReq::periodOrderIsSet() const
{
    return periodOrderIsSet_;
}

void AsyncCreateJobReq::unsetperiodOrder()
{
    periodOrderIsSet_ = false;
}

JobNodeInfo AsyncCreateJobReq::getNodeInfo() const
{
    return nodeInfo_;
}

void AsyncCreateJobReq::setNodeInfo(const JobNodeInfo& value)
{
    nodeInfo_ = value;
    nodeInfoIsSet_ = true;
}

bool AsyncCreateJobReq::nodeInfoIsSet() const
{
    return nodeInfoIsSet_;
}

void AsyncCreateJobReq::unsetnodeInfo()
{
    nodeInfoIsSet_ = false;
}

}
}
}
}
}


