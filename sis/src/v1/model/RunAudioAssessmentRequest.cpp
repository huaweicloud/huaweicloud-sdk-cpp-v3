

#include "huaweicloud/sis/v1/model/RunAudioAssessmentRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Sis {
namespace V1 {
namespace Model {




RunAudioAssessmentRequest::RunAudioAssessmentRequest()
{
    bodyIsSet_ = false;
}

RunAudioAssessmentRequest::~RunAudioAssessmentRequest() = default;

void RunAudioAssessmentRequest::validate()
{
}

web::json::value RunAudioAssessmentRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}

bool RunAudioAssessmentRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            PostShortAudioAssessmentReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}

PostShortAudioAssessmentReq RunAudioAssessmentRequest::getBody() const
{
    return body_;
}

void RunAudioAssessmentRequest::setBody(const PostShortAudioAssessmentReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool RunAudioAssessmentRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void RunAudioAssessmentRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


