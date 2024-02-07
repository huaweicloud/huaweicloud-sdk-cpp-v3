

#include "huaweicloud/geip/v3/model/DeleteGlobalEipTagResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Geip {
namespace V3 {
namespace Model {




DeleteGlobalEipTagResponse::DeleteGlobalEipTagResponse()
{
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

DeleteGlobalEipTagResponse::~DeleteGlobalEipTagResponse() = default;

void DeleteGlobalEipTagResponse::validate()
{
}

web::json::value DeleteGlobalEipTagResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("X-Request-Id")] = ModelBase::toJson(xRequestId_);
    }

    return val;
}
bool DeleteGlobalEipTagResponse::fromJson(const web::json::value& val)
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


std::string DeleteGlobalEipTagResponse::getXRequestId() const
{
    return xRequestId_;
}

void DeleteGlobalEipTagResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool DeleteGlobalEipTagResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void DeleteGlobalEipTagResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


