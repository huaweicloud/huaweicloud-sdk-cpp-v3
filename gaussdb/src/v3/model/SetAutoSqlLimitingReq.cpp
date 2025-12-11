

#include "huaweicloud/gaussdb/v3/model/SetAutoSqlLimitingReq.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




SetAutoSqlLimitingReq::SetAutoSqlLimitingReq()
{
    autoSqlLimitingRulesIsSet_ = false;
}

SetAutoSqlLimitingReq::~SetAutoSqlLimitingReq() = default;

void SetAutoSqlLimitingReq::validate()
{
}

web::json::value SetAutoSqlLimitingReq::toJson() const
{
    web::json::value val = web::json::value::object();

    if(autoSqlLimitingRulesIsSet_) {
        val[utility::conversions::to_string_t("auto_sql_limiting_rules")] = ModelBase::toJson(autoSqlLimitingRules_);
    }

    return val;
}
bool SetAutoSqlLimitingReq::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("auto_sql_limiting_rules"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("auto_sql_limiting_rules"));
        if(!fieldValue.is_null())
        {
            std::vector<AutoSqlLimitingRule> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAutoSqlLimitingRules(refVal);
        }
    }
    return ok;
}


std::vector<AutoSqlLimitingRule>& SetAutoSqlLimitingReq::getAutoSqlLimitingRules()
{
    return autoSqlLimitingRules_;
}

void SetAutoSqlLimitingReq::setAutoSqlLimitingRules(const std::vector<AutoSqlLimitingRule>& value)
{
    autoSqlLimitingRules_ = value;
    autoSqlLimitingRulesIsSet_ = true;
}

bool SetAutoSqlLimitingReq::autoSqlLimitingRulesIsSet() const
{
    return autoSqlLimitingRulesIsSet_;
}

void SetAutoSqlLimitingReq::unsetautoSqlLimitingRules()
{
    autoSqlLimitingRulesIsSet_ = false;
}

}
}
}
}
}


