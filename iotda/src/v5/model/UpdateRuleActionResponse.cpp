

#include "huaweicloud/iotda/v5/model/UpdateRuleActionResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




UpdateRuleActionResponse::UpdateRuleActionResponse()
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

UpdateRuleActionResponse::~UpdateRuleActionResponse() = default;

void UpdateRuleActionResponse::validate()
{
}

web::json::value UpdateRuleActionResponse::toJson() const
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
bool UpdateRuleActionResponse::fromJson(const web::json::value& val)
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


std::string UpdateRuleActionResponse::getActionId() const
{
    return actionId_;
}

void UpdateRuleActionResponse::setActionId(const std::string& value)
{
    actionId_ = value;
    actionIdIsSet_ = true;
}

bool UpdateRuleActionResponse::actionIdIsSet() const
{
    return actionIdIsSet_;
}

void UpdateRuleActionResponse::unsetactionId()
{
    actionIdIsSet_ = false;
}

std::string UpdateRuleActionResponse::getRuleId() const
{
    return ruleId_;
}

void UpdateRuleActionResponse::setRuleId(const std::string& value)
{
    ruleId_ = value;
    ruleIdIsSet_ = true;
}

bool UpdateRuleActionResponse::ruleIdIsSet() const
{
    return ruleIdIsSet_;
}

void UpdateRuleActionResponse::unsetruleId()
{
    ruleIdIsSet_ = false;
}

std::string UpdateRuleActionResponse::getAppId() const
{
    return appId_;
}

void UpdateRuleActionResponse::setAppId(const std::string& value)
{
    appId_ = value;
    appIdIsSet_ = true;
}

bool UpdateRuleActionResponse::appIdIsSet() const
{
    return appIdIsSet_;
}

void UpdateRuleActionResponse::unsetappId()
{
    appIdIsSet_ = false;
}

std::string UpdateRuleActionResponse::getChannel() const
{
    return channel_;
}

void UpdateRuleActionResponse::setChannel(const std::string& value)
{
    channel_ = value;
    channelIsSet_ = true;
}

bool UpdateRuleActionResponse::channelIsSet() const
{
    return channelIsSet_;
}

void UpdateRuleActionResponse::unsetchannel()
{
    channelIsSet_ = false;
}

ChannelDetail UpdateRuleActionResponse::getChannelDetail() const
{
    return channelDetail_;
}

void UpdateRuleActionResponse::setChannelDetail(const ChannelDetail& value)
{
    channelDetail_ = value;
    channelDetailIsSet_ = true;
}

bool UpdateRuleActionResponse::channelDetailIsSet() const
{
    return channelDetailIsSet_;
}

void UpdateRuleActionResponse::unsetchannelDetail()
{
    channelDetailIsSet_ = false;
}

}
}
}
}
}


