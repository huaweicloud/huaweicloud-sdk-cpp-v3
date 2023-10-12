

#include "huaweicloud/lts/v2/model/DeleteKeywordsAlarmRuleRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {




DeleteKeywordsAlarmRuleRequest::DeleteKeywordsAlarmRuleRequest()
{
    keywordsAlarmRuleId_ = "";
    keywordsAlarmRuleIdIsSet_ = false;
    contentType_ = "";
    contentTypeIsSet_ = false;
}

DeleteKeywordsAlarmRuleRequest::~DeleteKeywordsAlarmRuleRequest() = default;

void DeleteKeywordsAlarmRuleRequest::validate()
{
}

web::json::value DeleteKeywordsAlarmRuleRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(keywordsAlarmRuleIdIsSet_) {
        val[utility::conversions::to_string_t("keywords_alarm_rule_id")] = ModelBase::toJson(keywordsAlarmRuleId_);
    }
    if(contentTypeIsSet_) {
        val[utility::conversions::to_string_t("Content-Type")] = ModelBase::toJson(contentType_);
    }

    return val;
}
bool DeleteKeywordsAlarmRuleRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("keywords_alarm_rule_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("keywords_alarm_rule_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKeywordsAlarmRuleId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("Content-Type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("Content-Type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setContentType(refVal);
        }
    }
    return ok;
}


std::string DeleteKeywordsAlarmRuleRequest::getKeywordsAlarmRuleId() const
{
    return keywordsAlarmRuleId_;
}

void DeleteKeywordsAlarmRuleRequest::setKeywordsAlarmRuleId(const std::string& value)
{
    keywordsAlarmRuleId_ = value;
    keywordsAlarmRuleIdIsSet_ = true;
}

bool DeleteKeywordsAlarmRuleRequest::keywordsAlarmRuleIdIsSet() const
{
    return keywordsAlarmRuleIdIsSet_;
}

void DeleteKeywordsAlarmRuleRequest::unsetkeywordsAlarmRuleId()
{
    keywordsAlarmRuleIdIsSet_ = false;
}

std::string DeleteKeywordsAlarmRuleRequest::getContentType() const
{
    return contentType_;
}

void DeleteKeywordsAlarmRuleRequest::setContentType(const std::string& value)
{
    contentType_ = value;
    contentTypeIsSet_ = true;
}

bool DeleteKeywordsAlarmRuleRequest::contentTypeIsSet() const
{
    return contentTypeIsSet_;
}

void DeleteKeywordsAlarmRuleRequest::unsetcontentType()
{
    contentTypeIsSet_ = false;
}

}
}
}
}
}


