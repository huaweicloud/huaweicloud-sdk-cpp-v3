

#include "huaweicloud/iotda/v5/model/ListRuleActionsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




ListRuleActionsRequest::ListRuleActionsRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    ruleId_ = "";
    ruleIdIsSet_ = false;
    channel_ = "";
    channelIsSet_ = false;
    appType_ = "";
    appTypeIsSet_ = false;
    appId_ = "";
    appIdIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    marker_ = "";
    markerIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
}

ListRuleActionsRequest::~ListRuleActionsRequest() = default;

void ListRuleActionsRequest::validate()
{
}

web::json::value ListRuleActionsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("Instance-Id")] = ModelBase::toJson(instanceId_);
    }
    if(ruleIdIsSet_) {
        val[utility::conversions::to_string_t("rule_id")] = ModelBase::toJson(ruleId_);
    }
    if(channelIsSet_) {
        val[utility::conversions::to_string_t("channel")] = ModelBase::toJson(channel_);
    }
    if(appTypeIsSet_) {
        val[utility::conversions::to_string_t("app_type")] = ModelBase::toJson(appType_);
    }
    if(appIdIsSet_) {
        val[utility::conversions::to_string_t("app_id")] = ModelBase::toJson(appId_);
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
bool ListRuleActionsRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("rule_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("rule_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRuleId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("channel"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("channel"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setChannel(refVal);
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


std::string ListRuleActionsRequest::getInstanceId() const
{
    return instanceId_;
}

void ListRuleActionsRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ListRuleActionsRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ListRuleActionsRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string ListRuleActionsRequest::getRuleId() const
{
    return ruleId_;
}

void ListRuleActionsRequest::setRuleId(const std::string& value)
{
    ruleId_ = value;
    ruleIdIsSet_ = true;
}

bool ListRuleActionsRequest::ruleIdIsSet() const
{
    return ruleIdIsSet_;
}

void ListRuleActionsRequest::unsetruleId()
{
    ruleIdIsSet_ = false;
}

std::string ListRuleActionsRequest::getChannel() const
{
    return channel_;
}

void ListRuleActionsRequest::setChannel(const std::string& value)
{
    channel_ = value;
    channelIsSet_ = true;
}

bool ListRuleActionsRequest::channelIsSet() const
{
    return channelIsSet_;
}

void ListRuleActionsRequest::unsetchannel()
{
    channelIsSet_ = false;
}

std::string ListRuleActionsRequest::getAppType() const
{
    return appType_;
}

void ListRuleActionsRequest::setAppType(const std::string& value)
{
    appType_ = value;
    appTypeIsSet_ = true;
}

bool ListRuleActionsRequest::appTypeIsSet() const
{
    return appTypeIsSet_;
}

void ListRuleActionsRequest::unsetappType()
{
    appTypeIsSet_ = false;
}

std::string ListRuleActionsRequest::getAppId() const
{
    return appId_;
}

void ListRuleActionsRequest::setAppId(const std::string& value)
{
    appId_ = value;
    appIdIsSet_ = true;
}

bool ListRuleActionsRequest::appIdIsSet() const
{
    return appIdIsSet_;
}

void ListRuleActionsRequest::unsetappId()
{
    appIdIsSet_ = false;
}

int32_t ListRuleActionsRequest::getLimit() const
{
    return limit_;
}

void ListRuleActionsRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListRuleActionsRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListRuleActionsRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ListRuleActionsRequest::getMarker() const
{
    return marker_;
}

void ListRuleActionsRequest::setMarker(const std::string& value)
{
    marker_ = value;
    markerIsSet_ = true;
}

bool ListRuleActionsRequest::markerIsSet() const
{
    return markerIsSet_;
}

void ListRuleActionsRequest::unsetmarker()
{
    markerIsSet_ = false;
}

int32_t ListRuleActionsRequest::getOffset() const
{
    return offset_;
}

void ListRuleActionsRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListRuleActionsRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListRuleActionsRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

}
}
}
}
}


