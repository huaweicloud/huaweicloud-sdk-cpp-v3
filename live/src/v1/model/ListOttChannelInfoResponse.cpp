

#include "huaweicloud/live/v1/model/ListOttChannelInfoResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {




ListOttChannelInfoResponse::ListOttChannelInfoResponse()
{
    total_ = 0;
    totalIsSet_ = false;
    channelsIsSet_ = false;
}

ListOttChannelInfoResponse::~ListOttChannelInfoResponse() = default;

void ListOttChannelInfoResponse::validate()
{
}

web::json::value ListOttChannelInfoResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(totalIsSet_) {
        val[utility::conversions::to_string_t("total")] = ModelBase::toJson(total_);
    }
    if(channelsIsSet_) {
        val[utility::conversions::to_string_t("channels")] = ModelBase::toJson(channels_);
    }

    return val;
}
bool ListOttChannelInfoResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("total"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotal(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("channels"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("channels"));
        if(!fieldValue.is_null())
        {
            std::vector<CreateOttChannelInfoReq> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setChannels(refVal);
        }
    }
    return ok;
}


int32_t ListOttChannelInfoResponse::getTotal() const
{
    return total_;
}

void ListOttChannelInfoResponse::setTotal(int32_t value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool ListOttChannelInfoResponse::totalIsSet() const
{
    return totalIsSet_;
}

void ListOttChannelInfoResponse::unsettotal()
{
    totalIsSet_ = false;
}

std::vector<CreateOttChannelInfoReq>& ListOttChannelInfoResponse::getChannels()
{
    return channels_;
}

void ListOttChannelInfoResponse::setChannels(const std::vector<CreateOttChannelInfoReq>& value)
{
    channels_ = value;
    channelsIsSet_ = true;
}

bool ListOttChannelInfoResponse::channelsIsSet() const
{
    return channelsIsSet_;
}

void ListOttChannelInfoResponse::unsetchannels()
{
    channelsIsSet_ = false;
}

}
}
}
}
}


