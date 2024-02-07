

#include "huaweicloud/geip/v3/model/BatchCreateGlobalEipTagsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Geip {
namespace V3 {
namespace Model {




BatchCreateGlobalEipTagsResponse::BatchCreateGlobalEipTagsResponse()
{
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

BatchCreateGlobalEipTagsResponse::~BatchCreateGlobalEipTagsResponse() = default;

void BatchCreateGlobalEipTagsResponse::validate()
{
}

web::json::value BatchCreateGlobalEipTagsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("x-request-id")] = ModelBase::toJson(xRequestId_);
    }

    return val;
}
bool BatchCreateGlobalEipTagsResponse::fromJson(const web::json::value& val)
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


std::string BatchCreateGlobalEipTagsResponse::getXRequestId() const
{
    return xRequestId_;
}

void BatchCreateGlobalEipTagsResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool BatchCreateGlobalEipTagsResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void BatchCreateGlobalEipTagsResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


