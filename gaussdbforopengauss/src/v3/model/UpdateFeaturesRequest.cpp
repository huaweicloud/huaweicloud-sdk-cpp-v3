

#include "huaweicloud/gaussdbforopengauss/v3/model/UpdateFeaturesRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




UpdateFeaturesRequest::UpdateFeaturesRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateFeaturesRequest::~UpdateFeaturesRequest() = default;

void UpdateFeaturesRequest::validate()
{
}

web::json::value UpdateFeaturesRequest::toJson() const
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
bool UpdateFeaturesRequest::fromJson(const web::json::value& val)
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
            UpdateFeaturesRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdateFeaturesRequest::getXLanguage() const
{
    return xLanguage_;
}

void UpdateFeaturesRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool UpdateFeaturesRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void UpdateFeaturesRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string UpdateFeaturesRequest::getInstanceId() const
{
    return instanceId_;
}

void UpdateFeaturesRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool UpdateFeaturesRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void UpdateFeaturesRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

UpdateFeaturesRequestBody UpdateFeaturesRequest::getBody() const
{
    return body_;
}

void UpdateFeaturesRequest::setBody(const UpdateFeaturesRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateFeaturesRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateFeaturesRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


