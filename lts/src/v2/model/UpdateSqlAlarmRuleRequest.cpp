

#include "huaweicloud/lts/v2/model/UpdateSqlAlarmRuleRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {




UpdateSqlAlarmRuleRequest::UpdateSqlAlarmRuleRequest()
{
    contentType_ = "";
    contentTypeIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateSqlAlarmRuleRequest::~UpdateSqlAlarmRuleRequest() = default;

void UpdateSqlAlarmRuleRequest::validate()
{
}

web::json::value UpdateSqlAlarmRuleRequest::toJson() const
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

bool UpdateSqlAlarmRuleRequest::fromJson(const web::json::value& val)
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
            UpdateSqlAlarmRuleRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdateSqlAlarmRuleRequest::getContentType() const
{
    return contentType_;
}

void UpdateSqlAlarmRuleRequest::setContentType(const std::string& value)
{
    contentType_ = value;
    contentTypeIsSet_ = true;
}

bool UpdateSqlAlarmRuleRequest::contentTypeIsSet() const
{
    return contentTypeIsSet_;
}

void UpdateSqlAlarmRuleRequest::unsetcontentType()
{
    contentTypeIsSet_ = false;
}

UpdateSqlAlarmRuleRequestBody UpdateSqlAlarmRuleRequest::getBody() const
{
    return body_;
}

void UpdateSqlAlarmRuleRequest::setBody(const UpdateSqlAlarmRuleRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateSqlAlarmRuleRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateSqlAlarmRuleRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


