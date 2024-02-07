

#include "huaweicloud/geip/v3/model/AddInternetBandwidthTagsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Geip {
namespace V3 {
namespace Model {




AddInternetBandwidthTagsResponse::AddInternetBandwidthTagsResponse()
{
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

AddInternetBandwidthTagsResponse::~AddInternetBandwidthTagsResponse() = default;

void AddInternetBandwidthTagsResponse::validate()
{
}

web::json::value AddInternetBandwidthTagsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("X-Request-Id")] = ModelBase::toJson(xRequestId_);
    }

    return val;
}
bool AddInternetBandwidthTagsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("X-Request-Id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Request-Id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXRequestId(refVal);
        }
    }
    return ok;
}


std::string AddInternetBandwidthTagsResponse::getXRequestId() const
{
    return xRequestId_;
}

void AddInternetBandwidthTagsResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool AddInternetBandwidthTagsResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void AddInternetBandwidthTagsResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


