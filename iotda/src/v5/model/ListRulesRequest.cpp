

#include "huaweicloud/iotda/v5/model/ListRulesRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




ListRulesRequest::ListRulesRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    appId_ = "";
    appIdIsSet_ = false;
    ruleType_ = "";
    ruleTypeIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    marker_ = "";
    markerIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
}

ListRulesRequest::~ListRulesRequest() = default;

void ListRulesRequest::validate()
{
}

web::json::value ListRulesRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("Instance-Id")] = ModelBase::toJson(instanceId_);
    }
    if(appIdIsSet_) {
        val[utility::conversions::to_string_t("app_id")] = ModelBase::toJson(appId_);
    }
    if(ruleTypeIsSet_) {
        val[utility::conversions::to_string_t("rule_type")] = ModelBase::toJson(ruleType_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(markerIsSet_) {
        val[utility::conversions::to_string_t("marker")] = ModelBase::toJson(marker_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }

    return val;
}
bool ListRulesRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("Instance-Id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("Instance-Id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("app_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("app_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAppId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("rule_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("rule_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRuleType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("limit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("limit"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLimit(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("marker"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("marker"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMarker(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("offset"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("offset"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOffset(refVal);
        }
    }
    return ok;
}


std::string ListRulesRequest::getInstanceId() const
{
    return instanceId_;
}

void ListRulesRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ListRulesRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ListRulesRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string ListRulesRequest::getAppId() const
{
    return appId_;
}

void ListRulesRequest::setAppId(const std::string& value)
{
    appId_ = value;
    appIdIsSet_ = true;
}

bool ListRulesRequest::appIdIsSet() const
{
    return appIdIsSet_;
}

void ListRulesRequest::unsetappId()
{
    appIdIsSet_ = false;
}

std::string ListRulesRequest::getRuleType() const
{
    return ruleType_;
}

void ListRulesRequest::setRuleType(const std::string& value)
{
    ruleType_ = value;
    ruleTypeIsSet_ = true;
}

bool ListRulesRequest::ruleTypeIsSet() const
{
    return ruleTypeIsSet_;
}

void ListRulesRequest::unsetruleType()
{
    ruleTypeIsSet_ = false;
}

int32_t ListRulesRequest::getLimit() const
{
    return limit_;
}

void ListRulesRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListRulesRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListRulesRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ListRulesRequest::getMarker() const
{
    return marker_;
}

void ListRulesRequest::setMarker(const std::string& value)
{
    marker_ = value;
    markerIsSet_ = true;
}

bool ListRulesRequest::markerIsSet() const
{
    return markerIsSet_;
}

void ListRulesRequest::unsetmarker()
{
    markerIsSet_ = false;
}

int32_t ListRulesRequest::getOffset() const
{
    return offset_;
}

void ListRulesRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListRulesRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListRulesRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

}
}
}
}
}


