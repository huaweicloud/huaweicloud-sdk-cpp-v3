

#include "huaweicloud/antiddos/v2/model/TriggerQpsDict.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Antiddos {
namespace V2 {
namespace Model {




TriggerQpsDict::TriggerQpsDict()
{
    httpRequestPosId_ = 0L;
    httpRequestPosIdIsSet_ = false;
    httpPacketPerSecond_ = 0L;
    httpPacketPerSecondIsSet_ = false;
}

TriggerQpsDict::~TriggerQpsDict() = default;

void TriggerQpsDict::validate()
{
}

web::json::value TriggerQpsDict::toJson() const
{
    web::json::value val = web::json::value::object();

    if(httpRequestPosIdIsSet_) {
        val[utility::conversions::to_string_t("http_request_pos_id")] = ModelBase::toJson(httpRequestPosId_);
    }
    if(httpPacketPerSecondIsSet_) {
        val[utility::conversions::to_string_t("http_packet_per_second")] = ModelBase::toJson(httpPacketPerSecond_);
    }

    return val;
}
bool TriggerQpsDict::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("http_request_pos_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("http_request_pos_id"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHttpRequestPosId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("http_packet_per_second"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("http_packet_per_second"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHttpPacketPerSecond(refVal);
        }
    }
    return ok;
}


int64_t TriggerQpsDict::getHttpRequestPosId() const
{
    return httpRequestPosId_;
}

void TriggerQpsDict::setHttpRequestPosId(int64_t value)
{
    httpRequestPosId_ = value;
    httpRequestPosIdIsSet_ = true;
}

bool TriggerQpsDict::httpRequestPosIdIsSet() const
{
    return httpRequestPosIdIsSet_;
}

void TriggerQpsDict::unsethttpRequestPosId()
{
    httpRequestPosIdIsSet_ = false;
}

int64_t TriggerQpsDict::getHttpPacketPerSecond() const
{
    return httpPacketPerSecond_;
}

void TriggerQpsDict::setHttpPacketPerSecond(int64_t value)
{
    httpPacketPerSecond_ = value;
    httpPacketPerSecondIsSet_ = true;
}

bool TriggerQpsDict::httpPacketPerSecondIsSet() const
{
    return httpPacketPerSecondIsSet_;
}

void TriggerQpsDict::unsethttpPacketPerSecond()
{
    httpPacketPerSecondIsSet_ = false;
}

}
}
}
}
}


