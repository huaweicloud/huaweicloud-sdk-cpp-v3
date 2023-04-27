

#include "huaweicloud/lts/v2/model/UpdateKeywordsAlarmRuleRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {




UpdateKeywordsAlarmRuleRequest::UpdateKeywordsAlarmRuleRequest()
{
    contentType_ = "";
    contentTypeIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateKeywordsAlarmRuleRequest::~UpdateKeywordsAlarmRuleRequest() = default;

void UpdateKeywordsAlarmRuleRequest::validate()
{
}

web::json::value UpdateKeywordsAlarmRuleRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(contentTypeIsSet_) {
        val[utility::conversions::to_string_t("Content-Type")] = ModelBase::toJson(contentType_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}

bool UpdateKeywordsAlarmRuleRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("Content-Type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("Content-Type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setContentType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            UpdateKeywordsAlarmRuleRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdateKeywordsAlarmRuleRequest::getContentType() const
{
    return contentType_;
}

void UpdateKeywordsAlarmRuleRequest::setContentType(const std::string& value)
{
    contentType_ = value;
    contentTypeIsSet_ = true;
}

bool UpdateKeywordsAlarmRuleRequest::contentTypeIsSet() const
{
    return contentTypeIsSet_;
}

void UpdateKeywordsAlarmRuleRequest::unsetcontentType()
{
    contentTypeIsSet_ = false;
}

UpdateKeywordsAlarmRuleRequestBody UpdateKeywordsAlarmRuleRequest::getBody() const
{
    return body_;
}

void UpdateKeywordsAlarmRuleRequest::setBody(const UpdateKeywordsAlarmRuleRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateKeywordsAlarmRuleRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateKeywordsAlarmRuleRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


