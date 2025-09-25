

#include "huaweicloud/codehub/v4/model/ListGroupMergeRequestValidAssignedCandidatesResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




ListGroupMergeRequestValidAssignedCandidatesResponse::ListGroupMergeRequestValidAssignedCandidatesResponse()
{
    bodyIsSet_ = false;
}

ListGroupMergeRequestValidAssignedCandidatesResponse::~ListGroupMergeRequestValidAssignedCandidatesResponse() = default;

void ListGroupMergeRequestValidAssignedCandidatesResponse::validate()
{
}

web::json::value ListGroupMergeRequestValidAssignedCandidatesResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool ListGroupMergeRequestValidAssignedCandidatesResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            std::vector<MergeRequestVoteReviewerDto> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::vector<MergeRequestVoteReviewerDto>& ListGroupMergeRequestValidAssignedCandidatesResponse::getBody()
{
    return body_;
}

void ListGroupMergeRequestValidAssignedCandidatesResponse::setBody(const std::vector<MergeRequestVoteReviewerDto>& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ListGroupMergeRequestValidAssignedCandidatesResponse::bodyIsSet() const
{
    return bodyIsSet_;
}

void ListGroupMergeRequestValidAssignedCandidatesResponse::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


