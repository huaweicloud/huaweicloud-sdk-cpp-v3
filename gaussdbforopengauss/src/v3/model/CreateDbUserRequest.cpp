

#include "huaweicloud/gaussdbforopengauss/v3/model/CreateDbUserRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




CreateDbUserRequest::CreateDbUserRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

CreateDbUserRequest::~CreateDbUserRequest() = default;

void CreateDbUserRequest::validate()
{
}

web::json::value CreateDbUserRequest::toJson() const
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
bool CreateDbUserRequest::fromJson(const web::json::value& val)
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
            GaussDBforOpenGaussUserForCreation refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string CreateDbUserRequest::getXLanguage() const
{
    return xLanguage_;
}

void CreateDbUserRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool CreateDbUserRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void CreateDbUserRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string CreateDbUserRequest::getInstanceId() const
{
    return instanceId_;
}

void CreateDbUserRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool CreateDbUserRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void CreateDbUserRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

GaussDBforOpenGaussUserForCreation CreateDbUserRequest::getBody() const
{
    return body_;
}

void CreateDbUserRequest::setBody(const GaussDBforOpenGaussUserForCreation& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateDbUserRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateDbUserRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


