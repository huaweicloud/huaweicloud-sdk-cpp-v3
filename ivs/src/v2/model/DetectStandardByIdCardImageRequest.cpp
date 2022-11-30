

#include "huaweicloud/ivs/v2/model/DetectStandardByIdCardImageRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ivs {
namespace V2 {
namespace Model {




DetectStandardByIdCardImageRequest::DetectStandardByIdCardImageRequest()
{
    bodyIsSet_ = false;
}

DetectStandardByIdCardImageRequest::~DetectStandardByIdCardImageRequest() = default;

void DetectStandardByIdCardImageRequest::validate()
{
}

web::json::value DetectStandardByIdCardImageRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}

bool DetectStandardByIdCardImageRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            IvsStandardByIdCardImageRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


IvsStandardByIdCardImageRequestBody DetectStandardByIdCardImageRequest::getBody() const
{
    return body_;
}

void DetectStandardByIdCardImageRequest::setBody(const IvsStandardByIdCardImageRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool DetectStandardByIdCardImageRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void DetectStandardByIdCardImageRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


