

#include "huaweicloud/dbss/v1/model/AuditInstanceRiskCount.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




AuditInstanceRiskCount::AuditInstanceRiskCount()
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

AuditInstanceRiskCount::~AuditInstanceRiskCount() = default;

void AuditInstanceRiskCount::validate()
{
}

web::json::value AuditInstanceRiskCount::toJson() const
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
bool AuditInstanceRiskCount::fromJson(const web::json::value& val)
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


int64_t AuditInstanceRiskCount::getCount() const
{
    return count_;
}

void AuditInstanceRiskCount::setCount(int64_t value)
{
    count_ = value;
    countIsSet_ = true;
}

bool AuditInstanceRiskCount::countIsSet() const
{
    return countIsSet_;
}

void AuditInstanceRiskCount::unsetcount()
{
    countIsSet_ = false;
}

std::string AuditInstanceRiskCount::getDbId() const
{
    return dbId_;
}

void AuditInstanceRiskCount::setDbId(const std::string& value)
{
    dbId_ = value;
    dbIdIsSet_ = true;
}

bool AuditInstanceRiskCount::dbIdIsSet() const
{
    return dbIdIsSet_;
}

void AuditInstanceRiskCount::unsetdbId()
{
    dbIdIsSet_ = false;
}

std::string AuditInstanceRiskCount::getDbIp() const
{
    return dbIp_;
}

void AuditInstanceRiskCount::setDbIp(const std::string& value)
{
    dbIp_ = value;
    dbIpIsSet_ = true;
}

bool AuditInstanceRiskCount::dbIpIsSet() const
{
    return dbIpIsSet_;
}

void AuditInstanceRiskCount::unsetdbIp()
{
    dbIpIsSet_ = false;
}

std::string AuditInstanceRiskCount::getDbName() const
{
    return dbName_;
}

void AuditInstanceRiskCount::setDbName(const std::string& value)
{
    dbName_ = value;
    dbNameIsSet_ = true;
}

bool AuditInstanceRiskCount::dbNameIsSet() const
{
    return dbNameIsSet_;
}

void AuditInstanceRiskCount::unsetdbName()
{
    dbNameIsSet_ = false;
}

std::string AuditInstanceRiskCount::getInstanceId() const
{
    return instanceId_;
}

void AuditInstanceRiskCount::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool AuditInstanceRiskCount::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void AuditInstanceRiskCount::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string AuditInstanceRiskCount::getInstanceName() const
{
    return instanceName_;
}

void AuditInstanceRiskCount::setInstanceName(const std::string& value)
{
    instanceName_ = value;
    instanceNameIsSet_ = true;
}

bool AuditInstanceRiskCount::instanceNameIsSet() const
{
    return instanceNameIsSet_;
}

void AuditInstanceRiskCount::unsetinstanceName()
{
    instanceNameIsSet_ = false;
}

}
}
}
}
}


