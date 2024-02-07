

#include "huaweicloud/geip/v3/model/DeleteInternetBandwidthTagResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Geip {
namespace V3 {
namespace Model {




DeleteInternetBandwidthTagResponse::DeleteInternetBandwidthTagResponse()
{
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

DeleteInternetBandwidthTagResponse::~DeleteInternetBandwidthTagResponse() = default;

void DeleteInternetBandwidthTagResponse::validate()
{
}

web::json::value DeleteInternetBandwidthTagResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("X-Request-Id")] = ModelBase::toJson(xRequestId_);
    }

    return val;
}
bool DeleteInternetBandwidthTagResponse::fromJson(const web::json::value& val)
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


std::string DeleteInternetBandwidthTagResponse::getXRequestId() const
{
    return xRequestId_;
}

void DeleteInternetBandwidthTagResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool DeleteInternetBandwidthTagResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void DeleteInternetBandwidthTagResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


