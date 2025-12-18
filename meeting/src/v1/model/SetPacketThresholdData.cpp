

#include "huaweicloud/meeting/v1/model/SetPacketThresholdData.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




SetPacketThresholdData::SetPacketThresholdData()
{
    receiving_ = 0;
    receivingIsSet_ = false;
    sending_ = 0;
    sendingIsSet_ = false;
}

SetPacketThresholdData::~SetPacketThresholdData() = default;

void SetPacketThresholdData::validate()
{
}

web::json::value SetPacketThresholdData::toJson() const
{
    web::json::value val = web::json::value::object();

    if(receivingIsSet_) {
        val[utility::conversions::to_string_t("receiving")] = ModelBase::toJson(receiving_);
    }
    if(sendingIsSet_) {
        val[utility::conversions::to_string_t("sending")] = ModelBase::toJson(sending_);
    }

    return val;
}
bool SetPacketThresholdData::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("receiving"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("receiving"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReceiving(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sending"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sending"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSending(refVal);
        }
    }
    return ok;
}


int32_t SetPacketThresholdData::getReceiving() const
{
    return receiving_;
}

void SetPacketThresholdData::setReceiving(int32_t value)
{
    receiving_ = value;
    receivingIsSet_ = true;
}

bool SetPacketThresholdData::receivingIsSet() const
{
    return receivingIsSet_;
}

void SetPacketThresholdData::unsetreceiving()
{
    receivingIsSet_ = false;
}

int32_t SetPacketThresholdData::getSending() const
{
    return sending_;
}

void SetPacketThresholdData::setSending(int32_t value)
{
    sending_ = value;
    sendingIsSet_ = true;
}

bool SetPacketThresholdData::sendingIsSet() const
{
    return sendingIsSet_;
}

void SetPacketThresholdData::unsetsending()
{
    sendingIsSet_ = false;
}

}
}
}
}
}


