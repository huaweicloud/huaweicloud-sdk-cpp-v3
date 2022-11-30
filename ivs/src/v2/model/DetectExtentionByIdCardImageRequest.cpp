

#include "huaweicloud/ivs/v2/model/DetectExtentionByIdCardImageRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ivs {
namespace V2 {
namespace Model {




DetectExtentionByIdCardImageRequest::DetectExtentionByIdCardImageRequest()
{
    bodyIsSet_ = false;
}

DetectExtentionByIdCardImageRequest::~DetectExtentionByIdCardImageRequest() = default;

void DetectExtentionByIdCardImageRequest::validate()
{
}

web::json::value DetectExtentionByIdCardImageRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}

bool DetectExtentionByIdCardImageRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            IvsExtentionByIdCardImageRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


IvsExtentionByIdCardImageRequestBody DetectExtentionByIdCardImageRequest::getBody() const
{
    return body_;
}

void DetectExtentionByIdCardImageRequest::setBody(const IvsExtentionByIdCardImageRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool DetectExtentionByIdCardImageRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void DetectExtentionByIdCardImageRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


