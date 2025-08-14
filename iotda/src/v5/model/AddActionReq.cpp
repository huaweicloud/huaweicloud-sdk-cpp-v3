

#include "huaweicloud/iotda/v5/model/AddActionReq.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




AddActionReq::AddActionReq()
{
    ruleId_ = "";
    ruleIdIsSet_ = false;
    channel_ = "";
    channelIsSet_ = false;
    channelDetailIsSet_ = false;
}

AddActionReq::~AddActionReq() = default;

void AddActionReq::validate()
{
}

web::json::value AddActionReq::toJson() const
{
    web::json::value val = web::json::value::object();

    if(ruleIdIsSet_) {
        val[utility::conversions::to_string_t("rule_id")] = ModelBase::toJson(ruleId_);
    }
    if(channelIsSet_) {
        val[utility::conversions::to_string_t("channel")] = ModelBase::toJson(channel_);
    }
    if(channelDetailIsSet_) {
        val[utility::conversions::to_string_t("channel_detail")] = ModelBase::toJson(channelDetail_);
    }

    return val;
}
bool AddActionReq::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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


std::string AddActionReq::getRuleId() const
{
    return ruleId_;
}

void AddActionReq::setRuleId(const std::string& value)
{
    ruleId_ = value;
    ruleIdIsSet_ = true;
}

bool AddActionReq::ruleIdIsSet() const
{
    return ruleIdIsSet_;
}

void AddActionReq::unsetruleId()
{
    ruleIdIsSet_ = false;
}

std::string AddActionReq::getChannel() const
{
    return channel_;
}

void AddActionReq::setChannel(const std::string& value)
{
    channel_ = value;
    channelIsSet_ = true;
}

bool AddActionReq::channelIsSet() const
{
    return channelIsSet_;
}

void AddActionReq::unsetchannel()
{
    channelIsSet_ = false;
}

ChannelDetail AddActionReq::getChannelDetail() const
{
    return channelDetail_;
}

void AddActionReq::setChannelDetail(const ChannelDetail& value)
{
    channelDetail_ = value;
    channelDetailIsSet_ = true;
}

bool AddActionReq::channelDetailIsSet() const
{
    return channelDetailIsSet_;
}

void AddActionReq::unsetchannelDetail()
{
    channelDetailIsSet_ = false;
}

}
}
}
}
}


