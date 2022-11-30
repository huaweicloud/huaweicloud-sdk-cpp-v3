

#include "huaweicloud/frs/v2/model/CompareFaceByUrlRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Frs {
namespace V2 {
namespace Model {




CompareFaceByUrlRequest::CompareFaceByUrlRequest()
{
    bodyIsSet_ = false;
}

CompareFaceByUrlRequest::~CompareFaceByUrlRequest() = default;

void CompareFaceByUrlRequest::validate()
{
}

web::json::value CompareFaceByUrlRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}

bool CompareFaceByUrlRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            FaceCompareUrlReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


FaceCompareUrlReq CompareFaceByUrlRequest::getBody() const
{
    return body_;
}

void CompareFaceByUrlRequest::setBody(const FaceCompareUrlReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CompareFaceByUrlRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CompareFaceByUrlRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


