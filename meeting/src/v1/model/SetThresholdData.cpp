

#include "huaweicloud/meeting/v1/model/SetThresholdData.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




SetThresholdData::SetThresholdData()
{
    receiving_ = 0;
    receivingIsSet_ = false;
    sending_ = 0;
    sendingIsSet_ = false;
}

SetThresholdData::~SetThresholdData() = default;

void SetThresholdData::validate()
{
}

web::json::value SetThresholdData::toJson() const
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
bool SetThresholdData::fromJson(const web::json::value& val)
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


int32_t SetThresholdData::getReceiving() const
{
    return receiving_;
}

void SetThresholdData::setReceiving(int32_t value)
{
    receiving_ = value;
    receivingIsSet_ = true;
}

bool SetThresholdData::receivingIsSet() const
{
    return receivingIsSet_;
}

void SetThresholdData::unsetreceiving()
{
    receivingIsSet_ = false;
}

int32_t SetThresholdData::getSending() const
{
    return sending_;
}

void SetThresholdData::setSending(int32_t value)
{
    sending_ = value;
    sendingIsSet_ = true;
}

bool SetThresholdData::sendingIsSet() const
{
    return sendingIsSet_;
}

void SetThresholdData::unsetsending()
{
    sendingIsSet_ = false;
}

}
}
}
}
}


