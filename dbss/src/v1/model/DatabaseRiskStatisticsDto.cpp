

#include "huaweicloud/dbss/v1/model/DatabaseRiskStatisticsDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




DatabaseRiskStatisticsDto::DatabaseRiskStatisticsDto()
{
    dbId_ = "";
    dbIdIsSet_ = false;
    dbIp_ = "";
    dbIpIsSet_ = false;
    dbName_ = "";
    dbNameIsSet_ = false;
    highRisk_ = 0L;
    highRiskIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    instanceName_ = "";
    instanceNameIsSet_ = false;
    lowRisk_ = 0L;
    lowRiskIsSet_ = false;
    mediumRisk_ = 0L;
    mediumRiskIsSet_ = false;
    riskRuleIsSet_ = false;
    totalRisk_ = 0L;
    totalRiskIsSet_ = false;
}

DatabaseRiskStatisticsDto::~DatabaseRiskStatisticsDto() = default;

void DatabaseRiskStatisticsDto::validate()
{
}

web::json::value DatabaseRiskStatisticsDto::toJson() const
{
    web::json::value val = web::json::value::object();

    if(dbIdIsSet_) {
        val[utility::conversions::to_string_t("db_id")] = ModelBase::toJson(dbId_);
    }
    if(dbIpIsSet_) {
        val[utility::conversions::to_string_t("db_ip")] = ModelBase::toJson(dbIp_);
    }
    if(dbNameIsSet_) {
        val[utility::conversions::to_string_t("db_name")] = ModelBase::toJson(dbName_);
    }
    if(highRiskIsSet_) {
        val[utility::conversions::to_string_t("high_risk")] = ModelBase::toJson(highRisk_);
    }
    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(instanceNameIsSet_) {
        val[utility::conversions::to_string_t("instance_name")] = ModelBase::toJson(instanceName_);
    }
    if(lowRiskIsSet_) {
        val[utility::conversions::to_string_t("low_risk")] = ModelBase::toJson(lowRisk_);
    }
    if(mediumRiskIsSet_) {
        val[utility::conversions::to_string_t("medium_risk")] = ModelBase::toJson(mediumRisk_);
    }
    if(riskRuleIsSet_) {
        val[utility::conversions::to_string_t("risk_rule")] = ModelBase::toJson(riskRule_);
    }
    if(totalRiskIsSet_) {
        val[utility::conversions::to_string_t("total_risk")] = ModelBase::toJson(totalRisk_);
    }

    return val;
}
bool DatabaseRiskStatisticsDto::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("db_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("db_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDbId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("db_ip"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("db_ip"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDbIp(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("db_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("db_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDbName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("high_risk"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("high_risk"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHighRisk(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("instance_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("low_risk"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("low_risk"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLowRisk(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("medium_risk"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("medium_risk"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMediumRisk(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("risk_rule"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("risk_rule"));
        if(!fieldValue.is_null())
        {
            std::vector<RiskRuleStatistic> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRiskRule(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("total_risk"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total_risk"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotalRisk(refVal);
        }
    }
    return ok;
}


std::string DatabaseRiskStatisticsDto::getDbId() const
{
    return dbId_;
}

void DatabaseRiskStatisticsDto::setDbId(const std::string& value)
{
    dbId_ = value;
    dbIdIsSet_ = true;
}

bool DatabaseRiskStatisticsDto::dbIdIsSet() const
{
    return dbIdIsSet_;
}

void DatabaseRiskStatisticsDto::unsetdbId()
{
    dbIdIsSet_ = false;
}

std::string DatabaseRiskStatisticsDto::getDbIp() const
{
    return dbIp_;
}

void DatabaseRiskStatisticsDto::setDbIp(const std::string& value)
{
    dbIp_ = value;
    dbIpIsSet_ = true;
}

bool DatabaseRiskStatisticsDto::dbIpIsSet() const
{
    return dbIpIsSet_;
}

void DatabaseRiskStatisticsDto::unsetdbIp()
{
    dbIpIsSet_ = false;
}

std::string DatabaseRiskStatisticsDto::getDbName() const
{
    return dbName_;
}

void DatabaseRiskStatisticsDto::setDbName(const std::string& value)
{
    dbName_ = value;
    dbNameIsSet_ = true;
}

bool DatabaseRiskStatisticsDto::dbNameIsSet() const
{
    return dbNameIsSet_;
}

void DatabaseRiskStatisticsDto::unsetdbName()
{
    dbNameIsSet_ = false;
}

int64_t DatabaseRiskStatisticsDto::getHighRisk() const
{
    return highRisk_;
}

void DatabaseRiskStatisticsDto::setHighRisk(int64_t value)
{
    highRisk_ = value;
    highRiskIsSet_ = true;
}

bool DatabaseRiskStatisticsDto::highRiskIsSet() const
{
    return highRiskIsSet_;
}

void DatabaseRiskStatisticsDto::unsethighRisk()
{
    highRiskIsSet_ = false;
}

std::string DatabaseRiskStatisticsDto::getInstanceId() const
{
    return instanceId_;
}

void DatabaseRiskStatisticsDto::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool DatabaseRiskStatisticsDto::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void DatabaseRiskStatisticsDto::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string DatabaseRiskStatisticsDto::getInstanceName() const
{
    return instanceName_;
}

void DatabaseRiskStatisticsDto::setInstanceName(const std::string& value)
{
    instanceName_ = value;
    instanceNameIsSet_ = true;
}

bool DatabaseRiskStatisticsDto::instanceNameIsSet() const
{
    return instanceNameIsSet_;
}

void DatabaseRiskStatisticsDto::unsetinstanceName()
{
    instanceNameIsSet_ = false;
}

int64_t DatabaseRiskStatisticsDto::getLowRisk() const
{
    return lowRisk_;
}

void DatabaseRiskStatisticsDto::setLowRisk(int64_t value)
{
    lowRisk_ = value;
    lowRiskIsSet_ = true;
}

bool DatabaseRiskStatisticsDto::lowRiskIsSet() const
{
    return lowRiskIsSet_;
}

void DatabaseRiskStatisticsDto::unsetlowRisk()
{
    lowRiskIsSet_ = false;
}

int64_t DatabaseRiskStatisticsDto::getMediumRisk() const
{
    return mediumRisk_;
}

void DatabaseRiskStatisticsDto::setMediumRisk(int64_t value)
{
    mediumRisk_ = value;
    mediumRiskIsSet_ = true;
}

bool DatabaseRiskStatisticsDto::mediumRiskIsSet() const
{
    return mediumRiskIsSet_;
}

void DatabaseRiskStatisticsDto::unsetmediumRisk()
{
    mediumRiskIsSet_ = false;
}

std::vector<RiskRuleStatistic>& DatabaseRiskStatisticsDto::getRiskRule()
{
    return riskRule_;
}

void DatabaseRiskStatisticsDto::setRiskRule(const std::vector<RiskRuleStatistic>& value)
{
    riskRule_ = value;
    riskRuleIsSet_ = true;
}

bool DatabaseRiskStatisticsDto::riskRuleIsSet() const
{
    return riskRuleIsSet_;
}

void DatabaseRiskStatisticsDto::unsetriskRule()
{
    riskRuleIsSet_ = false;
}

int64_t DatabaseRiskStatisticsDto::getTotalRisk() const
{
    return totalRisk_;
}

void DatabaseRiskStatisticsDto::setTotalRisk(int64_t value)
{
    totalRisk_ = value;
    totalRiskIsSet_ = true;
}

bool DatabaseRiskStatisticsDto::totalRiskIsSet() const
{
    return totalRiskIsSet_;
}

void DatabaseRiskStatisticsDto::unsettotalRisk()
{
    totalRiskIsSet_ = false;
}

}
}
}
}
}


