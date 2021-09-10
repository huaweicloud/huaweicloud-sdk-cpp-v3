

#include "huaweicloud/frs/v2/model/DetectLiveFaceByUrlRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Frs {
namespace V2 {
namespace Model {




DetectLiveFaceByUrlRequest::DetectLiveFaceByUrlRequest()
{
    bodyIsSet_ = false;
}

DetectLiveFaceByUrlRequest::~DetectLiveFaceByUrlRequest() = default;

void DetectLiveFaceByUrlRequest::validate()
{
}

web::json::value DetectLiveFaceByUrlRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}

bool DetectLiveFaceByUrlRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            LiveDetectFaceUrlReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


LiveDetectFaceUrlReq DetectLiveFaceByUrlRequest::getBody() const
{
    return body_;
}

void DetectLiveFaceByUrlRequest::setBody(const LiveDetectFaceUrlReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool DetectLiveFaceByUrlRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void DetectLiveFaceByUrlRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


