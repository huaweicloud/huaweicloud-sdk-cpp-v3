

#include "huaweicloud/codehub/v4/model/UpdateMergeRequestReviewersResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




UpdateMergeRequestReviewersResponse::UpdateMergeRequestReviewersResponse()
{
    bodyIsSet_ = false;
}

UpdateMergeRequestReviewersResponse::~UpdateMergeRequestReviewersResponse() = default;

void UpdateMergeRequestReviewersResponse::validate()
{
}

web::json::value UpdateMergeRequestReviewersResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool UpdateMergeRequestReviewersResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            std::vector<ApproverBasicDto> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::vector<ApproverBasicDto>& UpdateMergeRequestReviewersResponse::getBody()
{
    return body_;
}

void UpdateMergeRequestReviewersResponse::setBody(const std::vector<ApproverBasicDto>& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateMergeRequestReviewersResponse::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateMergeRequestReviewersResponse::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


