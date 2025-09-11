

#include "huaweicloud/dbss/v1/model/RiskBackupTemplateBean.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




RiskBackupTemplateBean::RiskBackupTemplateBean()
{
    dbId_ = "";
    dbIdIsSet_ = false;
    dbIp_ = "";
    dbIpIsSet_ = false;
    dbName_ = "";
    dbNameIsSet_ = false;
    dbPort_ = 0;
    dbPortIsSet_ = false;
    id_ = "";
    idIsSet_ = false;
    status_ = 0;
    statusIsSet_ = false;
}

RiskBackupTemplateBean::~RiskBackupTemplateBean() = default;

void RiskBackupTemplateBean::validate()
{
}

web::json::value RiskBackupTemplateBean::toJson() const
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
    if(dbPortIsSet_) {
        val[utility::conversions::to_string_t("db_port")] = ModelBase::toJson(dbPort_);
    }
    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }

    return val;
}
bool RiskBackupTemplateBean::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("db_port"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("db_port"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDbPort(refVal);
        }
    }
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
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    return ok;
}


std::string RiskBackupTemplateBean::getDbId() const
{
    return dbId_;
}

void RiskBackupTemplateBean::setDbId(const std::string& value)
{
    dbId_ = value;
    dbIdIsSet_ = true;
}

bool RiskBackupTemplateBean::dbIdIsSet() const
{
    return dbIdIsSet_;
}

void RiskBackupTemplateBean::unsetdbId()
{
    dbIdIsSet_ = false;
}

std::string RiskBackupTemplateBean::getDbIp() const
{
    return dbIp_;
}

void RiskBackupTemplateBean::setDbIp(const std::string& value)
{
    dbIp_ = value;
    dbIpIsSet_ = true;
}

bool RiskBackupTemplateBean::dbIpIsSet() const
{
    return dbIpIsSet_;
}

void RiskBackupTemplateBean::unsetdbIp()
{
    dbIpIsSet_ = false;
}

std::string RiskBackupTemplateBean::getDbName() const
{
    return dbName_;
}

void RiskBackupTemplateBean::setDbName(const std::string& value)
{
    dbName_ = value;
    dbNameIsSet_ = true;
}

bool RiskBackupTemplateBean::dbNameIsSet() const
{
    return dbNameIsSet_;
}

void RiskBackupTemplateBean::unsetdbName()
{
    dbNameIsSet_ = false;
}

int32_t RiskBackupTemplateBean::getDbPort() const
{
    return dbPort_;
}

void RiskBackupTemplateBean::setDbPort(int32_t value)
{
    dbPort_ = value;
    dbPortIsSet_ = true;
}

bool RiskBackupTemplateBean::dbPortIsSet() const
{
    return dbPortIsSet_;
}

void RiskBackupTemplateBean::unsetdbPort()
{
    dbPortIsSet_ = false;
}

std::string RiskBackupTemplateBean::getId() const
{
    return id_;
}

void RiskBackupTemplateBean::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool RiskBackupTemplateBean::idIsSet() const
{
    return idIsSet_;
}

void RiskBackupTemplateBean::unsetid()
{
    idIsSet_ = false;
}

int32_t RiskBackupTemplateBean::getStatus() const
{
    return status_;
}

void RiskBackupTemplateBean::setStatus(int32_t value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool RiskBackupTemplateBean::statusIsSet() const
{
    return statusIsSet_;
}

void RiskBackupTemplateBean::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


