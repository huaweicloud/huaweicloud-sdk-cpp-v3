

#include "huaweicloud/ocr/v1/model/RecognizeMyanmarIdcardRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ocr {
namespace V1 {
namespace Model {




RecognizeMyanmarIdcardRequest::RecognizeMyanmarIdcardRequest()
{
    bodyIsSet_ = false;
}

RecognizeMyanmarIdcardRequest::~RecognizeMyanmarIdcardRequest() = default;

void RecognizeMyanmarIdcardRequest::validate()
{
}

web::json::value RecognizeMyanmarIdcardRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}

bool RecognizeMyanmarIdcardRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            MyanmarIdcardRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


MyanmarIdcardRequestBody RecognizeMyanmarIdcardRequest::getBody() const
{
    return body_;
}

void RecognizeMyanmarIdcardRequest::setBody(const MyanmarIdcardRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool RecognizeMyanmarIdcardRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void RecognizeMyanmarIdcardRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


