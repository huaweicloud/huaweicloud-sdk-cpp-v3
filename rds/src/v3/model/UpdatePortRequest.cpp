

#include "huaweicloud/rds/v3/model/UpdatePortRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




UpdatePortRequest::UpdatePortRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

UpdatePortRequest::~UpdatePortRequest() = default;

void UpdatePortRequest::validate()
{
}

web::json::value UpdatePortRequest::toJson() const
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
bool UpdatePortRequest::fromJson(const web::json::value& val)
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
            UpdateDbPortRequest refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdatePortRequest::getXLanguage() const
{
    return xLanguage_;
}

void UpdatePortRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool UpdatePortRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void UpdatePortRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string UpdatePortRequest::getInstanceId() const
{
    return instanceId_;
}

void UpdatePortRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool UpdatePortRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void UpdatePortRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

UpdateDbPortRequest UpdatePortRequest::getBody() const
{
    return body_;
}

void UpdatePortRequest::setBody(const UpdateDbPortRequest& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdatePortRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdatePortRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


