

#include "huaweicloud/gaussdbforopengauss/v3/model/UpdateInstanceAliasRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




UpdateInstanceAliasRequest::UpdateInstanceAliasRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateInstanceAliasRequest::~UpdateInstanceAliasRequest() = default;

void UpdateInstanceAliasRequest::validate()
{
}

web::json::value UpdateInstanceAliasRequest::toJson() const
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
bool UpdateInstanceAliasRequest::fromJson(const web::json::value& val)
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
            UpdateInstanceAliasRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdateInstanceAliasRequest::getXLanguage() const
{
    return xLanguage_;
}

void UpdateInstanceAliasRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool UpdateInstanceAliasRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void UpdateInstanceAliasRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string UpdateInstanceAliasRequest::getInstanceId() const
{
    return instanceId_;
}

void UpdateInstanceAliasRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool UpdateInstanceAliasRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void UpdateInstanceAliasRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

UpdateInstanceAliasRequestBody UpdateInstanceAliasRequest::getBody() const
{
    return body_;
}

void UpdateInstanceAliasRequest::setBody(const UpdateInstanceAliasRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateInstanceAliasRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateInstanceAliasRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


