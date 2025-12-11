

#include "huaweicloud/gaussdb/v3/model/ShowHistoricalSqlFilterRuleRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




ShowHistoricalSqlFilterRuleRequest::ShowHistoricalSqlFilterRuleRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    nodeId_ = "";
    nodeIdIsSet_ = false;
    sqlType_ = "";
    sqlTypeIsSet_ = false;
}

ShowHistoricalSqlFilterRuleRequest::~ShowHistoricalSqlFilterRuleRequest() = default;

void ShowHistoricalSqlFilterRuleRequest::validate()
{
}

web::json::value ShowHistoricalSqlFilterRuleRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }
    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(nodeIdIsSet_) {
        val[utility::conversions::to_string_t("node_id")] = ModelBase::toJson(nodeId_);
    }
    if(sqlTypeIsSet_) {
        val[utility::conversions::to_string_t("sql_type")] = ModelBase::toJson(sqlType_);
    }

    return val;
}
bool ShowHistoricalSqlFilterRuleRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("node_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("node_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNodeId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sql_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sql_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSqlType(refVal);
        }
    }
    return ok;
}


std::string ShowHistoricalSqlFilterRuleRequest::getXLanguage() const
{
    return xLanguage_;
}

void ShowHistoricalSqlFilterRuleRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ShowHistoricalSqlFilterRuleRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ShowHistoricalSqlFilterRuleRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string ShowHistoricalSqlFilterRuleRequest::getInstanceId() const
{
    return instanceId_;
}

void ShowHistoricalSqlFilterRuleRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ShowHistoricalSqlFilterRuleRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ShowHistoricalSqlFilterRuleRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string ShowHistoricalSqlFilterRuleRequest::getNodeId() const
{
    return nodeId_;
}

void ShowHistoricalSqlFilterRuleRequest::setNodeId(const std::string& value)
{
    nodeId_ = value;
    nodeIdIsSet_ = true;
}

bool ShowHistoricalSqlFilterRuleRequest::nodeIdIsSet() const
{
    return nodeIdIsSet_;
}

void ShowHistoricalSqlFilterRuleRequest::unsetnodeId()
{
    nodeIdIsSet_ = false;
}

std::string ShowHistoricalSqlFilterRuleRequest::getSqlType() const
{
    return sqlType_;
}

void ShowHistoricalSqlFilterRuleRequest::setSqlType(const std::string& value)
{
    sqlType_ = value;
    sqlTypeIsSet_ = true;
}

bool ShowHistoricalSqlFilterRuleRequest::sqlTypeIsSet() const
{
    return sqlTypeIsSet_;
}

void ShowHistoricalSqlFilterRuleRequest::unsetsqlType()
{
    sqlTypeIsSet_ = false;
}

}
}
}
}
}


