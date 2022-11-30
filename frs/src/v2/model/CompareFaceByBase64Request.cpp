

#include "huaweicloud/frs/v2/model/CompareFaceByBase64Request.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Frs {
namespace V2 {
namespace Model {




CompareFaceByBase64Request::CompareFaceByBase64Request()
{
    bodyIsSet_ = false;
}

CompareFaceByBase64Request::~CompareFaceByBase64Request() = default;

void CompareFaceByBase64Request::validate()
{
}

web::json::value CompareFaceByBase64Request::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}

bool CompareFaceByBase64Request::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            FaceCompareBase64Req refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


FaceCompareBase64Req CompareFaceByBase64Request::getBody() const
{
    return body_;
}

void CompareFaceByBase64Request::setBody(const FaceCompareBase64Req& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CompareFaceByBase64Request::bodyIsSet() const
{
    return bodyIsSet_;
}

void CompareFaceByBase64Request::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


