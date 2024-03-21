

#include "huaweicloud/geip/v3/model/BatchDeleteGlobalEipTagsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Geip {
namespace V3 {
namespace Model {




BatchDeleteGlobalEipTagsResponse::BatchDeleteGlobalEipTagsResponse()
{
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

BatchDeleteGlobalEipTagsResponse::~BatchDeleteGlobalEipTagsResponse() = default;

void BatchDeleteGlobalEipTagsResponse::validate()
{
}

web::json::value BatchDeleteGlobalEipTagsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("X-Request-Id")] = ModelBase::toJson(xRequestId_);
    }

    return val;
}
bool BatchDeleteGlobalEipTagsResponse::fromJson(const web::json::value& val)
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


std::string BatchDeleteGlobalEipTagsResponse::getXRequestId() const
{
    return xRequestId_;
}

void BatchDeleteGlobalEipTagsResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool BatchDeleteGlobalEipTagsResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void BatchDeleteGlobalEipTagsResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


