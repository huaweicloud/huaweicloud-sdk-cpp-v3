

#include "huaweicloud/lts/v2/model/CreateKeywordsAlarmRuleRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {




CreateKeywordsAlarmRuleRequest::CreateKeywordsAlarmRuleRequest()
{
    contentType_ = "";
    contentTypeIsSet_ = false;
    bodyIsSet_ = false;
}

CreateKeywordsAlarmRuleRequest::~CreateKeywordsAlarmRuleRequest() = default;

void CreateKeywordsAlarmRuleRequest::validate()
{
}

web::json::value CreateKeywordsAlarmRuleRequest::toJson() const
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

bool CreateKeywordsAlarmRuleRequest::fromJson(const web::json::value& val)
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
            CreateKeywordsAlarmRuleRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}

std::string CreateKeywordsAlarmRuleRequest::getContentType() const
{
    return contentType_;
}

void CreateKeywordsAlarmRuleRequest::setContentType(const std::string& value)
{
    contentType_ = value;
    contentTypeIsSet_ = true;
}

bool CreateKeywordsAlarmRuleRequest::contentTypeIsSet() const
{
    return contentTypeIsSet_;
}

void CreateKeywordsAlarmRuleRequest::unsetcontentType()
{
    contentTypeIsSet_ = false;
}

CreateKeywordsAlarmRuleRequestBody CreateKeywordsAlarmRuleRequest::getBody() const
{
    return body_;
}

void CreateKeywordsAlarmRuleRequest::setBody(const CreateKeywordsAlarmRuleRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateKeywordsAlarmRuleRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateKeywordsAlarmRuleRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


