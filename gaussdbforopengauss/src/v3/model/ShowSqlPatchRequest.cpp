

#include "huaweicloud/gaussdbforopengauss/v3/model/ShowSqlPatchRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ShowSqlPatchRequest::ShowSqlPatchRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    nodeId_ = "";
    nodeIdIsSet_ = false;
    sqlId_ = "";
    sqlIdIsSet_ = false;
    databaseName_ = "";
    databaseNameIsSet_ = false;
}

ShowSqlPatchRequest::~ShowSqlPatchRequest() = default;

void ShowSqlPatchRequest::validate()
{
}

web::json::value ShowSqlPatchRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }
    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(nodeIdIsSet_) {
        val[utility::conversions::to_string_t("node_id")] = ModelBase::toJson(nodeId_);
    }
    if(sqlIdIsSet_) {
        val[utility::conversions::to_string_t("sql_id")] = ModelBase::toJson(sqlId_);
    }
    if(databaseNameIsSet_) {
        val[utility::conversions::to_string_t("database_name")] = ModelBase::toJson(databaseName_);
    }

    return val;
}
bool ShowSqlPatchRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("node_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("node_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNodeId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("database_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("database_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDatabaseName(refVal);
        }
    }
    return ok;
}


std::string ShowSqlPatchRequest::getXLanguage() const
{
    return xLanguage_;
}

void ShowSqlPatchRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ShowSqlPatchRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ShowSqlPatchRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string ShowSqlPatchRequest::getInstanceId() const
{
    return instanceId_;
}

void ShowSqlPatchRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ShowSqlPatchRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ShowSqlPatchRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string ShowSqlPatchRequest::getNodeId() const
{
    return nodeId_;
}

void ShowSqlPatchRequest::setNodeId(const std::string& value)
{
    nodeId_ = value;
    nodeIdIsSet_ = true;
}

bool ShowSqlPatchRequest::nodeIdIsSet() const
{
    return nodeIdIsSet_;
}

void ShowSqlPatchRequest::unsetnodeId()
{
    nodeIdIsSet_ = false;
}

std::string ShowSqlPatchRequest::getSqlId() const
{
    return sqlId_;
}

void ShowSqlPatchRequest::setSqlId(const std::string& value)
{
    sqlId_ = value;
    sqlIdIsSet_ = true;
}

bool ShowSqlPatchRequest::sqlIdIsSet() const
{
    return sqlIdIsSet_;
}

void ShowSqlPatchRequest::unsetsqlId()
{
    sqlIdIsSet_ = false;
}

std::string ShowSqlPatchRequest::getDatabaseName() const
{
    return databaseName_;
}

void ShowSqlPatchRequest::setDatabaseName(const std::string& value)
{
    databaseName_ = value;
    databaseNameIsSet_ = true;
}

bool ShowSqlPatchRequest::databaseNameIsSet() const
{
    return databaseNameIsSet_;
}

void ShowSqlPatchRequest::unsetdatabaseName()
{
    databaseNameIsSet_ = false;
}

}
}
}
}
}


