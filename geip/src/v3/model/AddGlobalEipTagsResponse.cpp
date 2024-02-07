

#include "huaweicloud/geip/v3/model/AddGlobalEipTagsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Geip {
namespace V3 {
namespace Model {




AddGlobalEipTagsResponse::AddGlobalEipTagsResponse()
{
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

AddGlobalEipTagsResponse::~AddGlobalEipTagsResponse() = default;

void AddGlobalEipTagsResponse::validate()
{
}

web::json::value AddGlobalEipTagsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("X-Request-Id")] = ModelBase::toJson(xRequestId_);
    }

    return val;
}
bool AddGlobalEipTagsResponse::fromJson(const web::json::value& val)
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


std::string AddGlobalEipTagsResponse::getXRequestId() const
{
    return xRequestId_;
}

void AddGlobalEipTagsResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool AddGlobalEipTagsResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void AddGlobalEipTagsResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


