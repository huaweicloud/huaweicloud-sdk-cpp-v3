

#include "huaweicloud/ocr/v1/model/RecognizeMacaoIdCardRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ocr {
namespace V1 {
namespace Model {




RecognizeMacaoIdCardRequest::RecognizeMacaoIdCardRequest()
{
    bodyIsSet_ = false;
}

RecognizeMacaoIdCardRequest::~RecognizeMacaoIdCardRequest() = default;

void RecognizeMacaoIdCardRequest::validate()
{
}

web::json::value RecognizeMacaoIdCardRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}

bool RecognizeMacaoIdCardRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            MacaoIdCardRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


MacaoIdCardRequestBody RecognizeMacaoIdCardRequest::getBody() const
{
    return body_;
}

void RecognizeMacaoIdCardRequest::setBody(const MacaoIdCardRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool RecognizeMacaoIdCardRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void RecognizeMacaoIdCardRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


