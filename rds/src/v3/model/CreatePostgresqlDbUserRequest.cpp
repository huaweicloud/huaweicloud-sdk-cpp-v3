

#include "huaweicloud/rds/v3/model/CreatePostgresqlDbUserRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




CreatePostgresqlDbUserRequest::CreatePostgresqlDbUserRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

CreatePostgresqlDbUserRequest::~CreatePostgresqlDbUserRequest() = default;

void CreatePostgresqlDbUserRequest::validate()
{
}

web::json::value CreatePostgresqlDbUserRequest::toJson() const
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

bool CreatePostgresqlDbUserRequest::fromJson(const web::json::value& val)
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
            PostgresqlUserForCreation refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}

std::string CreatePostgresqlDbUserRequest::getXLanguage() const
{
    return xLanguage_;
}

void CreatePostgresqlDbUserRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool CreatePostgresqlDbUserRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void CreatePostgresqlDbUserRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string CreatePostgresqlDbUserRequest::getInstanceId() const
{
    return instanceId_;
}

void CreatePostgresqlDbUserRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool CreatePostgresqlDbUserRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void CreatePostgresqlDbUserRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

PostgresqlUserForCreation CreatePostgresqlDbUserRequest::getBody() const
{
    return body_;
}

void CreatePostgresqlDbUserRequest::setBody(const PostgresqlUserForCreation& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreatePostgresqlDbUserRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreatePostgresqlDbUserRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


