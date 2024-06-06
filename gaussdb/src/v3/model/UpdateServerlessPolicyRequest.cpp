

#include "huaweicloud/gaussdb/v3/model/UpdateServerlessPolicyRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




UpdateServerlessPolicyRequest::UpdateServerlessPolicyRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateServerlessPolicyRequest::~UpdateServerlessPolicyRequest() = default;

void UpdateServerlessPolicyRequest::validate()
{
}

web::json::value UpdateServerlessPolicyRequest::toJson() const
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
bool UpdateServerlessPolicyRequest::fromJson(const web::json::value& val)
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
            UpdateServerlessPolicy refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdateServerlessPolicyRequest::getXLanguage() const
{
    return xLanguage_;
}

void UpdateServerlessPolicyRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool UpdateServerlessPolicyRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void UpdateServerlessPolicyRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string UpdateServerlessPolicyRequest::getInstanceId() const
{
    return instanceId_;
}

void UpdateServerlessPolicyRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool UpdateServerlessPolicyRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void UpdateServerlessPolicyRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

UpdateServerlessPolicy UpdateServerlessPolicyRequest::getBody() const
{
    return body_;
}

void UpdateServerlessPolicyRequest::setBody(const UpdateServerlessPolicy& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateServerlessPolicyRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateServerlessPolicyRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


