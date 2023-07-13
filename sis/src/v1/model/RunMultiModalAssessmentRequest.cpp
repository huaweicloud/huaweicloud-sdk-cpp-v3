

#include "huaweicloud/sis/v1/model/RunMultiModalAssessmentRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Sis {
namespace V1 {
namespace Model {




RunMultiModalAssessmentRequest::RunMultiModalAssessmentRequest()
{
    bodyIsSet_ = false;
}

RunMultiModalAssessmentRequest::~RunMultiModalAssessmentRequest() = default;

void RunMultiModalAssessmentRequest::validate()
{
}

web::json::value RunMultiModalAssessmentRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}

bool RunMultiModalAssessmentRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            PostMultiModalAssessmentReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}

PostMultiModalAssessmentReq RunMultiModalAssessmentRequest::getBody() const
{
    return body_;
}

void RunMultiModalAssessmentRequest::setBody(const PostMultiModalAssessmentReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool RunMultiModalAssessmentRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void RunMultiModalAssessmentRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


