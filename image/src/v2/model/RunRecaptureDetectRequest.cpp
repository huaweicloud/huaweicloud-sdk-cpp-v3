

#include "huaweicloud/image/v2/model/RunRecaptureDetectRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Image {
namespace V2 {
namespace Model {




RunRecaptureDetectRequest::RunRecaptureDetectRequest()
{
    bodyIsSet_ = false;
}

RunRecaptureDetectRequest::~RunRecaptureDetectRequest() = default;

void RunRecaptureDetectRequest::validate()
{
}

web::json::value RunRecaptureDetectRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool RunRecaptureDetectRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            RecaptureDetectReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


RecaptureDetectReq RunRecaptureDetectRequest::getBody() const
{
    return body_;
}

void RunRecaptureDetectRequest::setBody(const RecaptureDetectReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool RunRecaptureDetectRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void RunRecaptureDetectRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


