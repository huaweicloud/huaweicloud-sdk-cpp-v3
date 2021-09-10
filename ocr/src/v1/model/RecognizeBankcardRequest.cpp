

#include "huaweicloud/ocr/v1/model/RecognizeBankcardRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ocr {
namespace V1 {
namespace Model {




RecognizeBankcardRequest::RecognizeBankcardRequest()
{
    bodyIsSet_ = false;
}

RecognizeBankcardRequest::~RecognizeBankcardRequest() = default;

void RecognizeBankcardRequest::validate()
{
}

web::json::value RecognizeBankcardRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}

bool RecognizeBankcardRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            BankcardRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


BankcardRequestBody RecognizeBankcardRequest::getBody() const
{
    return body_;
}

void RecognizeBankcardRequest::setBody(const BankcardRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool RecognizeBankcardRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void RecognizeBankcardRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


