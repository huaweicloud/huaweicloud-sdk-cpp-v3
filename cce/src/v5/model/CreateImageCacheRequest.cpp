

#include "huaweicloud/cce/v5/model/CreateImageCacheRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V5 {
namespace Model {




CreateImageCacheRequest::CreateImageCacheRequest()
{
    bodyIsSet_ = false;
}

CreateImageCacheRequest::~CreateImageCacheRequest() = default;

void CreateImageCacheRequest::validate()
{
}

web::json::value CreateImageCacheRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool CreateImageCacheRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            CreateImageCacheRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


CreateImageCacheRequestBody CreateImageCacheRequest::getBody() const
{
    return body_;
}

void CreateImageCacheRequest::setBody(const CreateImageCacheRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateImageCacheRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateImageCacheRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


