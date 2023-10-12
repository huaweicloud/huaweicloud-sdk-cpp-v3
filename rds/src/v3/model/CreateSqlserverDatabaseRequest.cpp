

#include "huaweicloud/rds/v3/model/CreateSqlserverDatabaseRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




CreateSqlserverDatabaseRequest::CreateSqlserverDatabaseRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

CreateSqlserverDatabaseRequest::~CreateSqlserverDatabaseRequest() = default;

void CreateSqlserverDatabaseRequest::validate()
{
}

web::json::value CreateSqlserverDatabaseRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }
    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool CreateSqlserverDatabaseRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            SqlserverDatabaseForCreation refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string CreateSqlserverDatabaseRequest::getXLanguage() const
{
    return xLanguage_;
}

void CreateSqlserverDatabaseRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool CreateSqlserverDatabaseRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void CreateSqlserverDatabaseRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string CreateSqlserverDatabaseRequest::getInstanceId() const
{
    return instanceId_;
}

void CreateSqlserverDatabaseRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool CreateSqlserverDatabaseRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void CreateSqlserverDatabaseRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

SqlserverDatabaseForCreation CreateSqlserverDatabaseRequest::getBody() const
{
    return body_;
}

void CreateSqlserverDatabaseRequest::setBody(const SqlserverDatabaseForCreation& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateSqlserverDatabaseRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateSqlserverDatabaseRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


