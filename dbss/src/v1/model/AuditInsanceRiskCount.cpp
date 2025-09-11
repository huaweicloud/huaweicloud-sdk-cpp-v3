

#include "huaweicloud/dbss/v1/model/AuditInsanceRiskCount.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




AuditInsanceRiskCount::AuditInsanceRiskCount()
{
    count_ = 0L;
    countIsSet_ = false;
    dbId_ = "";
    dbIdIsSet_ = false;
    dbIp_ = "";
    dbIpIsSet_ = false;
    dbName_ = "";
    dbNameIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    instanceName_ = "";
    instanceNameIsSet_ = false;
}

AuditInsanceRiskCount::~AuditInsanceRiskCount() = default;

void AuditInsanceRiskCount::validate()
{
}

web::json::value AuditInsanceRiskCount::toJson() const
{
    web::json::value val = web::json::value::object();

    if(countIsSet_) {
        val[utility::conversions::to_string_t("count")] = ModelBase::toJson(count_);
    }
    if(dbIdIsSet_) {
        val[utility::conversions::to_string_t("db_id")] = ModelBase::toJson(dbId_);
    }
    if(dbIpIsSet_) {
        val[utility::conversions::to_string_t("db_ip")] = ModelBase::toJson(dbIp_);
    }
    if(dbNameIsSet_) {
        val[utility::conversions::to_string_t("db_name")] = ModelBase::toJson(dbName_);
    }
    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(instanceNameIsSet_) {
        val[utility::conversions::to_string_t("instance_name")] = ModelBase::toJson(instanceName_);
    }

    return val;
}
bool AuditInsanceRiskCount::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("count"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCount(refVal);
        }
    }
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
    return ok;
}


int64_t AuditInsanceRiskCount::getCount() const
{
    return count_;
}

void AuditInsanceRiskCount::setCount(int64_t value)
{
    count_ = value;
    countIsSet_ = true;
}

bool AuditInsanceRiskCount::countIsSet() const
{
    return countIsSet_;
}

void AuditInsanceRiskCount::unsetcount()
{
    countIsSet_ = false;
}

std::string AuditInsanceRiskCount::getDbId() const
{
    return dbId_;
}

void AuditInsanceRiskCount::setDbId(const std::string& value)
{
    dbId_ = value;
    dbIdIsSet_ = true;
}

bool AuditInsanceRiskCount::dbIdIsSet() const
{
    return dbIdIsSet_;
}

void AuditInsanceRiskCount::unsetdbId()
{
    dbIdIsSet_ = false;
}

std::string AuditInsanceRiskCount::getDbIp() const
{
    return dbIp_;
}

void AuditInsanceRiskCount::setDbIp(const std::string& value)
{
    dbIp_ = value;
    dbIpIsSet_ = true;
}

bool AuditInsanceRiskCount::dbIpIsSet() const
{
    return dbIpIsSet_;
}

void AuditInsanceRiskCount::unsetdbIp()
{
    dbIpIsSet_ = false;
}

std::string AuditInsanceRiskCount::getDbName() const
{
    return dbName_;
}

void AuditInsanceRiskCount::setDbName(const std::string& value)
{
    dbName_ = value;
    dbNameIsSet_ = true;
}

bool AuditInsanceRiskCount::dbNameIsSet() const
{
    return dbNameIsSet_;
}

void AuditInsanceRiskCount::unsetdbName()
{
    dbNameIsSet_ = false;
}

std::string AuditInsanceRiskCount::getInstanceId() const
{
    return instanceId_;
}

void AuditInsanceRiskCount::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool AuditInsanceRiskCount::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void AuditInsanceRiskCount::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string AuditInsanceRiskCount::getInstanceName() const
{
    return instanceName_;
}

void AuditInsanceRiskCount::setInstanceName(const std::string& value)
{
    instanceName_ = value;
    instanceNameIsSet_ = true;
}

bool AuditInsanceRiskCount::instanceNameIsSet() const
{
    return instanceNameIsSet_;
}

void AuditInsanceRiskCount::unsetinstanceName()
{
    instanceNameIsSet_ = false;
}

}
}
}
}
}


