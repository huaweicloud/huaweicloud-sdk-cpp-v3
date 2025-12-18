

#include "huaweicloud/meeting/v1/model/StartMeetingResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




StartMeetingResponse::StartMeetingResponse()
{
    uuid_ = "";
    uuidIsSet_ = false;
    regionIP_ = "";
    regionIPIsSet_ = false;
}

StartMeetingResponse::~StartMeetingResponse() = default;

void StartMeetingResponse::validate()
{
}

web::json::value StartMeetingResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(uuidIsSet_) {
        val[utility::conversions::to_string_t("uuid")] = ModelBase::toJson(uuid_);
    }
    if(regionIPIsSet_) {
        val[utility::conversions::to_string_t("regionIP")] = ModelBase::toJson(regionIP_);
    }

    return val;
}
bool StartMeetingResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("uuid"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("uuid"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUuid(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("regionIP"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("regionIP"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRegionIP(refVal);
        }
    }
    return ok;
}


std::string StartMeetingResponse::getUuid() const
{
    return uuid_;
}

void StartMeetingResponse::setUuid(const std::string& value)
{
    uuid_ = value;
    uuidIsSet_ = true;
}

bool StartMeetingResponse::uuidIsSet() const
{
    return uuidIsSet_;
}

void StartMeetingResponse::unsetuuid()
{
    uuidIsSet_ = false;
}

std::string StartMeetingResponse::getRegionIP() const
{
    return regionIP_;
}

void StartMeetingResponse::setRegionIP(const std::string& value)
{
    regionIP_ = value;
    regionIPIsSet_ = true;
}

bool StartMeetingResponse::regionIPIsSet() const
{
    return regionIPIsSet_;
}

void StartMeetingResponse::unsetregionIP()
{
    regionIPIsSet_ = false;
}

}
}
}
}
}


