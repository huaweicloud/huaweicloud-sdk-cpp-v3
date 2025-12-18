

#include "huaweicloud/meeting/v1/model/ShowRegionInfoOfMeetingResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




ShowRegionInfoOfMeetingResponse::ShowRegionInfoOfMeetingResponse()
{
    regionIP_ = "";
    regionIPIsSet_ = false;
    regionUrl_ = "";
    regionUrlIsSet_ = false;
}

ShowRegionInfoOfMeetingResponse::~ShowRegionInfoOfMeetingResponse() = default;

void ShowRegionInfoOfMeetingResponse::validate()
{
}

web::json::value ShowRegionInfoOfMeetingResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(regionIPIsSet_) {
        val[utility::conversions::to_string_t("regionIP")] = ModelBase::toJson(regionIP_);
    }
    if(regionUrlIsSet_) {
        val[utility::conversions::to_string_t("regionUrl")] = ModelBase::toJson(regionUrl_);
    }

    return val;
}
bool ShowRegionInfoOfMeetingResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("regionIP"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("regionIP"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRegionIP(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("regionUrl"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("regionUrl"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRegionUrl(refVal);
        }
    }
    return ok;
}


std::string ShowRegionInfoOfMeetingResponse::getRegionIP() const
{
    return regionIP_;
}

void ShowRegionInfoOfMeetingResponse::setRegionIP(const std::string& value)
{
    regionIP_ = value;
    regionIPIsSet_ = true;
}

bool ShowRegionInfoOfMeetingResponse::regionIPIsSet() const
{
    return regionIPIsSet_;
}

void ShowRegionInfoOfMeetingResponse::unsetregionIP()
{
    regionIPIsSet_ = false;
}

std::string ShowRegionInfoOfMeetingResponse::getRegionUrl() const
{
    return regionUrl_;
}

void ShowRegionInfoOfMeetingResponse::setRegionUrl(const std::string& value)
{
    regionUrl_ = value;
    regionUrlIsSet_ = true;
}

bool ShowRegionInfoOfMeetingResponse::regionUrlIsSet() const
{
    return regionUrlIsSet_;
}

void ShowRegionInfoOfMeetingResponse::unsetregionUrl()
{
    regionUrlIsSet_ = false;
}

}
}
}
}
}


