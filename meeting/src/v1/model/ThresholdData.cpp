

#include "huaweicloud/meeting/v1/model/ThresholdData.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




ThresholdData::ThresholdData()
{
    receiving_ = 0;
    receivingIsSet_ = false;
    receivingDefault_ = 0;
    receivingDefaultIsSet_ = false;
    sending_ = 0;
    sendingIsSet_ = false;
    sendingDefault_ = 0;
    sendingDefaultIsSet_ = false;
}

ThresholdData::~ThresholdData() = default;

void ThresholdData::validate()
{
}

web::json::value ThresholdData::toJson() const
{
    web::json::value val = web::json::value::object();

    if(receivingIsSet_) {
        val[utility::conversions::to_string_t("receiving")] = ModelBase::toJson(receiving_);
    }
    if(receivingDefaultIsSet_) {
        val[utility::conversions::to_string_t("receivingDefault")] = ModelBase::toJson(receivingDefault_);
    }
    if(sendingIsSet_) {
        val[utility::conversions::to_string_t("sending")] = ModelBase::toJson(sending_);
    }
    if(sendingDefaultIsSet_) {
        val[utility::conversions::to_string_t("sendingDefault")] = ModelBase::toJson(sendingDefault_);
    }

    return val;
}
bool ThresholdData::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("receivingDefault"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("receivingDefault"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReceivingDefault(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("sendingDefault"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sendingDefault"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSendingDefault(refVal);
        }
    }
    return ok;
}


int32_t ThresholdData::getReceiving() const
{
    return receiving_;
}

void ThresholdData::setReceiving(int32_t value)
{
    receiving_ = value;
    receivingIsSet_ = true;
}

bool ThresholdData::receivingIsSet() const
{
    return receivingIsSet_;
}

void ThresholdData::unsetreceiving()
{
    receivingIsSet_ = false;
}

int32_t ThresholdData::getReceivingDefault() const
{
    return receivingDefault_;
}

void ThresholdData::setReceivingDefault(int32_t value)
{
    receivingDefault_ = value;
    receivingDefaultIsSet_ = true;
}

bool ThresholdData::receivingDefaultIsSet() const
{
    return receivingDefaultIsSet_;
}

void ThresholdData::unsetreceivingDefault()
{
    receivingDefaultIsSet_ = false;
}

int32_t ThresholdData::getSending() const
{
    return sending_;
}

void ThresholdData::setSending(int32_t value)
{
    sending_ = value;
    sendingIsSet_ = true;
}

bool ThresholdData::sendingIsSet() const
{
    return sendingIsSet_;
}

void ThresholdData::unsetsending()
{
    sendingIsSet_ = false;
}

int32_t ThresholdData::getSendingDefault() const
{
    return sendingDefault_;
}

void ThresholdData::setSendingDefault(int32_t value)
{
    sendingDefault_ = value;
    sendingDefaultIsSet_ = true;
}

bool ThresholdData::sendingDefaultIsSet() const
{
    return sendingDefaultIsSet_;
}

void ThresholdData::unsetsendingDefault()
{
    sendingDefaultIsSet_ = false;
}

}
}
}
}
}


