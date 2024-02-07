

#include "huaweicloud/geip/v3/model/DeleteGlobalEipSegmentResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Geip {
namespace V3 {
namespace Model {




DeleteGlobalEipSegmentResponse::DeleteGlobalEipSegmentResponse()
{
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

DeleteGlobalEipSegmentResponse::~DeleteGlobalEipSegmentResponse() = default;

void DeleteGlobalEipSegmentResponse::validate()
{
}

web::json::value DeleteGlobalEipSegmentResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("X-Request-Id")] = ModelBase::toJson(xRequestId_);
    }

    return val;
}
bool DeleteGlobalEipSegmentResponse::fromJson(const web::json::value& val)
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


std::string DeleteGlobalEipSegmentResponse::getXRequestId() const
{
    return xRequestId_;
}

void DeleteGlobalEipSegmentResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool DeleteGlobalEipSegmentResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void DeleteGlobalEipSegmentResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


