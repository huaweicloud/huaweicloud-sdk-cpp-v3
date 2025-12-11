

#include "huaweicloud/gaussdb/v3/model/ShowSqlAutoSqlLimitingResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




ShowSqlAutoSqlLimitingResponse::ShowSqlAutoSqlLimitingResponse()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    autoSqlLimitingRulesIsSet_ = false;
}

ShowSqlAutoSqlLimitingResponse::~ShowSqlAutoSqlLimitingResponse() = default;

void ShowSqlAutoSqlLimitingResponse::validate()
{
}

web::json::value ShowSqlAutoSqlLimitingResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(autoSqlLimitingRulesIsSet_) {
        val[utility::conversions::to_string_t("auto_sql_limiting_rules")] = ModelBase::toJson(autoSqlLimitingRules_);
    }

    return val;
}
bool ShowSqlAutoSqlLimitingResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("auto_sql_limiting_rules"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("auto_sql_limiting_rules"));
        if(!fieldValue.is_null())
        {
            std::vector<NodeSqlAutoSqlLimiting> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAutoSqlLimitingRules(refVal);
        }
    }
    return ok;
}


std::string ShowSqlAutoSqlLimitingResponse::getInstanceId() const
{
    return instanceId_;
}

void ShowSqlAutoSqlLimitingResponse::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ShowSqlAutoSqlLimitingResponse::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ShowSqlAutoSqlLimitingResponse::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::vector<NodeSqlAutoSqlLimiting>& ShowSqlAutoSqlLimitingResponse::getAutoSqlLimitingRules()
{
    return autoSqlLimitingRules_;
}

void ShowSqlAutoSqlLimitingResponse::setAutoSqlLimitingRules(const std::vector<NodeSqlAutoSqlLimiting>& value)
{
    autoSqlLimitingRules_ = value;
    autoSqlLimitingRulesIsSet_ = true;
}

bool ShowSqlAutoSqlLimitingResponse::autoSqlLimitingRulesIsSet() const
{
    return autoSqlLimitingRulesIsSet_;
}

void ShowSqlAutoSqlLimitingResponse::unsetautoSqlLimitingRules()
{
    autoSqlLimitingRulesIsSet_ = false;
}

}
}
}
}
}


