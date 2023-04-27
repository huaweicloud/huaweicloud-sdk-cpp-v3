

#include "huaweicloud/lts/v2/model/DeleteSqlAlarmRuleRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {




DeleteSqlAlarmRuleRequest::DeleteSqlAlarmRuleRequest()
{
    sqlAlarmRuleId_ = "";
    sqlAlarmRuleIdIsSet_ = false;
    contentType_ = "";
    contentTypeIsSet_ = false;
}

DeleteSqlAlarmRuleRequest::~DeleteSqlAlarmRuleRequest() = default;

void DeleteSqlAlarmRuleRequest::validate()
{
}

web::json::value DeleteSqlAlarmRuleRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(sqlAlarmRuleIdIsSet_) {
        val[utility::conversions::to_string_t("sql_alarm_rule_id")] = ModelBase::toJson(sqlAlarmRuleId_);
    }
    if(contentTypeIsSet_) {
        val[utility::conversions::to_string_t("Content-Type")] = ModelBase::toJson(contentType_);
    }

    return val;
}

bool DeleteSqlAlarmRuleRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("sql_alarm_rule_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sql_alarm_rule_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSqlAlarmRuleId(refVal);
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


std::string DeleteSqlAlarmRuleRequest::getSqlAlarmRuleId() const
{
    return sqlAlarmRuleId_;
}

void DeleteSqlAlarmRuleRequest::setSqlAlarmRuleId(const std::string& value)
{
    sqlAlarmRuleId_ = value;
    sqlAlarmRuleIdIsSet_ = true;
}

bool DeleteSqlAlarmRuleRequest::sqlAlarmRuleIdIsSet() const
{
    return sqlAlarmRuleIdIsSet_;
}

void DeleteSqlAlarmRuleRequest::unsetsqlAlarmRuleId()
{
    sqlAlarmRuleIdIsSet_ = false;
}

std::string DeleteSqlAlarmRuleRequest::getContentType() const
{
    return contentType_;
}

void DeleteSqlAlarmRuleRequest::setContentType(const std::string& value)
{
    contentType_ = value;
    contentTypeIsSet_ = true;
}

bool DeleteSqlAlarmRuleRequest::contentTypeIsSet() const
{
    return contentTypeIsSet_;
}

void DeleteSqlAlarmRuleRequest::unsetcontentType()
{
    contentTypeIsSet_ = false;
}

}
}
}
}
}


