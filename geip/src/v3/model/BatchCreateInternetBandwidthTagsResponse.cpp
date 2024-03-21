

#include "huaweicloud/geip/v3/model/BatchCreateInternetBandwidthTagsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Geip {
namespace V3 {
namespace Model {




BatchCreateInternetBandwidthTagsResponse::BatchCreateInternetBandwidthTagsResponse()
{
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

BatchCreateInternetBandwidthTagsResponse::~BatchCreateInternetBandwidthTagsResponse() = default;

void BatchCreateInternetBandwidthTagsResponse::validate()
{
}

web::json::value BatchCreateInternetBandwidthTagsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("X-Request-Id")] = ModelBase::toJson(xRequestId_);
    }

    return val;
}
bool BatchCreateInternetBandwidthTagsResponse::fromJson(const web::json::value& val)
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


std::string BatchCreateInternetBandwidthTagsResponse::getXRequestId() const
{
    return xRequestId_;
}

void BatchCreateInternetBandwidthTagsResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool BatchCreateInternetBandwidthTagsResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void BatchCreateInternetBandwidthTagsResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


