

#include "huaweicloud/sis/v1/model/RecognizeShortAudioRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Sis {
namespace V1 {
namespace Model {




RecognizeShortAudioRequest::RecognizeShortAudioRequest()
{
    bodyIsSet_ = false;
}

RecognizeShortAudioRequest::~RecognizeShortAudioRequest() = default;

void RecognizeShortAudioRequest::validate()
{
}

web::json::value RecognizeShortAudioRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}

bool RecognizeShortAudioRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            PostShortAudioReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}

PostShortAudioReq RecognizeShortAudioRequest::getBody() const
{
    return body_;
}

void RecognizeShortAudioRequest::setBody(const PostShortAudioReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool RecognizeShortAudioRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void RecognizeShortAudioRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


