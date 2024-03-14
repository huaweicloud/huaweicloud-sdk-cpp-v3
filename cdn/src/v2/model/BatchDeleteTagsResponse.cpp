

#include "huaweicloud/cdn/v2/model/BatchDeleteTagsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V2 {
namespace Model {




BatchDeleteTagsResponse::BatchDeleteTagsResponse()
{
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

BatchDeleteTagsResponse::~BatchDeleteTagsResponse() = default;

void BatchDeleteTagsResponse::validate()
{
}

web::json::value BatchDeleteTagsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("X-Request-Id")] = ModelBase::toJson(xRequestId_);
    }

    return val;
}
bool BatchDeleteTagsResponse::fromJson(const web::json::value& val)
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


std::string BatchDeleteTagsResponse::getXRequestId() const
{
    return xRequestId_;
}

void BatchDeleteTagsResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool BatchDeleteTagsResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void BatchDeleteTagsResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


