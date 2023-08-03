

#include "huaweicloud/rds/v3/model/UpdateReadWeightRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




UpdateReadWeightRequest::UpdateReadWeightRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateReadWeightRequest::~UpdateReadWeightRequest() = default;

void UpdateReadWeightRequest::validate()
{
}

web::json::value UpdateReadWeightRequest::toJson() const
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

bool UpdateReadWeightRequest::fromJson(const web::json::value& val)
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
            ModifyProxyWeightRequest refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}

std::string UpdateReadWeightRequest::getXLanguage() const
{
    return xLanguage_;
}

void UpdateReadWeightRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool UpdateReadWeightRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void UpdateReadWeightRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string UpdateReadWeightRequest::getInstanceId() const
{
    return instanceId_;
}

void UpdateReadWeightRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool UpdateReadWeightRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void UpdateReadWeightRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

ModifyProxyWeightRequest UpdateReadWeightRequest::getBody() const
{
    return body_;
}

void UpdateReadWeightRequest::setBody(const ModifyProxyWeightRequest& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateReadWeightRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateReadWeightRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


