

#include "huaweicloud/geip/v3/model/DeleteInternetBandwidthResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Geip {
namespace V3 {
namespace Model {




DeleteInternetBandwidthResponse::DeleteInternetBandwidthResponse()
{
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

DeleteInternetBandwidthResponse::~DeleteInternetBandwidthResponse() = default;

void DeleteInternetBandwidthResponse::validate()
{
}

web::json::value DeleteInternetBandwidthResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("X-Request-Id")] = ModelBase::toJson(xRequestId_);
    }

    return val;
}
bool DeleteInternetBandwidthResponse::fromJson(const web::json::value& val)
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


std::string DeleteInternetBandwidthResponse::getXRequestId() const
{
    return xRequestId_;
}

void DeleteInternetBandwidthResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool DeleteInternetBandwidthResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void DeleteInternetBandwidthResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


