

#include "huaweicloud/ocr/v1/model/RecognizeWebImageRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ocr {
namespace V1 {
namespace Model {




RecognizeWebImageRequest::RecognizeWebImageRequest()
{
    bodyIsSet_ = false;
}

RecognizeWebImageRequest::~RecognizeWebImageRequest() = default;

void RecognizeWebImageRequest::validate()
{
}

web::json::value RecognizeWebImageRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}

bool RecognizeWebImageRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            WebImageRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


WebImageRequestBody RecognizeWebImageRequest::getBody() const
{
    return body_;
}

void RecognizeWebImageRequest::setBody(const WebImageRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool RecognizeWebImageRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void RecognizeWebImageRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


