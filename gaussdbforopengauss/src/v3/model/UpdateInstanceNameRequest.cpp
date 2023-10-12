

#include "huaweicloud/gaussdbforopengauss/v3/model/UpdateInstanceNameRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




UpdateInstanceNameRequest::UpdateInstanceNameRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateInstanceNameRequest::~UpdateInstanceNameRequest() = default;

void UpdateInstanceNameRequest::validate()
{
}

web::json::value UpdateInstanceNameRequest::toJson() const
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
bool UpdateInstanceNameRequest::fromJson(const web::json::value& val)
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
            UpdateNameRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdateInstanceNameRequest::getXLanguage() const
{
    return xLanguage_;
}

void UpdateInstanceNameRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool UpdateInstanceNameRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void UpdateInstanceNameRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string UpdateInstanceNameRequest::getInstanceId() const
{
    return instanceId_;
}

void UpdateInstanceNameRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool UpdateInstanceNameRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void UpdateInstanceNameRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

UpdateNameRequestBody UpdateInstanceNameRequest::getBody() const
{
    return body_;
}

void UpdateInstanceNameRequest::setBody(const UpdateNameRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateInstanceNameRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateInstanceNameRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


