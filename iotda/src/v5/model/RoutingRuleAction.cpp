

#include "huaweicloud/iotda/v5/model/RoutingRuleAction.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




RoutingRuleAction::RoutingRuleAction()
{
    actionId_ = "";
    actionIdIsSet_ = false;
    ruleId_ = "";
    ruleIdIsSet_ = false;
    appId_ = "";
    appIdIsSet_ = false;
    channel_ = "";
    channelIsSet_ = false;
    channelDetailIsSet_ = false;
}

RoutingRuleAction::~RoutingRuleAction() = default;

void RoutingRuleAction::validate()
{
}

web::json::value RoutingRuleAction::toJson() const
{
    web::json::value val = web::json::value::object();

    if(actionIdIsSet_) {
        val[utility::conversions::to_string_t("action_id")] = ModelBase::toJson(actionId_);
    }
    if(ruleIdIsSet_) {
        val[utility::conversions::to_string_t("rule_id")] = ModelBase::toJson(ruleId_);
    }
    if(appIdIsSet_) {
        val[utility::conversions::to_string_t("app_id")] = ModelBase::toJson(appId_);
    }
    if(channelIsSet_) {
        val[utility::conversions::to_string_t("channel")] = ModelBase::toJson(channel_);
    }
    if(channelDetailIsSet_) {
        val[utility::conversions::to_string_t("channel_detail")] = ModelBase::toJson(channelDetail_);
    }

    return val;
}
bool RoutingRuleAction::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("action_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("action_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setActionId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("app_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("app_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAppId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("channel_detail"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("channel_detail"));
        if(!fieldValue.is_null())
        {
            ChannelDetail refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setChannelDetail(refVal);
        }
    }
    return ok;
}


std::string RoutingRuleAction::getActionId() const
{
    return actionId_;
}

void RoutingRuleAction::setActionId(const std::string& value)
{
    actionId_ = value;
    actionIdIsSet_ = true;
}

bool RoutingRuleAction::actionIdIsSet() const
{
    return actionIdIsSet_;
}

void RoutingRuleAction::unsetactionId()
{
    actionIdIsSet_ = false;
}

std::string RoutingRuleAction::getRuleId() const
{
    return ruleId_;
}

void RoutingRuleAction::setRuleId(const std::string& value)
{
    ruleId_ = value;
    ruleIdIsSet_ = true;
}

bool RoutingRuleAction::ruleIdIsSet() const
{
    return ruleIdIsSet_;
}

void RoutingRuleAction::unsetruleId()
{
    ruleIdIsSet_ = false;
}

std::string RoutingRuleAction::getAppId() const
{
    return appId_;
}

void RoutingRuleAction::setAppId(const std::string& value)
{
    appId_ = value;
    appIdIsSet_ = true;
}

bool RoutingRuleAction::appIdIsSet() const
{
    return appIdIsSet_;
}

void RoutingRuleAction::unsetappId()
{
    appIdIsSet_ = false;
}

std::string RoutingRuleAction::getChannel() const
{
    return channel_;
}

void RoutingRuleAction::setChannel(const std::string& value)
{
    channel_ = value;
    channelIsSet_ = true;
}

bool RoutingRuleAction::channelIsSet() const
{
    return channelIsSet_;
}

void RoutingRuleAction::unsetchannel()
{
    channelIsSet_ = false;
}

ChannelDetail RoutingRuleAction::getChannelDetail() const
{
    return channelDetail_;
}

void RoutingRuleAction::setChannelDetail(const ChannelDetail& value)
{
    channelDetail_ = value;
    channelDetailIsSet_ = true;
}

bool RoutingRuleAction::channelDetailIsSet() const
{
    return channelDetailIsSet_;
}

void RoutingRuleAction::unsetchannelDetail()
{
    channelDetailIsSet_ = false;
}

}
}
}
}
}


