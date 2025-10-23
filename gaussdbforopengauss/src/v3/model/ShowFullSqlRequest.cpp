

#include "huaweicloud/gaussdbforopengauss/v3/model/ShowFullSqlRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ShowFullSqlRequest::ShowFullSqlRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    sqlExecId_ = "";
    sqlExecIdIsSet_ = false;
    id_ = 0;
    idIsSet_ = false;
    sqlId_ = "";
    sqlIdIsSet_ = false;
}

ShowFullSqlRequest::~ShowFullSqlRequest() = default;

void ShowFullSqlRequest::validate()
{
}

web::json::value ShowFullSqlRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }
    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(sqlExecIdIsSet_) {
        val[utility::conversions::to_string_t("sql_exec_id")] = ModelBase::toJson(sqlExecId_);
    }
    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(sqlIdIsSet_) {
        val[utility::conversions::to_string_t("sql_id")] = ModelBase::toJson(sqlId_);
    }

    return val;
}
bool ShowFullSqlRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("X-Language"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Language"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXLanguage(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("sql_exec_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sql_exec_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSqlExecId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sql_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sql_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSqlId(refVal);
        }
    }
    return ok;
}


std::string ShowFullSqlRequest::getXLanguage() const
{
    return xLanguage_;
}

void ShowFullSqlRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ShowFullSqlRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ShowFullSqlRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string ShowFullSqlRequest::getInstanceId() const
{
    return instanceId_;
}

void ShowFullSqlRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ShowFullSqlRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ShowFullSqlRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string ShowFullSqlRequest::getSqlExecId() const
{
    return sqlExecId_;
}

void ShowFullSqlRequest::setSqlExecId(const std::string& value)
{
    sqlExecId_ = value;
    sqlExecIdIsSet_ = true;
}

bool ShowFullSqlRequest::sqlExecIdIsSet() const
{
    return sqlExecIdIsSet_;
}

void ShowFullSqlRequest::unsetsqlExecId()
{
    sqlExecIdIsSet_ = false;
}

int32_t ShowFullSqlRequest::getId() const
{
    return id_;
}

void ShowFullSqlRequest::setId(int32_t value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ShowFullSqlRequest::idIsSet() const
{
    return idIsSet_;
}

void ShowFullSqlRequest::unsetid()
{
    idIsSet_ = false;
}

std::string ShowFullSqlRequest::getSqlId() const
{
    return sqlId_;
}

void ShowFullSqlRequest::setSqlId(const std::string& value)
{
    sqlId_ = value;
    sqlIdIsSet_ = true;
}

bool ShowFullSqlRequest::sqlIdIsSet() const
{
    return sqlIdIsSet_;
}

void ShowFullSqlRequest::unsetsqlId()
{
    sqlIdIsSet_ = false;
}

}
}
}
}
}


