

#include "huaweicloud/gaussdbforopengauss/v3/model/ApplyConfigurationWithEntitiesRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ApplyConfigurationWithEntitiesRequest::ApplyConfigurationWithEntitiesRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    configId_ = "";
    configIdIsSet_ = false;
    bodyIsSet_ = false;
}

ApplyConfigurationWithEntitiesRequest::~ApplyConfigurationWithEntitiesRequest() = default;

void ApplyConfigurationWithEntitiesRequest::validate()
{
}

web::json::value ApplyConfigurationWithEntitiesRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }
    if(configIdIsSet_) {
        val[utility::conversions::to_string_t("config_id")] = ModelBase::toJson(configId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool ApplyConfigurationWithEntitiesRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("config_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("config_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setConfigId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            ApplyConfigurationEntityRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string ApplyConfigurationWithEntitiesRequest::getXLanguage() const
{
    return xLanguage_;
}

void ApplyConfigurationWithEntitiesRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ApplyConfigurationWithEntitiesRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ApplyConfigurationWithEntitiesRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string ApplyConfigurationWithEntitiesRequest::getConfigId() const
{
    return configId_;
}

void ApplyConfigurationWithEntitiesRequest::setConfigId(const std::string& value)
{
    configId_ = value;
    configIdIsSet_ = true;
}

bool ApplyConfigurationWithEntitiesRequest::configIdIsSet() const
{
    return configIdIsSet_;
}

void ApplyConfigurationWithEntitiesRequest::unsetconfigId()
{
    configIdIsSet_ = false;
}

ApplyConfigurationEntityRequestBody ApplyConfigurationWithEntitiesRequest::getBody() const
{
    return body_;
}

void ApplyConfigurationWithEntitiesRequest::setBody(const ApplyConfigurationEntityRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ApplyConfigurationWithEntitiesRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ApplyConfigurationWithEntitiesRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


