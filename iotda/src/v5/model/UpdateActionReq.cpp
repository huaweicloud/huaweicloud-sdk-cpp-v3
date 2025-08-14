

#include "huaweicloud/iotda/v5/model/UpdateActionReq.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




UpdateActionReq::UpdateActionReq()
{
    channel_ = "";
    channelIsSet_ = false;
    channelDetailIsSet_ = false;
}

UpdateActionReq::~UpdateActionReq() = default;

void UpdateActionReq::validate()
{
}

web::json::value UpdateActionReq::toJson() const
{
    web::json::value val = web::json::value::object();

    if(channelIsSet_) {
        val[utility::conversions::to_string_t("channel")] = ModelBase::toJson(channel_);
    }
    if(channelDetailIsSet_) {
        val[utility::conversions::to_string_t("channel_detail")] = ModelBase::toJson(channelDetail_);
    }

    return val;
}
bool UpdateActionReq::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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


std::string UpdateActionReq::getChannel() const
{
    return channel_;
}

void UpdateActionReq::setChannel(const std::string& value)
{
    channel_ = value;
    channelIsSet_ = true;
}

bool UpdateActionReq::channelIsSet() const
{
    return channelIsSet_;
}

void UpdateActionReq::unsetchannel()
{
    channelIsSet_ = false;
}

ChannelDetail UpdateActionReq::getChannelDetail() const
{
    return channelDetail_;
}

void UpdateActionReq::setChannelDetail(const ChannelDetail& value)
{
    channelDetail_ = value;
    channelDetailIsSet_ = true;
}

bool UpdateActionReq::channelDetailIsSet() const
{
    return channelDetailIsSet_;
}

void UpdateActionReq::unsetchannelDetail()
{
    channelDetailIsSet_ = false;
}

}
}
}
}
}


