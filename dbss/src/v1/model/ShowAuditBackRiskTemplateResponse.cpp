

#include "huaweicloud/dbss/v1/model/ShowAuditBackRiskTemplateResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




ShowAuditBackRiskTemplateResponse::ShowAuditBackRiskTemplateResponse()
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

ShowAuditBackRiskTemplateResponse::~ShowAuditBackRiskTemplateResponse() = default;

void ShowAuditBackRiskTemplateResponse::validate()
{
}

web::json::value ShowAuditBackRiskTemplateResponse::toJson() const
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
bool ShowAuditBackRiskTemplateResponse::fromJson(const web::json::value& val)
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


std::string ShowAuditBackRiskTemplateResponse::getDbId() const
{
    return dbId_;
}

void ShowAuditBackRiskTemplateResponse::setDbId(const std::string& value)
{
    dbId_ = value;
    dbIdIsSet_ = true;
}

bool ShowAuditBackRiskTemplateResponse::dbIdIsSet() const
{
    return dbIdIsSet_;
}

void ShowAuditBackRiskTemplateResponse::unsetdbId()
{
    dbIdIsSet_ = false;
}

std::string ShowAuditBackRiskTemplateResponse::getDbIp() const
{
    return dbIp_;
}

void ShowAuditBackRiskTemplateResponse::setDbIp(const std::string& value)
{
    dbIp_ = value;
    dbIpIsSet_ = true;
}

bool ShowAuditBackRiskTemplateResponse::dbIpIsSet() const
{
    return dbIpIsSet_;
}

void ShowAuditBackRiskTemplateResponse::unsetdbIp()
{
    dbIpIsSet_ = false;
}

std::string ShowAuditBackRiskTemplateResponse::getDbName() const
{
    return dbName_;
}

void ShowAuditBackRiskTemplateResponse::setDbName(const std::string& value)
{
    dbName_ = value;
    dbNameIsSet_ = true;
}

bool ShowAuditBackRiskTemplateResponse::dbNameIsSet() const
{
    return dbNameIsSet_;
}

void ShowAuditBackRiskTemplateResponse::unsetdbName()
{
    dbNameIsSet_ = false;
}

int32_t ShowAuditBackRiskTemplateResponse::getDbPort() const
{
    return dbPort_;
}

void ShowAuditBackRiskTemplateResponse::setDbPort(int32_t value)
{
    dbPort_ = value;
    dbPortIsSet_ = true;
}

bool ShowAuditBackRiskTemplateResponse::dbPortIsSet() const
{
    return dbPortIsSet_;
}

void ShowAuditBackRiskTemplateResponse::unsetdbPort()
{
    dbPortIsSet_ = false;
}

std::string ShowAuditBackRiskTemplateResponse::getId() const
{
    return id_;
}

void ShowAuditBackRiskTemplateResponse::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ShowAuditBackRiskTemplateResponse::idIsSet() const
{
    return idIsSet_;
}

void ShowAuditBackRiskTemplateResponse::unsetid()
{
    idIsSet_ = false;
}

int32_t ShowAuditBackRiskTemplateResponse::getStatus() const
{
    return status_;
}

void ShowAuditBackRiskTemplateResponse::setStatus(int32_t value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ShowAuditBackRiskTemplateResponse::statusIsSet() const
{
    return statusIsSet_;
}

void ShowAuditBackRiskTemplateResponse::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


