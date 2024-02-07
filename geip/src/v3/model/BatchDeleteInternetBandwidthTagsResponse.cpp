

#include "huaweicloud/geip/v3/model/BatchDeleteInternetBandwidthTagsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Geip {
namespace V3 {
namespace Model {




BatchDeleteInternetBandwidthTagsResponse::BatchDeleteInternetBandwidthTagsResponse()
{
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

BatchDeleteInternetBandwidthTagsResponse::~BatchDeleteInternetBandwidthTagsResponse() = default;

void BatchDeleteInternetBandwidthTagsResponse::validate()
{
}

web::json::value BatchDeleteInternetBandwidthTagsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("x-request-id")] = ModelBase::toJson(xRequestId_);
    }

    return val;
}
bool BatchDeleteInternetBandwidthTagsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("x-request-id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("x-request-id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXRequestId(refVal);
        }
    }
    return ok;
}


std::string BatchDeleteInternetBandwidthTagsResponse::getXRequestId() const
{
    return xRequestId_;
}

void BatchDeleteInternetBandwidthTagsResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool BatchDeleteInternetBandwidthTagsResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void BatchDeleteInternetBandwidthTagsResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


