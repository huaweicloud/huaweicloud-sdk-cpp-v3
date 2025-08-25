

#include "huaweicloud/cce/v5/model/DeleteImageCacheResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V5 {
namespace Model {




DeleteImageCacheResponse::DeleteImageCacheResponse()
{
    bodyIsSet_ = false;
}

DeleteImageCacheResponse::~DeleteImageCacheResponse() = default;

void DeleteImageCacheResponse::validate()
{
}

web::json::value DeleteImageCacheResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool DeleteImageCacheResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            Object refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


Object DeleteImageCacheResponse::getBody() const
{
    return body_;
}

void DeleteImageCacheResponse::setBody(const Object& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool DeleteImageCacheResponse::bodyIsSet() const
{
    return bodyIsSet_;
}

void DeleteImageCacheResponse::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


