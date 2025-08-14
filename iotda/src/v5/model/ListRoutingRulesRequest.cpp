

#include "huaweicloud/iotda/v5/model/ListRoutingRulesRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




ListRoutingRulesRequest::ListRoutingRulesRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    resource_ = "";
    resourceIsSet_ = false;
    event_ = "";
    eventIsSet_ = false;
    appType_ = "";
    appTypeIsSet_ = false;
    appId_ = "";
    appIdIsSet_ = false;
    ruleName_ = "";
    ruleNameIsSet_ = false;
    active_ = false;
    activeIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    marker_ = "";
    markerIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
}

ListRoutingRulesRequest::~ListRoutingRulesRequest() = default;

void ListRoutingRulesRequest::validate()
{
}

web::json::value ListRoutingRulesRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("Instance-Id")] = ModelBase::toJson(instanceId_);
    }
    if(resourceIsSet_) {
        val[utility::conversions::to_string_t("resource")] = ModelBase::toJson(resource_);
    }
    if(eventIsSet_) {
        val[utility::conversions::to_string_t("event")] = ModelBase::toJson(event_);
    }
    if(appTypeIsSet_) {
        val[utility::conversions::to_string_t("app_type")] = ModelBase::toJson(appType_);
    }
    if(appIdIsSet_) {
        val[utility::conversions::to_string_t("app_id")] = ModelBase::toJson(appId_);
    }
    if(ruleNameIsSet_) {
        val[utility::conversions::to_string_t("rule_name")] = ModelBase::toJson(ruleName_);
    }
    if(activeIsSet_) {
        val[utility::conversions::to_string_t("active")] = ModelBase::toJson(active_);
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
bool ListRoutingRulesRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("resource"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resource"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResource(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("event"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("event"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEvent(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("app_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("app_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAppType(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("rule_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("rule_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRuleName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("active"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("active"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setActive(refVal);
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


std::string ListRoutingRulesRequest::getInstanceId() const
{
    return instanceId_;
}

void ListRoutingRulesRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ListRoutingRulesRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ListRoutingRulesRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string ListRoutingRulesRequest::getResource() const
{
    return resource_;
}

void ListRoutingRulesRequest::setResource(const std::string& value)
{
    resource_ = value;
    resourceIsSet_ = true;
}

bool ListRoutingRulesRequest::resourceIsSet() const
{
    return resourceIsSet_;
}

void ListRoutingRulesRequest::unsetresource()
{
    resourceIsSet_ = false;
}

std::string ListRoutingRulesRequest::getEvent() const
{
    return event_;
}

void ListRoutingRulesRequest::setEvent(const std::string& value)
{
    event_ = value;
    eventIsSet_ = true;
}

bool ListRoutingRulesRequest::eventIsSet() const
{
    return eventIsSet_;
}

void ListRoutingRulesRequest::unsetevent()
{
    eventIsSet_ = false;
}

std::string ListRoutingRulesRequest::getAppType() const
{
    return appType_;
}

void ListRoutingRulesRequest::setAppType(const std::string& value)
{
    appType_ = value;
    appTypeIsSet_ = true;
}

bool ListRoutingRulesRequest::appTypeIsSet() const
{
    return appTypeIsSet_;
}

void ListRoutingRulesRequest::unsetappType()
{
    appTypeIsSet_ = false;
}

std::string ListRoutingRulesRequest::getAppId() const
{
    return appId_;
}

void ListRoutingRulesRequest::setAppId(const std::string& value)
{
    appId_ = value;
    appIdIsSet_ = true;
}

bool ListRoutingRulesRequest::appIdIsSet() const
{
    return appIdIsSet_;
}

void ListRoutingRulesRequest::unsetappId()
{
    appIdIsSet_ = false;
}

std::string ListRoutingRulesRequest::getRuleName() const
{
    return ruleName_;
}

void ListRoutingRulesRequest::setRuleName(const std::string& value)
{
    ruleName_ = value;
    ruleNameIsSet_ = true;
}

bool ListRoutingRulesRequest::ruleNameIsSet() const
{
    return ruleNameIsSet_;
}

void ListRoutingRulesRequest::unsetruleName()
{
    ruleNameIsSet_ = false;
}

bool ListRoutingRulesRequest::isActive() const
{
    return active_;
}

void ListRoutingRulesRequest::setActive(bool value)
{
    active_ = value;
    activeIsSet_ = true;
}

bool ListRoutingRulesRequest::activeIsSet() const
{
    return activeIsSet_;
}

void ListRoutingRulesRequest::unsetactive()
{
    activeIsSet_ = false;
}

int32_t ListRoutingRulesRequest::getLimit() const
{
    return limit_;
}

void ListRoutingRulesRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListRoutingRulesRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListRoutingRulesRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ListRoutingRulesRequest::getMarker() const
{
    return marker_;
}

void ListRoutingRulesRequest::setMarker(const std::string& value)
{
    marker_ = value;
    markerIsSet_ = true;
}

bool ListRoutingRulesRequest::markerIsSet() const
{
    return markerIsSet_;
}

void ListRoutingRulesRequest::unsetmarker()
{
    markerIsSet_ = false;
}

int32_t ListRoutingRulesRequest::getOffset() const
{
    return offset_;
}

void ListRoutingRulesRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListRoutingRulesRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListRoutingRulesRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

}
}
}
}
}


