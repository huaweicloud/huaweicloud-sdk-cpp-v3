

#include "huaweicloud/geip/v3/model/DeleteGlobalEipResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Geip {
namespace V3 {
namespace Model {




DeleteGlobalEipResponse::DeleteGlobalEipResponse()
{
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

DeleteGlobalEipResponse::~DeleteGlobalEipResponse() = default;

void DeleteGlobalEipResponse::validate()
{
}

web::json::value DeleteGlobalEipResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("X-Request-Id")] = ModelBase::toJson(xRequestId_);
    }

    return val;
}
bool DeleteGlobalEipResponse::fromJson(const web::json::value& val)
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


std::string DeleteGlobalEipResponse::getXRequestId() const
{
    return xRequestId_;
}

void DeleteGlobalEipResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool DeleteGlobalEipResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void DeleteGlobalEipResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


