

#include "huaweicloud/rds/v3/model/CreateSqlserverDbUserRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




CreateSqlserverDbUserRequest::CreateSqlserverDbUserRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

CreateSqlserverDbUserRequest::~CreateSqlserverDbUserRequest() = default;

void CreateSqlserverDbUserRequest::validate()
{
}

web::json::value CreateSqlserverDbUserRequest::toJson() const
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

bool CreateSqlserverDbUserRequest::fromJson(const web::json::value& val)
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
            SqlserverUserForCreation refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}

std::string CreateSqlserverDbUserRequest::getXLanguage() const
{
    return xLanguage_;
}

void CreateSqlserverDbUserRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool CreateSqlserverDbUserRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void CreateSqlserverDbUserRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string CreateSqlserverDbUserRequest::getInstanceId() const
{
    return instanceId_;
}

void CreateSqlserverDbUserRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool CreateSqlserverDbUserRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void CreateSqlserverDbUserRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

SqlserverUserForCreation CreateSqlserverDbUserRequest::getBody() const
{
    return body_;
}

void CreateSqlserverDbUserRequest::setBody(const SqlserverUserForCreation& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateSqlserverDbUserRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateSqlserverDbUserRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


