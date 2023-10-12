

#include "huaweicloud/rds/v3/model/CreateDatabaseRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




CreateDatabaseRequest::CreateDatabaseRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

CreateDatabaseRequest::~CreateDatabaseRequest() = default;

void CreateDatabaseRequest::validate()
{
}

web::json::value CreateDatabaseRequest::toJson() const
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
bool CreateDatabaseRequest::fromJson(const web::json::value& val)
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
            DatabaseForCreation refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string CreateDatabaseRequest::getXLanguage() const
{
    return xLanguage_;
}

void CreateDatabaseRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool CreateDatabaseRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void CreateDatabaseRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string CreateDatabaseRequest::getInstanceId() const
{
    return instanceId_;
}

void CreateDatabaseRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool CreateDatabaseRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void CreateDatabaseRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

DatabaseForCreation CreateDatabaseRequest::getBody() const
{
    return body_;
}

void CreateDatabaseRequest::setBody(const DatabaseForCreation& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateDatabaseRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateDatabaseRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


